#include "utils.h"
#include <limits>  // ��� std::numeric_limits

namespace utils {

    // ������� ��� ����� ������
    template <typename T>
    void input(const std::string& prompt, T& value) {
        std::cout << prompt;
        while (true) {
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear(); // ������� ���� ������
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� ������ ������� � ������
                std::cout << "������ �����! ����������, ������� �������� ���� " << typeid(T).name() << ": ";
            }
            else {
                break;
            }
        }
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

// ����� ������������ �������� ��� double � int
template void utils::input<double>(const std::string&, double&);
template void utils::output<double>(const std::string&, double);

template void utils::input<int>(const std::string&, int&);
template void utils::output<int>(const std::string&, int);
