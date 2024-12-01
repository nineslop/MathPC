#include <iostream>
#include <limits>
#include <windows.h>
#include <locale.h>
#include "geometry.h"
#include "algebra.h"
#include "calcul.h"
#include "utils.h"
#include "numbertable.h"

void geometryMenu();
void algebraMenu();
void calculator();
void numberTable();
void functionGraphs();

void clearScreen() {
    system("cls");
}

int main() {
    setlocale(LC_ALL, "Russian");

    int mainChoice;

    while (true) {
        clearScreen();
        std::cout << "Select a section:\n";
        std::cout << "1. Geometry\n";
        std::cout << "2. Algebra\n";
        std::cout << "3. Calculator\n";
        std::cout << "4. Translation of the number table\n";
        std::cout << "5. Graphs of functions\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";
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
            numberTable();
            break;
        case 5:
            functionGraphs();
            break;
        case 0:
            clearScreen();
            std::cout << "Exiting the programme.\n";
            return 0;
        default:
            std::cout << "Wrong choice. Try again.\n";
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
        std::cout << "Âûáåðèòå çàäà÷ó:\n";
        std::cout << "1. Area and perimeter of a square\n";
        std::cout << "2. Area and perimeter of a rectangle\n";
        std::cout << "3. The area of a triangle\n";
        std::cout << "4. Triangle perimeter\n";
        std::cout << "5. Area through sides (by Heron's formula)\n";
        std::cout << "6. Area and perimeter of a circle\n";
        std::cout << "7. The area of the rhombus\n";
        std::cout << "8. Rhombus perimeter\n";
        std::cout << "9. The area of a parallelogram\n";
        std::cout << "10. Perimeter of a parallelogram\n";
        std::cout << "11. Area of the trapezoid\n";
        std::cout << "12. Perimeter of the trapezoid\n";
        std::cout << "13. Volume and surface area of a cube\n";
        std::cout << "14. Volume and surface area of a rectangular parallelepiped\n";
        std::cout << "15. Volume and surface area of a cylinder\n";
        std::cout << "16. Cone volume\n";
        std::cout << "17. Surface area of the cone\n";
        std::cout << "18. Volume and surface area of a char\n";
        std::cout << "19. Area and perimeter of a regular polygon\n";
        std::cout << "20. Ellipse area and perimeter (approximate formula)\n";
        std::cout << "21. Area and arc length of the circle sector\n";
        std::cout << "22. Volume and surface area of the torus\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            // Square
            case 1: {
                double lenght;
                utils::input("Enter the length of the side: ", lenght);
                double area = geometry::square_area(lenght);
                double perimeter = geometry::square_perimeter(lenght);
                utils::output("Square area: ", area);
                utils::output("Square perimeter: ", perimeter);
                break;
            }
                  // Rectangle
            case 2: {
                double lenghtA, lenghtB;
                utils::input("Enter the length of side a: ", lenghtA);
                utils::input("Enter the length of side b: ", lenghtB);
                double area = geometry::rectangle_area(lenghtA, lenghtB);
                double perimeter = geometry::rectangle_perimeter(lenghtA, lenghtB);
                utils::output("The area of a rectangle: ", area);
                utils::output("Perimeter of a rectangle: ", perimeter);
                break;
            }
                  // Triangle
            case 3: {
                double base, height;
                utils::input("Enter the base of the triangle: ", base);
                utils::input("Enter the height of the triangle: ", height);
                double area = geometry::triangle_area(base, height);
                utils::output("The area of a triangle: ", area);
                break;
            }
            case 4: {
                double sideA, sideB, sideC;
                utils::input("Enter the length of side a: ", sideA);
                utils::input("Enter the length of side b: ", sideB);
                utils::input("Enter the length of side c: ", sideC);
                double perimeter = geometry::triangle_perimeter(sideA, sideB, sideC);
                utils::output("Triangle perimeter: ", perimeter);
                break;
            }
            case 5: {
                double semiperimeter, sideA, sideB, sideC;
                utils::input("Enter the half-perimeter: ", semiperimeter);
                utils::input("Enter the length of the side a: ", sideA);
                utils::input("Enter the length of the side b: ", sideB);
                utils::input("Enter the length of the side c: ", sideC);
                double area = geometry::herons_formula_triangle_area(semiperimeter, sideA, sideB, sideC);
                utils::output("Area of a triangle by Heron's formula: ", area);
                break;
            }
                  // Circle
            case 6: {
                double radius;
                utils::input("Enter the radius of the circle: ", radius);
                double area = geometry::circle_area(radius);
                double perimeter = geometry::circle_perimeter(radius);
                utils::output("Circle area: ", area);
                utils::output("Circle perimeter: ", perimeter);
                break;
            }
                  // Rhombus
            case 7: {
                double diagonalOne, diagonalSecond;
                utils::input("Enter diagonal d1: ", diagonalOne);
                utils::input("Enter diagonal d2: ", diagonalSecond);
                double area = geometry::rhombus_area(diagonalOne, diagonalSecond);
                utils::output("The area of the rhombus: ", area);
                break;
            }
            case 8: {
                double lenght;
                utils::input("Enter the length of the side: ", lenght);
                double perimeter = geometry::rhombus_perimeter(lenght);
                utils::output("Perimeter rhombusà: ", perimeter);
                break;
            }
                  // Parallelogram
            case 9: {
                double base, height;
                utils::input("Enter the base: ", base);
                utils::input("Enter the height: ", height);
                double area = geometry::parallelogram_area(base, height);
                utils::output("The area of a parallelogram: ", area);
                break;
            }
            case 10: {
                double sideA, sideB;
                utils::input("Enter the length of the side a: ", sideA);
                utils::input("Enter the length of the side b: ", sideB);
                double perimeter = geometry::parallelogram_perimeter(sideA, sideB);
                utils::output("Perimeter of a parallelogram: ", perimeter);
                break;
            }
                   // Trapeze
            case 11: {
                double baseA, baseB, height;
                utils::input("Enter the base a: ", baseA);
                utils::input("Enter the base b: ", baseB);
                utils::input("Enter the height: ", height);
                double area = geometry::trapeze_area(baseA, baseB, height);
                utils::output("Area of the trapezoid: ", area);
                break;
            }
            case 12: {
                double sideA, sideB, sideC, sideD;
                utils::input("Enter the length of the side a: ", sideA);
                utils::input("Enter the length of the side b: ", sideB);
                utils::input("Enter the length of the side c: ", sideC);
                utils::input("Enter the length of the side d: ", sideD);
                double perimeter = geometry::trapeze_perimeter(sideA, sideB, sideC, sideD);
                utils::output("Perimeter of the trapezoid: ", perimeter);
                break;
            }
                   // Cube
            case 13: {
                double lenghtEdge;
                utils::input("Enter the length of the edge: ", lenghtEdge);
                double volume = geometry::cube_volume(lenghtEdge);
                double area = geometry::cube_area(lenghtEdge);
                utils::output("Volume: ", volume);
                utils::output("Surface area: ", area);
                break;
            }
                   // Rectangular parallelepiped
            case 14: {
                double sideA, sideB, sideC;
                utils::input("Enter the length of the side a: ", sideA);
                utils::input("Enter the length of the side b: ", sideB);
                utils::input("Enter the length of the side c: ", sideC);
                double volume = geometry::rectangularParallelepiped_volume(sideA, sideB, sideC);
                double area = geometry::rectangularParallelepiped_area(sideA, sideB, sideC);
                utils::output("Volume: ", volume);
                utils::output("Surface area: ", area);
                break;
            }
                   // Cylinder
            case 15: {
                double radius, height;
                utils::input("Enter the radius of the base: ", radius);
                utils::input("Enter the height: ", height);
                double volume = geometry::cylinder_volume(radius, height);
                double area = geometry::cylinder_area(radius, height);
                utils::output("Volume: ", volume);
                utils::output("Surface area: ", area);
                break;
            }
                   // Cone
            case 16: {
                double radius, height;
                utils::input("Enter the radius of the base: ", radius);
                utils::input("Enter the height: ", height);
                double volume = geometry::cone_volume(radius, height);
                utils::output("Volume: ", volume);
                break;
            }
            case 17: {
                double radius, formingObliqueHeight;
                utils::input("Enter the radius of the base: ", radius);
                utils::input("Enter form (oblique height): ", formingObliqueHeight);
                double area = geometry::cone_area(radius, formingObliqueHeight);
                utils::output("Surface area: ", area);
                break;
            }
                   // Char
            case 18: {
                double radius;
                utils::input("Enter the radius: ", radius);
                double volume = geometry::char_volume(radius);
                double area = geometry::char_area(radius);
                utils::output("Volume: ", volume);
                utils::output("Surface area: ", area);
                break;
            }
                   // Polygon
            case 19: {
                double numberOfSides, length;
                utils::input("Enter the number of sides: ", numberOfSides);
                utils::input("Enter the length of the side: ", length);
                double area = geometry::polygon_area(numberOfSides, length);
                double perimetr = geometry::polygon_perimetr(numberOfSides, length);
                utils::output("Area: ", area);
                utils::output("Perimetr: ", perimetr);
                break;
            }
                   // Ellipse
            case 20: {
                double largeAxleHalf, minorAxle;
                utils::input("Insert the large half axle: ", largeAxleHalf);
                utils::input("Insert the minor axle: ", minorAxle);
                double area = geometry::ellipse_area(largeAxleHalf, minorAxle);
                double perimetr = geometry::ellipse_perimetr(largeAxleHalf, minorAxle);
                utils::output("Area: ", area);
                utils::output("Perimetr: ", perimetr);
                break;
            }
                   // Circle sector
            case 21: {
                double sectorCenterCorner, radius;
                utils::input("Sector center angle in radians: ", sectorCenterCorner);
                utils::input("Radius circle: ", radius);
                double area = geometry::circleSector_area(sectorCenterCorner, radius);
                double arcLenght = geometry::circleSector_arcLength(sectorCenterCorner, radius);
                utils::output("Area: ", area);
                utils::output("Arc lenght: ", arcLenght);
                break;
            }
                   // Thor
            case 22: {
                double centerCircleRadius, torusTubeRadius;
                utils::input("Center circle radius: ", centerCircleRadius);
                utils::input("Torus tube radius: ", torusTubeRadius);
                double volume = geometry::thor_volume(centerCircleRadius, torusTubeRadius);
                double area = geometry::surfaceAreaOfThe_torus(centerCircleRadius, torusTubeRadius);
                utils::output("Volume: ", volume);
                utils::output("Surface area: ", area);
                break;
            }
            default:
                std::cout << "Wrong choice. Return to main menu.\n";
                std::cin.ignore();
                std::cin.get();
        }

        std::cout << "Press Enter to return to the menu.\n";
        std::cin.ignore();
        std::cin.get();
    }
}

void algebraMenu() {
    while (true) {
        clearScreen();
        int choice;

        std::cout << "Select a task:\n";
        std::cout << "1. Solving a linear equation\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            case 1: {
                double a, b;
                utils::input("Enter the coefficientò a: ", a);
                utils::input("Enter the coefficient b: ", b);
                try {
                    double solution = algebra::solve_linear_equation(a, b);
                    utils::output("Solution of the equation: ", solution);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            default:
                std::cout << "Wrong choice. Returns to the main menu.\n";
                std::cin.ignore();
                std::cin.get();
        }

        std::cout << "Press Enter to return to the menu.\n";
        std::cin.ignore();
        std::cin.get();
    }

}

void calculator() {
    while (true) {
        clearScreen();
        int choice;

        std::cout << "Select a task:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Fission\n";
        std::cout << "5. Sin(x)\n";
        std::cout << "6. Cos(x)\n";
        std::cout << "7. Tan(x)\n";
        std::cout << "8. Cotan(x)\n";
        std::cout << "9. Arcsin(x)\n";
        std::cout << "10. Arccos(x)\n";
        std::cout << "11. Arctan(x)\n";
        std::cout << "12. Sqrt\n";
        std::cout << "13. Elevation of degree\n";
        std::cout << "14. Logarithm\n";
        std::cout << "15. Module\n";
        std::cout << "16. Definition of factorial\n";
        std::cout << "17. Recurrence formula of the factorial\n";
        std::cout << "18. Properties of factorials(Ratio of neighbouring factorials)\n";
        std::cout << "19. Number of combinations C(n,k)\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
            case 1: {
                double a, b;
                utils::input("Enter a number: ", a);
                utils::input("Enter a number: ", b);
                double result = add(a, b);
                utils::output("Response: ", result);
                break;
            }
            case 2: {
                double a, b;
                utils::input("Enter a number: ", a);
                utils::input("Enter a number: ", b);
                double result = subtract(a, b);
                utils::output("Response: ", result);
                break;
            }
            case 3: {
                double a, b;
                utils::input("Enter a number: ", a);
                utils::input("Enter a number: ", b);
                double result = multiply(a, b);
                utils::output("Response: ", result);
                break;
            }
            case 4: {
                double a, b;
                utils::input("Enter a number: ", a);
                utils::input("Enter a number: ", b);
                try{
                    double result = divide(a, b);
                    utils::output("Response: ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 5: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                double result = calculateSin(value);
                utils::output("sin(x): ", result);
                break;
            }
            case 6: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                double result = calculateCos(value);
                utils::output("cos(x): ", result);
                break;
            }
            case 7: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                double result = calculateTan(value);
                utils::output("tan(x): ", result);
                break;
            }
            case 8: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                try {
                    double result = calculateCotan(value);
                    utils::output("Cotan(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 9: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                try {
                    double result = calculateArcsin(value);
                    utils::output("arcsin(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 10: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                try {
                    double result = calculateArccos(value);
                    utils::output("arccos(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 11: {
                double value;
                utils::input("Enter the value (in radians): ", value);
                double result = calculateArctan(value);
                utils::output("arcsin(x): ", result);
                break;
            }
            case 12: {
                double value;
                utils::input("Enter a value: ", value);
                try {
                    double result = calculateSqrt(value);
                    utils::output("Sqrt: ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 13: {
                double base, exponent;
                utils::input("Enter a value: ", base);
                utils::input("Enter the degree to which you want to raise: ", exponent);
                double result = calculatePow(base, exponent);
                utils::output("Error: ", result);
                break;
            }
            case 14: {
                double value, base;
                utils::input("Enter a value: ", value);
                utils::input("Enter the base of the logarithm: ", base);
                try {
                    double result = calculateLog(value, base);
                    utils::output("log_base(x): ", result);
                }
                catch (const std::invalid_argument& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 15: {
                double value;
                utils::input("Enter a value: ", value);
                double result = calculateModulus(value);
                utils::output("Module: ", result);
                break;
            }
            case 16: {
                double num;
                utils::input("Enter a non-negative integer: ", num);
                try
                {
                    double result = definitionOfFactorial(num);
                    utils::output("Factorial (n!): ", result);
                }
                catch (const std::invalid_argument& e)
                {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 17: {
                double num;
                utils::input("Enter a non-negative integer: ", num);
                try
                {
                    double result = definitionOfFactorialRecursive(num);
                    utils::output("The factorial (n!) is recursive: ", result);
                }
                catch (const std::invalid_argument& e)
                {
                    std::cout << "Error: " << e.what() << std::endl;
                }
            }
            case 18: {
                double num;
                utils::input("Enter a non-negative integer: ", num);
                try
                {
                    double result = propertiesOfFactorials(num);
                    utils::output("Ratio of neighbouring factorials: ", result);
                }
                catch (const std::invalid_argument& e)
                {
                    std::cout << "Error: " << e.what() << std::endl;
                }
            }
            case 19: {
                double num, k;
                utils::input("Enter a non-negative integer(n): ", num);
                utils::input("Enter a non-negative integer(k): ", k);
                try
                {
                    double result = numberOfCombinations(num, k);
                    utils::output("C(n,k): ", result);
                }
                catch (const std::invalid_argument& e)
                {
                    std::cout << "Error: " << e.what() << std::endl;
                }
            }
            default:
                std::cout << "Wrong choice. Returns to the main menu.\n";
                std::cin.ignore();
                std::cin.get();

        }
        std::cout << "Press Enter to return to the menu.\n";
        std::cin.ignore();
        std::cin.get();
    }
}

void numberTable() {
    while (true) {
        clearScreen();
        int choice;

        std::cout << "Choose a task:\n";
        std::cout << "1. Conversion from any number system to decimal notation\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        clearScreen();
        switch (choice) {
        case 1: {
            std::string number;
            int base;
            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "Enter the base of the number system (2-16): ";
            std::cin >> base;

            try {
                int decimalValue = numbertable::baseToDecimal(number, base);
                std::cout << "Decimal value: " << decimalValue << std::endl;
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            break;
        }
        default:
            std::cout << "Wrong choice. Returns to the main menu.\n";
            std::cin.ignore();
            std::cin.get();
        }
        std::cout << "Press Enter to return to the menu.\n";
        std::cin.ignore();
        std::cin.get();
    }

}

void functionGraphs() {
    std::cout << "The 'Function Graphs' section is not yet implemented. Return to the main menu.\n";
    std::cin.ignore();
    std::cin.get();
}