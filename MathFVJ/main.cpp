#include <iostream>
#include <windows.h>
#include <locale.h>
#include "geometry.h"
#include "algebra.h"
#include "calcul.h"
#include "utils.h"


void geometryMenu();
void algebraMenu();
void calculator();
void functionGraphs();

void clearScreen() {
    system("cls");
}

int main() {
    setlocale(LC_ALL, "Russian");

    int mainChoice;

    while (true) {
        clearScreen();
        std::cout << "Выберите раздел:\n";
        std::cout << "1. Геометрия\n";
        std::cout << "2. Алгебра\n";
        std::cout << "3. Калькулятор\n";
        std::cout << "4. Графики функций\n";
        std::cout << "0. Выход\n";
        std::cout << "Ваш выбор: ";
        std::cin >> mainChoice;

        switch (mainChoice) {
        case 1:
            geometryMenu();
            break;
        case 2:
            algebraMenu();
            break;
        case 3:
            calculator();
            break;
        case 4:
            functionGraphs();
            break;
        case 0:
            clearScreen();
            std::cout << "Выход из программы.\n";
            return 0;
        default:
            std::cout << "Неверный выбор. Попробуйте снова.\n";
            std::cin.ignore();
            std::cin.get();
        }
    }
    return 0;
}

void geometryMenu() {
    while (true) {
        clearScreen();
        int choice;
        std::cout << "Выберите задачу:\n";
        std::cout << "1. Площадь и периметр квадрата\n";
        std::cout << "2. Площадь и периметр прямоугольника\n";
        std::cout << "3. Площадь треугольника\n";
        std::cout << "4. Периметр треугольника\n";
        std::cout << "5. Площадь через стороны (по формуле Герона)\n";
        std::cout << "6. Площадь и периметр круга\n";
        std::cout << "7. Площадь ромба\n";
        std::cout << "8. Периметр ромба\n";
        std::cout << "9. Площадь параллелограмма\n";
        std::cout << "10. Периметр параллелограмма\n";
        std::cout << "11. Площадь трапеции\n";
        std::cout << "12. Периметр трапеции\n";
        std::cout << "13. Объем и площадь поверхности куба\n";
        std::cout << "14. Объем и площадь поверхности прямоугольного параллелепипеда\n";
        std::cout << "15. Объем и площадь поверхности цилиндра\n";
        std::cout << "16. Объем конуса\n";
        std::cout << "17. Площадь поверхности конуса\n";
        std::cout << "18. Объем и площадь поверхности сферы\n";
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            // Square
            case 1: {
                double lenght;
                utils::input("Введите длину стороны: ", lenght);
                double area = geometry::square_area(lenght);
                double perimeter = geometry::square_perimeter(lenght);
                utils::output("Площадь квадрата: ", area);
                utils::output("Периметр квадрата: ", perimeter);
                break;
            }
                  // Rectangle
            case 2: {
                double lenghtA, lenghtB;
                utils::input("Введите длину стороны a: ", lenghtA);
                utils::input("Введите длину стороны b: ", lenghtB);
                double area = geometry::rectangle_area(lenghtA, lenghtB);
                double perimeter = geometry::rectangle_perimeter(lenghtA, lenghtB);
                utils::output("Площадь прямоугольника: ", area);
                utils::output("Периметр прямоугольника: ", perimeter);
                break;
            }
                  // Triangle
            case 3: {
                double base, height;
                utils::input("Введите основание треугольника: ", base);
                utils::input("Введите высоту треугольника: ", height);
                double area = geometry::triangle_area(base, height);
                utils::output("Площадь треугольника: ", area);
                break;
            }
            case 4: {
                double sideA, sideB, sideC;
                utils::input("Введите длинну стороны a: ", sideA);
                utils::input("Введите длинну стороны b: ", sideB);
                utils::input("Введите длинну стороны c: ", sideC);
                double perimeter = geometry::triangle_perimeter(sideA, sideB, sideC);
                utils::output("Периметр треугольника: ", perimeter);
                break;
            }
            case 5: {
                double semiperimeter, sideA, sideB, sideC;
                utils::input("Введите полупериметр: ", semiperimeter);
                utils::input("Введите длинну стороны a: ", sideA);
                utils::input("Введите длинну стороны b: ", sideB);
                utils::input("Введите длинну стороны c: ", sideC);
                double area = geometry::herons_formula_triangle_area(semiperimeter, sideA, sideB, sideC);
                utils::output("Площадь треугольника по формуле Герона: ", area);
                break;
            }
                  // Circle
            case 6: {
                double radius;
                utils::input("Введите радиус круга: ", radius);
                double area = geometry::circle_area(radius);
                double perimeter = geometry::circle_perimeter(radius);
                utils::output("Площадь круга: ", area);
                utils::output("Периметр круга: ", perimeter);
                break;
            }
                  // Rhombus
            case 7: {
                double diagonalOne, diagonalSecond;
                utils::input("Введите диагональ d1: ", diagonalOne);
                utils::input("Введите диагональ d2: ", diagonalSecond);
                double area = geometry::rhombus_area(diagonalOne, diagonalSecond);
                utils::output("Площадь ромба: ", area);
                break;
            }
            case 8: {
                double lenght;
                utils::input("Введите длинну стороны: ", lenght);
                double perimeter = geometry::rhombus_perimeter(lenght);
                utils::output("Периметр ромба: ", perimeter);
                break;
            }
                  // Parallelogram
            case 9: {
                double base, height;
                utils::input("Введите основание: ", base);
                utils::input("Введите высоту: ", height);
                double area = geometry::parallelogram_area(base, height);
                utils::output("Площадь параллелограмма: ", area);
                break;
            }
            case 10: {
                double sideA, sideB;
                utils::input("Введите длину стороны a: ", sideA);
                utils::input("Введите длину стороны b: ", sideB);
                double perimeter = geometry::parallelogram_perimeter(sideA, sideB);
                utils::output("Периметр параллелограмма: ", perimeter);
                break;
            }
                   // Trapeze
            case 11: {
                double baseA, baseB, height;
                utils::input("Введите основание a: ", baseA);
                utils::input("Введите основание b: ", baseB);
                utils::input("Введите высоту: ", height);
                double area = geometry::trapeze_area(baseA, baseB, height);
                utils::output("Площадь трапеции: ", area);
                break;
            }
            case 12: {
                double sideA, sideB, sideC, sideD;
                utils::input("Введите длину стороны a: ", sideA);
                utils::input("Введите длину стороны b: ", sideB);
                utils::input("Введите длину стороны c: ", sideC);
                utils::input("Введите длину стороны d: ", sideD);
                double perimeter = geometry::trapeze_perimeter(sideA, sideB, sideC, sideD);
                utils::output("Периметр трапеции: ", perimeter);
                break;
            }
                   // Cube
            case 13: {
                double lenghtEdge;
                utils::input("Введите длину ребра: ", lenghtEdge);
                double volume = geometry::cube_volume(lenghtEdge);
                double area = geometry::cube_area(lenghtEdge);
                utils::output("Объём: ", volume);
                utils::output("Площадь поверхности: ", area);
                break;
            }
                   // Rectangular parallelepiped
            case 14: {
                double sideA, sideB, sideC;
                utils::input("Введите длину стороны a: ", sideA);
                utils::input("Введите длину стороны b: ", sideB);
                utils::input("Введите длину стороны c: ", sideC);
                double volume = geometry::rectangularParallelepiped_volume(sideA, sideB, sideC);
                double area = geometry::rectangularParallelepiped_area(sideA, sideB, sideC);
                utils::output("Объем: ", volume);
                utils::output("Площадь поверхности: ", area);
                break;
            }
                   // Cylinder
            case 15: {
                double radius, height;
                utils::input("Введите радиус основания: ", radius);
                utils::input("Введите высоту: ", height);
                double volume = geometry::cylinder_volume(radius, height);
                double area = geometry::cylinder_area(radius, height);
                utils::output("Объем: ", volume);
                utils::output("Площадь поверхности: ", area);
                break;
            }
                   // Cone
            case 16: {
                double radius, height;
                utils::input("Введите радиус основания: ", radius);
                utils::input("Введите высоту: ", height);
                double volume = geometry::cone_volume(radius, height);
                utils::output("Объем: ", volume);
                break;
            }
            case 17: {
                double radius, formingObliqueHeight;
                utils::input("Введите радиус основания: ", radius);
                utils::input("Введите образующую(косая высота): ", formingObliqueHeight);
                double area = geometry::cone_area(radius, formingObliqueHeight);
                utils::output("Площадь поверхности: ", area);
                break;
            }
                   // Char
            case 18: {
                double radius;
                utils::input("Введите радиус: ", radius);
                double volume = geometry::char_volume(radius);
                double area = geometry::char_area(radius);
                utils::output("Объем: ", volume);
                utils::output("Площадь поверхности: ", area);
                break;
            }
            default:
                std::cout << "Неверный выбор. Возврат в главное меню.\n";
                std::cin.ignore();
                std::cin.get();
        }

        std::cout << "Нажмите Enter для возврата в меню.\n";
        std::cin.ignore();
        std::cin.get();
    }
}

void algebraMenu() {
    while (true) {
        clearScreen();
        int choice;

        std::cout << "Выберите задачу:\n";
        std::cout << "1. Решение линейного уравнения\n";
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            case 1: {
                double a, b;
                utils::input("Введите коэффициент a: ", a);
                utils::input("Введите коэффициент b: ", b);
                try {
                    double solution = algebra::solve_linear_equation(a, b);
                    utils::output("Решение уравнения: ", solution);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            default:
                std::cout << "Неверный выбор. Возврат в главное меню.\n";
                std::cin.ignore();
                std::cin.get();
        }

        std::cout << "Нажмите Enter для возврата в меню.\n";
        std::cin.ignore();
        std::cin.get();
    }

}

void calculator() {
    while (true) {
        clearScreen();
        int choice;

        std::cout << "Выберите задачу:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "5. Sin(x)\n";
        std::cout << "6. Cos(x)\n";
        std::cout << "7. Tan(x)\n";
        std::cout << "8. Cotan(x)\n";
        std::cout << "9. Arcsin(x)\n";
        std::cout << "10. Arccos(x)\n";
        std::cout << "11. Arctan(x)\n";
        std::cout << "12. Корень\n";
        std::cout << "13. Возведение степени\n";
        std::cout << "14. Логарифм\n";
        std::cout << "15. Модуль\n";
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            case 1: {
                double a, b;
                utils::input("Введите число: ", a);
                utils::input("Введите число: ", b);
                double result = add(a, b);
                utils::output("Ответ: ", result);
                break;
            }
            case 2: {
                double a, b;
                utils::input("Введите число: ", a);
                utils::input("Введите число: ", b);
                double result = subtract(a, b);
                utils::output("Ответ: ", result);
                break;
            }
            case 3: {
                double a, b;
                utils::input("Введите число: ", a);
                utils::input("Введите число: ", b);
                double result = multiply(a, b);
                utils::output("Ответ: ", result);
                break;
            }
            case 4: {
                double a, b;
                utils::input("Введите число: ", a);
                utils::input("Введите число: ", b);
                try{
                    double result = divide(a, b);
                    utils::output("Ответ: ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 5: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                double result = calculateSin(value);
                utils::output("sin(x): ", result);
                break;
            }
            case 6: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                double result = calculateCos(value);
                utils::output("cos(x): ", result);
                break;
            }
            case 7: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                double result = calculateTan(value);
                utils::output("tan(x): ", result);
                break;
            }
            case 8: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                try {
                    double result = calculateCotan(value);
                    utils::output("Cotan(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 9: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                try {
                    double result = calculateArcsin(value);
                    utils::output("arcsin(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 10: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                try {
                    double result = calculateArccos(value);
                    utils::output("arccos(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 11: {
                double value;
                utils::input("Введите значение (в радианах): ", value);
                double result = calculateArctan(value);
                utils::output("arcsin(x): ", result);
                break;
            }
            case 12: {
                double value;
                utils::input("Введите значение: ", value);
                try {
                    double result = calculateSqrt(value);
                    utils::output("Корень: ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 13: {
                double base, exponent;
                utils::input("Введите число: ", base);
                utils::input("Введите степень в которуб хотите возвести: ", exponent);
                double result = calculatePow(base, exponent);
                utils::output("Ответ: ", result);
                break;
            }
            case 14: {
                double value, base;
                utils::input("Введите значение: ", value);
                utils::input("Введите основание логарифма: ", base);
                try {
                    double result = calculateLog(value, base);
                    utils::output("log_base(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 15: {
                double value;
                utils::input("Введите значение: ", value);
                double result = calculateModulus(value);
                utils::output("Модуль: ", result);
                break;
            }
            default:
                std::cout << "Неверный выбор. Возврат в главное меню.\n";
                std::cin.ignore();
                std::cin.get();

        }
        std::cout << "Нажмите Enter для возврата в меню.\n";
        std::cin.ignore();
        std::cin.get();
    }
}

void functionGraphs() {
    std::cout << "Раздел 'Графики функций' пока не реализован. Возврат в главное меню.\n";
    std::cin.ignore();
    std::cin.get();
}