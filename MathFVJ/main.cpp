#include <iostream>
#include <windows.h>
#include <locale.h>
#include "geometry.h"
#include "algebra.h"
#include "utils.h"

int main() {
    setlocale(LC_ALL, "Russian");

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
    std::cout << "22. Решение линейного уравнения\n";
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
    // Квадрат
    case 1: {
        double lenght;
        utils::input("Введите длину стороны: ", lenght);
        double area = geometry::square_area(lenght);
        double perimeter = geometry::square_perimeter(lenght);
        utils::output("Площадь квадрата: ", area);
        utils::output("Периметр квадрата: ", perimeter);
        break;
    }
    // Прямоугольник
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
    // Треугольник
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
    // Круг
    case 6: {
        double radius;
        utils::input("Введите радиус круга: ", radius);
        double area = geometry::circle_area(radius);
        double perimeter = geometry::circle_perimeter(radius);
        utils::output("Площадь круга: ", area);
        utils::output("Периметр круга: ", perimeter);
        break;
    }
    // Ромб
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
    // Параллелограмм
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
    // Трапеция
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
    // Куб
    case 13: {
        double lenghtEdge;
        utils::input("Введите длину ребра: ", lenghtEdge);
        double volume = geometry::cube_volume(lenghtEdge);
        double area = geometry::cube_area(lenghtEdge);
        utils::output("Объём: ", volume);
        utils::output("Площадь поверхности: ", area);
        break;
    }
    // Прямоугольный параллелепипед
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
    // Цилиндр
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
    // Конус
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
    // Сфера
    case 18: {
        double radius;
        utils::input("Введите радиус: ", radius);
        double volume = geometry::sphere_volume(radius);
        double area = geometry::sphere_area(radius);
        utils::output("Объем: ", volume);
        utils::output("Площадь поверхности: ", area);
        break;
    }
    case 22: {
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
        std::cout << "Неверный выбор.\n";
        break;
    }

    return 0;
}
