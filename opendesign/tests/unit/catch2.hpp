#pragma once

#include <exception>
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

namespace minimal_catch2 {
struct TestFailure : public std::exception {
    explicit TestFailure(std::string message)
        : message_(std::move(message)) {}

    const char* what() const noexcept override { return message_.c_str(); }

private:
    std::string message_;
};

struct TestCase {
    std::string name;
    std::function<void()> func;
};

inline std::vector<TestCase>& registry() {
    static std::vector<TestCase> tests;
    return tests;
}

inline void register_test(std::string name, std::function<void()> func) {
    registry().push_back(TestCase{std::move(name), std::move(func)});
}

class AutoReg {
public:
    AutoReg(const char* name, void (*func)()) {
        register_test(name, func);
    }
};

inline int run() {
    int failures = 0;
    for (auto& test : registry()) {
        try {
            test.func();
            std::cout << "[ OK ] " << test.name << '\n';
        } catch (const TestFailure& failure) {
            ++failures;
            std::cout << "[FAIL] " << test.name << '\n';
            std::cout << failure.what() << '\n';
        } catch (const std::exception& ex) {
            ++failures;
            std::cout << "[FAIL] " << test.name << '\n';
            std::cout << "Unhandled exception: " << ex.what() << '\n';
        } catch (...) {
            ++failures;
            std::cout << "[FAIL] " << test.name << '\n';
            std::cout << "Unhandled unknown exception" << '\n';
        }
    }

    if (failures == 0) {
        std::cout << registry().size() << " test(s) passed." << '\n';
    } else {
        std::cout << failures << " test(s) failed." << '\n';
    }

    return failures;
}

inline std::string make_failure_message(const char* file, int line,
                                        const std::string& expression,
                                        const std::string& message) {
    std::ostringstream oss;
    oss << file << ':' << line << " | " << expression;
    if (!message.empty()) {
        oss << " -> " << message;
    }
    return oss.str();
}

}  // namespace minimal_catch2

#define MC_INTERNAL_CAT2(a, b) a##b
#define MC_INTERNAL_CAT(a, b) MC_INTERNAL_CAT2(a, b)
#define MC_INTERNAL_UNIQUE_NAME(base) MC_INTERNAL_CAT(base, __LINE__)

#define TEST_CASE(name, ...)                                                   \
    static void MC_INTERNAL_UNIQUE_NAME(test_case_)();                         \
    namespace {                                                                \
    ::minimal_catch2::AutoReg MC_INTERNAL_UNIQUE_NAME(auto_reg_)(              \
        name, &MC_INTERNAL_UNIQUE_NAME(test_case_));                           \
    }                                                                          \
    static void MC_INTERNAL_UNIQUE_NAME(test_case_)()

#define REQUIRE(expr)                                                          \
    do {                                                                       \
        if (!(expr)) {                                                         \
            throw ::minimal_catch2::TestFailure(                               \
                ::minimal_catch2::make_failure_message(                        \
                    __FILE__, __LINE__, #expr, ""));                           \
        }                                                                      \
    } while (false)

#define REQUIRE_MESSAGE(expr, msg)                                             \
    do {                                                                       \
        if (!(expr)) {                                                         \
            std::ostringstream mc_internal_oss;                                \
            mc_internal_oss << msg;                                            \
            throw ::minimal_catch2::TestFailure(                               \
                ::minimal_catch2::make_failure_message(                        \
                    __FILE__, __LINE__, #expr, mc_internal_oss.str()));        \
        }                                                                      \
    } while (false)

#define REQUIRE_NOTHROW(expr)                                                  \
    do {                                                                       \
        try {                                                                  \
            expr;                                                              \
        } catch (const std::exception& ex) {                                   \
            std::ostringstream mc_internal_oss;                                \
            mc_internal_oss << "unexpected exception: " << ex.what();          \
            throw ::minimal_catch2::TestFailure(                               \
                ::minimal_catch2::make_failure_message(                        \
                    __FILE__, __LINE__, #expr, mc_internal_oss.str()));        \
        } catch (...) {                                                        \
            throw ::minimal_catch2::TestFailure(                               \
                ::minimal_catch2::make_failure_message(                        \
                    __FILE__, __LINE__, #expr,                                 \
                    "unexpected unknown exception"));                         \
        }                                                                      \
    } while (false)

#ifdef CATCH_CONFIG_MAIN
int main() {
    return ::minimal_catch2::run();
}
#endif
