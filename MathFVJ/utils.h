#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

namespace utils {

    // ������� ��� ����� ������
    template <typename T>
    void input(const std::string& prompt, T& value) {
        std::cout << prompt;
        std::cin >> value;
    }

    // ������� ��� ������ ������
    template <typename T>
    void output(const std::string& message, T value) {
        std::cout << message << value << std::endl;
    }

    // ������������� ��� �����
    template <>
    void input<std::string>(const std::string& prompt, std::string& value) {
        std::cout << prompt;
        std::getline(std::cin, value); // ��� ����� ����� � ���������
    }

    template <>
    void output<std::string>(const std::string& message, std::string value) {
        std::cout << message << value << std::endl;
    }

}

#endif