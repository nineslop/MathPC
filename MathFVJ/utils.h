#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

namespace utils {

    // Функция для ввода данных
    template <typename T>
    void input(const std::string& prompt, T& value) {
        std::cout << prompt;
        std::cin >> value;
    }

    // Функция для вывода данных
    template <typename T>
    void output(const std::string& message, T value) {
        std::cout << message << value << std::endl;
    }

    // Специализация для строк
    template <>
    void input<std::string>(const std::string& prompt, std::string& value) {
        std::cout << prompt;
        std::getline(std::cin, value); // Для ввода строк с пробелами
    }

    template <>
    void output<std::string>(const std::string& message, std::string value) {
        std::cout << message << value << std::endl;
    }

}

#endif