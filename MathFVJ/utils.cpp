#include "utils.h"

namespace utils {

    template <typename T>
    void input(const std::string& prompt, T& value) {
        std::cout << prompt;
        while (true) {
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore unnecessary characters in the stream
                std::cout << "Ошибка ввода! Пожалуйста, введите значение типа " << typeid(T).name() << ": ";
            }
            else {
                break;
            }
        }
    }


    template <typename T>
    void output(const std::string& message, T value) {
        std::cout << message << value << std::endl;
    }

    template <>
    void input<std::string>(const std::string& prompt, std::string& value) {
        std::cout << prompt;
        std::getline(std::cin, value); // To enter strings with spaces
    }

    template <>
    void output<std::string>(const std::string& message, std::string value) {
        std::cout << message << value << std::endl;
    }

}

// Explicit instantiation of templates for double and int
template void utils::input<double>(const std::string&, double&);
template void utils::output<double>(const std::string&, double);

template void utils::input<int>(const std::string&, int&);
template void utils::output<int>(const std::string&, int);
