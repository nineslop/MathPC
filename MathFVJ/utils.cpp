#include "utils.h"
#include <limits>  // Для std::numeric_limits

namespace utils {

    // Функция для ввода данных
    template <typename T>
    void input(const std::string& prompt, T& value) {
        std::cout << prompt;
        while (true) {
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear(); // Очищаем флаг ошибки
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем лишние символы в потоке
                std::cout << "Ошибка ввода! Пожалуйста, введите значение типа " << typeid(T).name() << ": ";
            }
            else {
                break;
            }
        }
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

// Явная инстанциация шаблонов для double и int
template void utils::input<double>(const std::string&, double&);
template void utils::output<double>(const std::string&, double);

template void utils::input<int>(const std::string&, int&);
template void utils::output<int>(const std::string&, int);
