
#include "foo.h"
#include <optional>
#include <stdexcept>
#include <iostream>

std::pair<std::optional<int>, std::exception_ptr> wrappedMethod(MyClass& obj, int x) {
    try {
        int result = obj.myMethod(x);
        return {result, nullptr};  // Return result with no exception
    } catch (...) {
        return {std::nullopt, std::current_exception()};  // Return no result with the exception
    }
}

// int main() {
//     MyClass obj;
//     auto [result, exception] = wrappedMethod(obj, 0);

//     if (exception) {
//         try {
//             std::rethrow_exception(exception);
//         } catch (const std::exception& e) {
//             // Handle the exception error
//             std::cout << "Exception caught: " << e.what() << std::endl;
//         }
//     } else {
//         // Use the result
//         std::cout << "Result: " << *result << std::endl;
//     }

//     return 0;
// }

