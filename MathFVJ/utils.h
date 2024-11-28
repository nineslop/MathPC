#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <algorithm>

namespace utils {

    // Функция для ввода данных
    template <typename T>
    void input(const std::string& prompt, T& value);

    // Функция для вывода данных
    template <typename T>
    void output(const std::string& message, T value);

    // Специализация для строк
    template <>
    void input<std::string>(const std::string& prompt, std::string& value);

    template <>
    void output<std::string>(const std::string& message, std::string value);

}

#endif
