#pragma once
#include <optional>
#include <stdexcept>
#include <iostream>


class MyClass {
public:
    int myMethod(int x) {
        if (x == 0) {
            throw std::runtime_error("Divide by zero error");
        }
        return 10 / x;
    }
};


std::pair<std::optional<int>, std::exception_ptr> wrappedMethod(MyClass& obj, int x);

