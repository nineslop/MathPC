#include <iostream>
#include <windows.h>
#include <locale.h>
#include "geometry.h"
#include "algebra.h"
#include "utils.h"

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;

    std::cout << "�������� ������:\n";
    std::cout << "1. ������� � �������� ��������\n";
    std::cout << "2. ������� � �������� ��������������\n";
    std::cout << "3. ������� ������������\n";
    std::cout << "4. �������� ������������\n";
    std::cout << "5. ������� ����� ������� (�� ������� ������)\n";
    std::cout << "6. ������� � �������� �����\n";
    std::cout << "7. ������� �����\n";
    std::cout << "8. �������� �����\n";
    std::cout << "9. ������� ���������������\n";
    std::cout << "10. �������� ���������������\n";
    std::cout << "11. ������� ��������\n";
    std::cout << "12. �������� ��������\n";
    std::cout << "13. ����� � ������� ����������� ����\n";
    std::cout << "14. ����� � ������� ����������� �������������� ���������������\n";
    std::cout << "15. ����� � ������� ����������� ��������\n";
    std::cout << "16. ����� ������\n";
    std::cout << "17. ������� ����������� ������\n";
    std::cout << "18. ����� � ������� ����������� �����\n";
    std::cout << "22. ������� ��������� ���������\n";
    std::cout << "��� �����: ";
    std::cin >> choice;

    switch (choice) {
    // �������
    case 1: {
        double lenght;
        utils::input("������� ����� �������: ", lenght);
        double area = geometry::square_area(lenght);
        double perimeter = geometry::square_perimeter(lenght);
        utils::output("������� ��������: ", area);
        utils::output("�������� ��������: ", perimeter);
        break;
    }
    // �������������
    case 2: {
        double lenghtA, lenghtB;
        utils::input("������� ����� ������� a: ", lenghtA);
        utils::input("������� ����� ������� b: ", lenghtB);
        double area = geometry::rectangle_area(lenghtA, lenghtB);
        double perimeter = geometry::rectangle_perimeter(lenghtA, lenghtB);
        utils::output("������� ��������������: ", area);
        utils::output("�������� ��������������: ", perimeter);
        break;
    }
    // �����������
    case 3: {
        double base, height;
        utils::input("������� ��������� ������������: ", base);
        utils::input("������� ������ ������������: ", height);
        double area = geometry::triangle_area(base, height);
        utils::output("������� ������������: ", area);
        break;
    }
    case 4: {
        double sideA, sideB, sideC;
        utils::input("������� ������ ������� a: ", sideA);
        utils::input("������� ������ ������� b: ", sideB);
        utils::input("������� ������ ������� c: ", sideC);
        double perimeter = geometry::triangle_perimeter(sideA, sideB, sideC);
        utils::output("�������� ������������: ", perimeter);
        break;
    }
    case 5: {
        double semiperimeter, sideA, sideB, sideC;
        utils::input("������� ������������: ", semiperimeter);
        utils::input("������� ������ ������� a: ", sideA);
        utils::input("������� ������ ������� b: ", sideB);
        utils::input("������� ������ ������� c: ", sideC);
        double area = geometry::herons_formula_triangle_area(semiperimeter, sideA, sideB, sideC);
        utils::output("������� ������������ �� ������� ������: ", area);
        break;
    }
    // ����
    case 6: {
        double radius;
        utils::input("������� ������ �����: ", radius);
        double area = geometry::circle_area(radius);
        double perimeter = geometry::circle_perimeter(radius);
        utils::output("������� �����: ", area);
        utils::output("�������� �����: ", perimeter);
        break;
    }
    // ����
    case 7: {
        double diagonalOne, diagonalSecond;
        utils::input("������� ��������� d1: ", diagonalOne);
        utils::input("������� ��������� d2: ", diagonalSecond);
        double area = geometry::rhombus_area(diagonalOne, diagonalSecond);
        utils::output("������� �����: ", area);
        break;
    }
    case 8: {
        double lenght;
        utils::input("������� ������ �������: ", lenght);
        double perimeter = geometry::rhombus_perimeter(lenght);
        utils::output("�������� �����: ", perimeter);
        break;
    }
    // ��������������
    case 9: {
        double base, height;
        utils::input("������� ���������: ", base);
        utils::input("������� ������: ", height);
        double area = geometry::parallelogram_area(base, height);
        utils::output("������� ���������������: ", area);
        break;
    }
    case 10: {
        double sideA, sideB;
        utils::input("������� ����� ������� a: ", sideA);
        utils::input("������� ����� ������� b: ", sideB);
        double perimeter = geometry::parallelogram_perimeter(sideA, sideB);
        utils::output("�������� ���������������: ", perimeter);
        break;
    }
    // ��������
    case 11: {
        double baseA, baseB, height;
        utils::input("������� ��������� a: ", baseA);
        utils::input("������� ��������� b: ", baseB);
        utils::input("������� ������: ", height);
        double area = geometry::trapeze_area(baseA, baseB, height);
        utils::output("������� ��������: ", area);
        break;
    }
    case 12: {
        double sideA, sideB, sideC, sideD;
        utils::input("������� ����� ������� a: ", sideA);
        utils::input("������� ����� ������� b: ", sideB);
        utils::input("������� ����� ������� c: ", sideC);
        utils::input("������� ����� ������� d: ", sideD);
        double perimeter = geometry::trapeze_perimeter(sideA, sideB, sideC, sideD);
        utils::output("�������� ��������: ", perimeter);
        break;
    }
    // ���
    case 13: {
        double lenghtEdge;
        utils::input("������� ����� �����: ", lenghtEdge);
        double volume = geometry::cube_volume(lenghtEdge);
        double area = geometry::cube_area(lenghtEdge);
        utils::output("�����: ", volume);
        utils::output("������� �����������: ", area);
        break;
    }
    // ������������� ��������������
    case 14: {
        double sideA, sideB, sideC;
        utils::input("������� ����� ������� a: ", sideA);
        utils::input("������� ����� ������� b: ", sideB);
        utils::input("������� ����� ������� c: ", sideC);
        double volume = geometry::rectangularParallelepiped_volume(sideA, sideB, sideC);
        double area = geometry::rectangularParallelepiped_area(sideA, sideB, sideC);
        utils::output("�����: ", volume);
        utils::output("������� �����������: ", area);
        break;
    }
    // �������
    case 15: {
        double radius, height;
        utils::input("������� ������ ���������: ", radius);
        utils::input("������� ������: ", height);
        double volume = geometry::cylinder_volume(radius, height);
        double area = geometry::cylinder_area(radius, height);
        utils::output("�����: ", volume);
        utils::output("������� �����������: ", area);
        break;
    }
    // �����
    case 16: {
        double radius, height;
        utils::input("������� ������ ���������: ", radius);
        utils::input("������� ������: ", height);
        double volume = geometry::cone_volume(radius, height);
        utils::output("�����: ", volume);
        break;
    }
    case 17: {
        double radius, formingObliqueHeight;
        utils::input("������� ������ ���������: ", radius);
        utils::input("������� ����������(����� ������): ", formingObliqueHeight);
        double area = geometry::cone_area(radius, formingObliqueHeight);
        utils::output("������� �����������: ", area);
        break;
    }
    // �����
    case 18: {
        double radius;
        utils::input("������� ������: ", radius);
        double volume = geometry::sphere_volume(radius);
        double area = geometry::sphere_area(radius);
        utils::output("�����: ", volume);
        utils::output("������� �����������: ", area);
        break;
    }
    case 22: {
        double a, b;
        utils::input("������� ����������� a: ", a);
        utils::input("������� ����������� b: ", b);
        try {
            double solution = algebra::solve_linear_equation(a, b);
            utils::output("������� ���������: ", solution);
        }
        catch (const std::invalid_argument& e) {
            std::cout << "������: " << e.what() << std::endl;
        }
        break;
    }
    default:
        std::cout << "�������� �����.\n";
        break;
    }

    return 0;
}
