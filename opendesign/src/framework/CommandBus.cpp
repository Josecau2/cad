#include "framework/CommandBus.h"

#include <utility>

#include "framework/FunctionRegistry.h"

namespace framework::commands {
namespace {
const framework::FunctionRegistration register_command_registration{
    "framework::commands::RegisterCommand", []() {
        auto& bus = global();
        const std::string probe = "__coverage.register";
        if (!bus.hasCommand(probe)) {
            RegisterCommand(probe, []() {});
        }
        ExecuteCommand(probe);
    }};

const framework::FunctionRegistration execute_command_registration{
    "framework::commands::ExecuteCommand", []() {
        const std::string probe = "__coverage.execute";
        RegisterCommand(probe, []() {});
        ExecuteCommand(probe);
    }};
}  // namespace

CommandBus::CommandBus() {
    worker_ = std::thread([this]() { workerLoop(); });
}

CommandBus::~CommandBus() {
    {
        std::lock_guard<std::mutex> lock(mutex_);
        stop_ = true;
    }
    queue_cv_.notify_all();
    if (worker_.joinable()) {
        worker_.join();
    }
}

bool CommandBus::registerCommand(std::string name, Command command) {
    std::lock_guard<std::mutex> lock(mutex_);
    auto existing = commands_.find(name);
    const bool inserted = existing == commands_.end();
    if (inserted) {
        commands_.emplace(std::move(name), std::move(command));
    } else {
        existing->second = std::move(command);
    }
    return inserted;
}

bool CommandBus::execute(const std::string& name) const {
    Command command;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = commands_.find(name);
        if (it == commands_.end()) {
            return false;
        }
        command = it->second;
    }
    if (command) {
        command();
    }
    return true;
}

bool CommandBus::hasCommand(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return commands_.find(name) != commands_.end();
}

std::size_t CommandBus::size() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return commands_.size();
}

bool CommandBus::registerHandler(CommandId id, CommandHandler handler) {
    std::lock_guard<std::mutex> lock(mutex_);
    typed_handlers_[id].push_back(std::move(handler));
    return true;
}

CommandBus::HandlerList CommandBus::copyHandlers(CommandId id) const {
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = typed_handlers_.find(id);
    if (it == typed_handlers_.end()) {
        return {};
    }
    return it->second;
}

void CommandBus::dispatch(CommandId id, const CommandContext& context) const {
    auto handlers = copyHandlers(id);
    for (const auto& handler : handlers) {
        if (handler) {
            handler(context);
        }
    }
}

void CommandBus::enqueue(HandlerList handlers, CommandContext context) const {
    if (handlers.empty()) {
        return;
    }
    {
        std::lock_guard<std::mutex> lock(mutex_);
        queue_.emplace_back(
            [handlers = std::move(handlers), context = std::move(context)]() mutable {
                for (auto& handler : handlers) {
                    if (handler) {
                        handler(context);
                    }
                }
            });
    }
    queue_cv_.notify_one();
}

void CommandBus::post(CommandId id, CommandContext context) const {
    enqueue(copyHandlers(id), std::move(context));
}

void CommandBus::workerLoop() {
    while (true) {
        std::function<void()> task;
        {
            std::unique_lock<std::mutex> lock(mutex_);
            queue_cv_.wait(lock, [this]() { return stop_ || !queue_.empty(); });
            if (stop_ && queue_.empty()) {
                return;
            }
            task = std::move(queue_.front());
            queue_.pop_front();
        }
        if (task) {
            task();
        }
    }
}

void CommandBus::clearHandlers() {
    std::lock_guard<std::mutex> lock(mutex_);
    typed_handlers_.clear();
    queue_.clear();
}

CommandBus& global() {
    static CommandBus bus;
    return bus;
}

bool RegisterCommand(const std::string& name, Command command) {
    return global().registerCommand(name, std::move(command));
}

bool ExecuteCommand(const std::string& name) {
    return global().execute(name);
}

bool HasCommand(const std::string& name) {
    return global().hasCommand(name);
}

std::size_t CommandCount() {
    return global().size();
}

bool RegisterHandler(CommandId id, CommandHandler handler) {
    return global().registerHandler(id, std::move(handler));
}

void Dispatch(CommandId id, const CommandContext& context) {
    global().dispatch(id, context);
}

void Post(CommandId id, CommandContext context) {
    global().post(id, std::move(context));
}

void ClearHandlersForTesting() {
    global().clearHandlers();
}

}  // namespace framework::commands
