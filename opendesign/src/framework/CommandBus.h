#pragma once

#include <condition_variable>
#include <deque>
#include <functional>
#include <map>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

namespace framework::commands {

using Command = std::function<void()>;

enum class CommandId {
    Center,
    Move,
    Rotate,
    Mirror,
    Group,
    Ungroup,
    EditShape,
    LightProps,
};

struct CommandContext {
    std::string view = "design";
    std::string work_box = "primary";
    std::string work_box_type = "edit";
    double cursor_x = 0.0;
    double cursor_y = 0.0;
    int selection_count = 0;
    bool selection_grouped = false;
    bool selection_has_light = false;
};

using CommandHandler = std::function<void(const CommandContext&)>;

class CommandBus {
public:
    CommandBus();
    ~CommandBus();

    bool registerCommand(std::string name, Command command);

    bool execute(const std::string& name) const;

    bool hasCommand(const std::string& name) const;

    std::size_t size() const;

    bool registerHandler(CommandId id, CommandHandler handler);

    void dispatch(CommandId id, const CommandContext& context) const;

    void post(CommandId id, CommandContext context) const;

    void clearHandlers();

private:
    using HandlerList = std::vector<CommandHandler>;

    HandlerList copyHandlers(CommandId id) const;
    void enqueue(HandlerList handlers, CommandContext context) const;
    void workerLoop();

    mutable std::mutex mutex_;
    std::unordered_map<std::string, Command> commands_;
    std::map<CommandId, HandlerList> typed_handlers_;
    mutable std::deque<std::function<void()>> queue_;
    mutable std::condition_variable queue_cv_;
    mutable bool stop_ = false;
    mutable std::thread worker_;
};

CommandBus& global();

bool RegisterCommand(const std::string& name, Command command);

bool ExecuteCommand(const std::string& name);

bool HasCommand(const std::string& name);

std::size_t CommandCount();

bool RegisterHandler(CommandId id, CommandHandler handler);

void Dispatch(CommandId id, const CommandContext& context);

void Post(CommandId id, CommandContext context);

void ClearHandlersForTesting();

}  // namespace framework::commands
