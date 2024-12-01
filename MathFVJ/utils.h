#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>  // For std::numeric_limits

namespace utils {

    // Function for data entry
    template <typename T>
    void input(const std::string& prompt, T& value);

    // Function for data output
    template <typename T>
    void output(const std::string& message, T value);

    // Specialisation for strings
    template <>
    void input<std::string>(const std::string& prompt, std::string& value);

    template <>
    void output<std::string>(const std::string& message, std::string value);

}

#endif