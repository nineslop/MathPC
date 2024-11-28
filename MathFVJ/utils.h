#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <algorithm>

namespace utils {

    // ������� ��� ����� ������
    template <typename T>
    void input(const std::string& prompt, T& value);

    // ������� ��� ������ ������
    template <typename T>
    void output(const std::string& message, T value);

    // ������������� ��� �����
    template <>
    void input<std::string>(const std::string& prompt, std::string& value);

    template <>
    void output<std::string>(const std::string& message, std::string value);

}

#endif
