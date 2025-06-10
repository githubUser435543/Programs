#include <iostream>
#include <ranges>
#include <type_traits>

//using namespace std;

template<typename T>
concept is_core = requires(T x) {
    std::cerr << x;
};

template<typename T>
concept is_iterable = std::ranges::range<T>;

template<typename T>
concept is_pair = requires(T x) {
    x.first;
    x.second;
};

template<typename T>
void print(T x) {
    if constexpr (is_core<T>) {
        std::cerr << x;
    } else if constexpr (is_pair<T>) {
        std::cerr << '(';
        print(x.first);
        std::cerr << ", ";
        print(x.second);
        std::cerr << ')';
    } else if constexpr (is_iterable<T>) {
        std::cerr << '[';
        bool flag = false;
        for (auto y : x) {
            if (flag) {
                std::cerr << ", ";
            }
            print(y);
            flag = true;
        }
        std::cerr << ']';
    } else {
        std::cerr << "Unknown type";
    }
}

template<typename T>
void print_debug(std::string s, T x) {
    std::cerr << s << " = ";
    print(x);
    std::cerr << std::endl;
}

template<typename T, typename... Args>
void print_debug(std::string s, T x, Args... args) {
    int idx = 0, layer = 0;
    while (idx < ssize(s) && (s[idx] != ',' || layer != 0)) {
        layer += s[idx] == '(' || s[idx] == '{';
        layer -= s[idx] == ')' || s[idx] == '}';
        idx++;
    }

    std::cerr << s.substr(0, idx) << " = ";
    print(x);
    std::cerr << " | ";
    print_debug(s.substr(s.find_first_not_of(' ', idx + 1)), args...);
}

#ifdef LOCAL
#define debug(...) print_debug(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#endif
