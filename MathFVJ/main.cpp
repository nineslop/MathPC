#include <iostream>
#include <limits>
#include <windows.h>
#include <map>
#include <algorithm>
#include <functional>
#include <locale.h>
#include "geometry.h"
#include "algebra.h"
#include "calcul.h"
#include "utils.h"
#include "numbertable.h"
#include "physics.h"
#include "physics_constants.h"

void clearScreen() {
    system("cls");
}

void waitForKeyPress() {
    std::cout << "Press Enter to return to the menu.\n";
    std::cin.ignore();
    std::cin.get();
}

void geometryMenu();
void algebraMenu();
void calculator();
void numberTable();
void physicsMenu();
void functionGraphs();

int main() {
    setlocale(LC_ALL, "Russian");

    std::map<int, std::function<void()>> sections = {
        {1, geometryMenu},
        {2, algebraMenu},
        {3, calculator},
        {4, numberTable},
        {5, physicsMenu},
        {6, functionGraphs},
    };

    while (true) {
        clearScreen();
        std::cout << "Select a section:\n";
        std::cout << "1. Geometry\n";
        std::cout << "2. Algebra\n";
        std::cout << "3. Calculator\n";
        std::cout << "4. Translation of the number table\n";
        std::cout << "5. Physics forms\n";
        std::cout << "6. Graphs of functions\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";

        int choice;
        utils::input("", choice);

        if (choice == 0) {
            clearScreen();
            std::cout << "Exiting the program.\n";
            return 0;
        }

        if (sections.find(choice) != sections.end()) {
            sections[choice]();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }

    return 0;
}

void geometryMenu() {
    std::map<int, std::function<void()>> tasks = {
        {1, []() {
            double lenght;
            utils::input("Enter the length of the side: ", lenght);
            double area = geometry::square_area(lenght);
            double perimeter = geometry::square_perimeter(lenght);
            utils::output("Square area: ", area);
            utils::output("Square perimeter: ", perimeter);
        }},
        {2, []() {
            double lenghtA, lenghtB;
            utils::input("Enter the length of side a: ", lenghtA);
            utils::input("Enter the length of side b: ", lenghtB);
            double area = geometry::rectangle_area(lenghtA, lenghtB);
            double perimeter = geometry::rectangle_perimeter(lenghtA, lenghtB);
            utils::output("The area of a rectangle: ", area);
            utils::output("Perimeter of a rectangle: ", perimeter);
        }},
        {3, []() {
            double base, height;
            utils::input("Enter the base of the triangle: ", base);
            utils::input("Enter the height of the triangle: ", height);
            double area = geometry::triangle_area(base, height);
            utils::output("The area of a triangle: ", area);
        }},
        {4, []() {
            double sideA, sideB, sideC;
            utils::input("Enter the length of side a: ", sideA);
            utils::input("Enter the length of side b: ", sideB);
            utils::input("Enter the length of side c: ", sideC);
            double perimeter = geometry::triangle_perimeter(sideA, sideB, sideC);
            utils::output("Triangle perimeter: ", perimeter);
        }},
        {5, []() {
            double semiperimeter, sideA, sideB, sideC;
            utils::input("Enter the half-perimeter: ", semiperimeter);
            utils::input("Enter the length of the side a: ", sideA);
            utils::input("Enter the length of the side b: ", sideB);
            utils::input("Enter the length of the side c: ", sideC);
            double area = geometry::herons_formula_triangle_area(semiperimeter, sideA, sideB, sideC);
            utils::output("Area of a triangle by Heron's formula: ", area);
        }},
        {6, []() {
            double radius;
            utils::input("Enter the radius of the circle: ", radius);
            double area = geometry::circle_area(radius);
            double perimeter = geometry::circle_perimeter(radius);
            utils::output("Circle area: ", area);
            utils::output("Circle perimeter: ", perimeter);
        }},
        {7, []() {
            double diagonalOne, diagonalSecond;
            utils::input("Enter diagonal d1: ", diagonalOne);
            utils::input("Enter diagonal d2: ", diagonalSecond);
            double area = geometry::rhombus_area(diagonalOne, diagonalSecond);
            utils::output("The area of the rhombus: ", area);
        }},
        {8, []() {
            double lenght;
            utils::input("Enter the length of the side: ", lenght);
            double perimeter = geometry::rhombus_perimeter(lenght);
            utils::output("Perimeter rhombus�: ", perimeter);
        }},
        {9, []() {
            double base, height;
            utils::input("Enter the base: ", base);
            utils::input("Enter the height: ", height);
            double area = geometry::parallelogram_area(base, height);
            utils::output("The area of a parallelogram: ", area);
        }},
        {10, []() {
            double sideA, sideB;
            utils::input("Enter the length of the side a: ", sideA);
            utils::input("Enter the length of the side b: ", sideB);
            double perimeter = geometry::parallelogram_perimeter(sideA, sideB);
            utils::output("Perimeter of a parallelogram: ", perimeter);
        }},
        {11, []() {
            double baseA, baseB, height;
            utils::input("Enter the base a: ", baseA);
            utils::input("Enter the base b: ", baseB);
            utils::input("Enter the height: ", height);
            double area = geometry::trapeze_area(baseA, baseB, height);
            utils::output("Area of the trapezoid: ", area);
        }},
        {12, []() {
            double sideA, sideB, sideC, sideD;
            utils::input("Enter the length of the side a: ", sideA);
            utils::input("Enter the length of the side b: ", sideB);
            utils::input("Enter the length of the side c: ", sideC);
            utils::input("Enter the length of the side d: ", sideD);
            double perimeter = geometry::trapeze_perimeter(sideA, sideB, sideC, sideD);
            utils::output("Perimeter of the trapezoid: ", perimeter);
        }},
        {13, []() {
            double lenghtEdge;
            utils::input("Enter the length of the edge: ", lenghtEdge);
            double volume = geometry::cube_volume(lenghtEdge);
            double area = geometry::cube_area(lenghtEdge);
            utils::output("Volume: ", volume);
            utils::output("Surface area: ", area);
        }},
        {14, []() {
            double sideA, sideB, sideC;
            utils::input("Enter the length of the side a: ", sideA);
            utils::input("Enter the length of the side b: ", sideB);
            utils::input("Enter the length of the side c: ", sideC);
            double volume = geometry::rectangularParallelepiped_volume(sideA, sideB, sideC);
            double area = geometry::rectangularParallelepiped_area(sideA, sideB, sideC);
            utils::output("Volume: ", volume);
            utils::output("Surface area: ", area);
        }},
        {15, []() {
            double radius, height;
            utils::input("Enter the radius of the base: ", radius);
            utils::input("Enter the height: ", height);
            double volume = geometry::cylinder_volume(radius, height);
            double area = geometry::cylinder_area(radius, height);
            utils::output("Volume: ", volume);
            utils::output("Surface area: ", area);
        }},
        {16, []() {
            double radius, height;
            utils::input("Enter the radius of the base: ", radius);
            utils::input("Enter the height: ", height);
            double volume = geometry::cone_volume(radius, height);
            utils::output("Volume: ", volume);
        }},
        {17, []() {
            double radius, formingObliqueHeight;
            utils::input("Enter the radius of the base: ", radius);
            utils::input("Enter form (oblique height): ", formingObliqueHeight);
            double area = geometry::cone_area(radius, formingObliqueHeight);
            utils::output("Surface area: ", area);
        }},
        {18, []() {
            double radius;
            utils::input("Enter the radius: ", radius);
            double volume = geometry::char_volume(radius);
            double area = geometry::char_area(radius);
            utils::output("Volume: ", volume);
            utils::output("Surface area: ", area);
        }},
        {19, []() {
            double numberOfSides, length;
            utils::input("Enter the number of sides: ", numberOfSides);
            utils::input("Enter the length of the side: ", length);
            double area = geometry::polygon_area(numberOfSides, length);
            double perimetr = geometry::polygon_perimetr(numberOfSides, length);
            utils::output("Area: ", area);
            utils::output("Perimetr: ", perimetr);
        }},
        {20, []() {
            double largeAxleHalf, minorAxle;
            utils::input("Insert the large half axle: ", largeAxleHalf);
            utils::input("Insert the minor axle: ", minorAxle);
            double area = geometry::ellipse_area(largeAxleHalf, minorAxle);
            double perimetr = geometry::ellipse_perimetr(largeAxleHalf, minorAxle);
            utils::output("Area: ", area);
            utils::output("Perimetr: ", perimetr);
        }},
        {21, []() {
            double sectorCenterCorner, radius;
            utils::input("Sector center angle in radians: ", sectorCenterCorner);
            utils::input("Radius circle: ", radius);
            double area = geometry::circleSector_area(sectorCenterCorner, radius);
            double arcLenght = geometry::circleSector_arcLength(sectorCenterCorner, radius);
            utils::output("Area: ", area);
            utils::output("Arc lenght: ", arcLenght);
        }},
        {22, []() {
            double centerCircleRadius, torusTubeRadius;
            utils::input("Center circle radius: ", centerCircleRadius);
            utils::input("Torus tube radius: ", torusTubeRadius);
            double volume = geometry::thor_volume(centerCircleRadius, torusTubeRadius);
            double area = geometry::surfaceAreaOfThe_torus(centerCircleRadius, torusTubeRadius);
            utils::output("Volume: ", volume);
            utils::output("Surface area: ", area);
        }},
    };

    while (true) {
        clearScreen();
        std::cout << "Select a task:\n";
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

        int choice;
        utils::input("", choice);

        if (choice == 0) break;

        if (tasks.find(choice) != tasks.end()) {
            clearScreen();
            tasks[choice]();
            waitForKeyPress();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }
}

void algebraMenu() {
    std::map<int, std::function<void()>> tasks = {
        {1, []() {
            double a, b;
            utils::input("Enter the coefficient� a: ", a);
            utils::input("Enter the coefficient b: ", b);
            try {
                double solution = algebra::solve_linear_equation(a, b);
                utils::output("Solution of the equation: ", solution);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
    };

    while (true) {
        clearScreen();
        std::cout << "Select a task:\n";
        std::cout << "1. Solving a linear equation\n";
        std::cout << "Your choice: ";

        int choice;
        utils::input("", choice);

        if (choice == 0) break;

        if (tasks.find(choice) != tasks.end()) {
            clearScreen();
            tasks[choice]();
            waitForKeyPress();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }
}

void calculator() {
    std::map<int, std::function<void()>> tasks = {
        {1, []() {
            double a, b;
            utils::input("Enter a number: ", a);
            utils::input("Enter a number: ", b);
            double result = add(a, b);
            utils::output("Response: ", result);
        }},
        {2, []() {
            double a, b;
            utils::input("Enter a number: ", a);
            utils::input("Enter a number: ", b);
            double result = subtract(a, b);
            utils::output("Response: ", result);
        }},
        {3, []() {
            double a, b;
            utils::input("Enter a number: ", a);
            utils::input("Enter a number: ", b);
            double result = multiply(a, b);
            utils::output("Response: ", result);
        }},
        {4, []() {
            double a, b;
            utils::input("Enter a number: ", a);
            utils::input("Enter a number: ", b);
            try {
                double result = divide(a, b);
                utils::output("Response: ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {5, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            double result = calculateSin(value);
            utils::output("sin(x): ", result);
        }},
        {6, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            double result = calculateCos(value);
            utils::output("cos(x): ", result);
        }},
        {7, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            double result = calculateTan(value);
            utils::output("tan(x): ", result);
        }},
        {8, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            try {
                double result = calculateCotan(value);
                utils::output("Cotan(x): ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {9, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            try {
                double result = calculateArcsin(value);
                utils::output("arcsin(x): ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {10, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            try {
                double result = calculateArccos(value);
                utils::output("arccos(x): ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {11, []() {
            double value;
            utils::input("Enter the value (in radians): ", value);
            double result = calculateArctan(value);
            utils::output("arcsin(x): ", result);
        }},
        {12, []() {
            double value;
            utils::input("Enter a value: ", value);
            try {
                double result = calculateSqrt(value);
                utils::output("Sqrt: ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {13, []() {
            double base, exponent;
            utils::input("Enter a value: ", base);
            utils::input("Enter the degree to which you want to raise: ", exponent);
            double result = calculatePow(base, exponent);
            utils::output("Error: ", result);
        }},
        {14, []() {
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
        }},
        {15, []() {
            double value;
            utils::input("Enter a value: ", value);
            double result = calculateModulus(value);
            utils::output("Module: ", result);
        }},
        {16, []() {
            double num;
            utils::input("Enter a non-negative integer: ", num);
            try {
                double result = definitionOfFactorial(num);
                utils::output("Factorial (n!): ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {17, []() {
            double num;
            utils::input("Enter a non-negative integer: ", num);
            try {
                double result = definitionOfFactorialRecursive(num);
                utils::output("The factorial (n!) is recursive: ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {18, []() {
            double num;
            utils::input("Enter a non-negative integer: ", num);
            try {
                double result = propertiesOfFactorials(num);
                utils::output("Ratio of neighbouring factorials: ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
        {19, []() {
            double num, k;
            utils::input("Enter a non-negative integer(n): ", num);
            utils::input("Enter a non-negative integer(k): ", k);
            try {
                double result = numberOfCombinations(num, k);
                utils::output("C(n,k): ", result);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }},
    };

    while (true) {
        clearScreen();
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

        int choice;
        utils::input("", choice);

        if (choice == 0) break;

        if (tasks.find(choice) != tasks.end()) {
            clearScreen();
            tasks[choice]();
            waitForKeyPress();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }
}

void numberTable() {
    std::map<int, std::function<void()>> tasks = {
        {1, []() {
            std::string number;
            int base;
            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "Enter the base of the number system (2-16): ";
            std::cin >> base;

            try {
                int decimalValue = numbertable::baseToDecimal(number, base);

                if (std::isnan(decimalValue) || std::isinf(decimalValue)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                std::cout << "Decimal value: " << decimalValue << std::endl;
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
    };

    while (true) {
        clearScreen();
        std::cout << "Choose a task:\n";
        std::cout << "1. Conversion from any number system to decimal notation\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";

        int choice;
        utils::input("", choice);

        if (choice == 0) break;

        if (tasks.find(choice) != tasks.end()) {
            clearScreen();
            tasks[choice]();
            waitForKeyPress();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }
}

void physicsMenu() {
    std::map<int, std::function<void()>> tasks = {
        {1, []() {
            double v, t;
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of v: ", t);
            double s = physics::findingTheTravelled_calculate_path(v, t);
            utils::output("Calculated s: ", s);
        }},
        {2, []() {
            double s, v;
            utils::input("Write the value of s: ", s);
            utils::input("Write the value of v: ", v);
            try
            {
                double t = physics::findingTheTravelled_calculate_time(s, v);

                if (std::isnan(t) || std::isinf(t)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                utils::output("Calculated t: ", t);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {3, []() {
            double s, t;
            utils::input("Write the value of s: ", s);
            utils::input("Write the value of t: ", t);
            try
            {
                double v = physics::findingTheTravelled_calculate_speed(s, t);

                if (std::isnan(v) || std::isinf(v)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                utils::output("Calculated v: ", v);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {4, []() {
            double a, t;
            utils::input("Write the value of a: ", a);
            utils::input("Write the value of t: ", t);
            double v = physics::terminal_velocity(a, t);
            utils::output("Calculated v: ", v);
        }},
        {5, []() {
            double v_zero, t, a;
            utils::input("Write the value of v0: ", v_zero);
            utils::input("Write the value of t: ", t);
            utils::input("Write the value of a: ", a);
            try
            {
                double S = physics::pathOfEquidirectionalMotion(v_zero, t, a);

                if (std::isnan(S) || std::isinf(S)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                utils::output("Calculated S: ", S);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {6, []() {
            double S, a, t;
            utils::input("Write the value of S: ", S);
            utils::input("Write the value of a: ", a);
            utils::input("Write the value of t: ", t);
            try
            {
                double v_zero = physics::v_zeroOfEquidirectionalMotion(S, a, t);

                if (std::isnan(v_zero) || std::isinf(v_zero)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                utils::output("Calculated v0: ", v_zero);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {7, []() {
            double S, v_zero, t;
            utils::input("Write the value of S: ", S);
            utils::input("Write the value of v0: ", v_zero);
            utils::input("Write the value of t: ", t);
            try
            {
                double a = physics::accelerationOfEquidirectionalMotion(S, v_zero, t);

                if (std::isnan(a) || std::isinf(a)) {
                    throw std::runtime_error("Calculated acceleration is not a valid number.");
                }

                utils::output("Calculated a: ", a);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {8, []() {
            double v_zero, a, S;
            utils::input("Write the value of v0: ", v_zero);
            utils::input("Write the value of a: ", a);
            utils::input("Write the value of S: ", S);
            try
            {
                double v = physics::equationOfTheRelationshipBetweenVelocity(v_zero, a, S);

                if (std::isnan(v) || std::isinf(v)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                if (v <= 0) {
                    throw std::runtime_error("The speed (v) cannot be 0 according to this formula");
                }

                utils::output("Calculated v: ", v);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {9, []() {
            double v, a, S;
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of a: ", a);
            utils::input("Write the value of S: ", S);
            try
            {
                double v_zero = physics::equationOfTheRelationshipBetweenV_zero(v, a, S);

                if (std::isnan(v_zero) || std::isinf(v_zero)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                if (v_zero <= 0) {
                    throw std::runtime_error("The speed (v0) cannot be 0 according to this formula");
                }

                utils::output("Calculated v0: ", v_zero);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {10, []() {
            double v, v_zero, S;
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of v0: ", v_zero);
            utils::input("Write the value of S: ", S);
            try
            {
                double a = physics::equationOfTheRelationshipBetweenAcceleration(v, v_zero, S);

                if (std::isnan(a) || std::isinf(a)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated a: ", a);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {11, []() {
            double v, v_zero, a;
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of v0: ", v_zero);
            utils::input("Write the value of a: ", a);
            try
            {
                double S = physics::equationOfTheRelationshipBetweenPath(v, v_zero, a);

                if (std::isnan(S) || std::isinf(S)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated S: ", S);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {12, []() {
            double m, a;
            utils::input("Write the value of m: ", m);
            utils::input("Write the value of a: ", a);
            try
            {
                double F = physics::dynamicsNewtonsSecondLaw(m, a);

                if (std::isnan(F) || std::isinf(F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated F: ", F);

            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {13, []() {
            double F, a;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of a: ", a);
            try
            {
                double m = physics::dynamicsNewtonsSecondLawMass(F, a);

                if (std::isnan(m) || std::isinf(m)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated m: ", m);

            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {14, []() {
            double F, m;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of m: ", m);
            try
            {
                double a = physics::dynamicsNewtonsSecondLawMass(F, m);

                if (std::isnan(a) || std::isinf(a)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated m: ", a);

            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {15, []() {
            double u, N;
            utils::input("Write the value of u: ", u);
            utils::input("Write the value of N: ", N);
            try
            {
                double F = physics::frictionforce(u, N);

                if (std::isnan(F) || std::isinf(F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated F: ", F);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {16, []() {
            double F, N;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of N: ", N);
            try
            {
                double u = physics::frictionforceCoefficientOfFriction(F, N);

                if (std::isnan(u) || std::isinf(u)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated u: ", u);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {17, []() {
            double F, u;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of u: ", u);
            try
            {
                double N = physics::frictionforceNormalForce(F, u);

                if (std::isnan(N) || std::isinf(N)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated N: ", N);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {18, []() {
            double F, S, cos_a;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of S: ", S);
            utils::input("Write the value of cos a: ", cos_a);
            try
            {
                double A = physics::workOfForce(F, S, cos_a);

                if (std::isnan(A) || std::isinf(A)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated A: ", A);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {19, []() {
            double A, S, cos_a;
            utils::input("Write the value of F: ", A);
            utils::input("Write the value of S: ", S);
            utils::input("Write the value of cos a: ", cos_a);
            try
            {
                double F = physics::workOfForcePower(A, S, cos_a);

                if (std::isnan(F) || std::isinf(F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated F: ", F);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {20, []() {
            double A, F, cos_a;
            utils::input("Write the value of F: ", A);
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of cos a: ", cos_a);
            try
            {
                double S = physics::workOfForcePower(A, F, cos_a);

                if (std::isnan(S) || std::isinf(S)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated S: ", S);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {21, []() {
            double A, F, S;
            utils::input("Write the value of A: ", A);
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of S: ", S);
            try
            {
                double cos_a = physics::workOfForceCos_a(A, F, S);

                if (std::isnan(cos_a) || std::isinf(cos_a)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated cos_a: ", cos_a);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {22, []() {
            double A, t;
            utils::input("Write the value of A: ", A);
            utils::input("Write the value of t: ", t);
            try
            {
                double P = physics::power(A, t);

                if (std::isnan(P) || std::isinf(P)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated P: ", P);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {23, []() {
            double P, t;
            utils::input("Write the value of P: ", P);
            utils::input("Write the value of t: ", t);
            try
            {
                double A = physics::powerWork(P, t);

                if (std::isnan(A) || std::isinf(A)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated A: ", A);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {24, []() {
            double A, P;
            utils::input("Write the value of A: ", A);
            utils::input("Write the value of P: ", P);
            try
            {
                double t = physics::powerTime(A, P);

                if (std::isnan(t) || std::isinf(t)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated t: ", t);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {25, []() {
            double U, R;
            utils::input("Write the value of U: ", U);
            utils::input("Write the value of R: ", R);
            try
            {
                double I = physics::electrodynamicsCurrentStrength(U, R);

                if (std::isnan(I) || std::isinf(I)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated I: ", I);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {26, []() {
            double I, R;
            utils::input("Write the value of I: ", I);
            utils::input("Write the value of R: ", R);
            try
            {
                double U = physics::electrodynamicsTension(I, R);

                if (std::isnan(U) || std::isinf(U)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated U: ", U);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {27, []() {
            double U, I;
            utils::input("Write the value of U: ", U);
            utils::input("Write the value of I: ", I);
            try
            {
                double R = physics::electrodynamicsResistance(U, I);

                if (std::isnan(R) || std::isinf(R)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated R: ", R);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {28, []() {
            double c, m, del_T;
            utils::input("Write the value of c: ", c);
            utils::input("Write the value of m: ", m);
            utils::input("Write the value of del_T: ", del_T);
            try
            {
                double Q = physics::thermodynamicsHeat(c, m, del_T);

                if (std::isnan(Q) || std::isinf(Q)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated Q: ", Q);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {29, []() {
            double Q, m, del_T;
            utils::input("Write the value of Q: ", Q);
            utils::input("Write the value of m: ", m);
            utils::input("Write the value of del_T: ", del_T);
            try
            {
                double c = physics::thermodynamicsSpecificHeat(Q, m, del_T);

                if (std::isnan(c) || std::isinf(c)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated c: ", c);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {30, []() {
            double Q, c, del_T;
            utils::input("Write the value of Q: ", Q);
            utils::input("Write the value of c: ", c);
            utils::input("Write the value of del_T: ", del_T);
            try
            {
                double m = physics::thermodynamicsMass(Q, c, del_T);

                if (std::isnan(m) || std::isinf(m)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated m: ", m);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {31, []() {
            double Q, c, m;
            utils::input("Write the value of Q: ", Q);
            utils::input("Write the value of c: ", c);
            utils::input("Write the value of m: ", m);
            try
            {
                double del_T = physics::thermodynamicsDel_T(Q, c, m);

                if (std::isnan(del_T) || std::isinf(del_T)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated del_T: ", del_T);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {32, []() {
            double l;
            utils::input("Write the value of l: ", l);
            try
            {
                double T = physics::formulaForThePeriodOfOscillationOfaPendulum(l);

                if (std::isnan(T) || std::isinf(T)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated T: ", T);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {33, []() {
            double T;
            utils::input("Write the value of T: ", T);
            try
            {
                double l = physics::formulaForThePeriodOfOscillationOfaPendulumLength(T);

                if (std::isnan(l) || std::isinf(l)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated l: ", l);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {34, []() {
            double u, f;
            utils::input("Write the value of u: ", u);
            utils::input("Write the value of f: ", f);
            try
            {
                double L = physics::wavelengthFormula(u, f);

                if (std::isnan(L) || std::isinf(L)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated L: ", L);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {35, [](){
            double L, f;
            utils::input("Write the value of L: ", L);
            utils::input("Write the value of f: ", f);
            try
            {
                double u = physics::wavelengthFormulaWaveSpeed(L, f);

                if (std::isnan(u) || std::isinf(u)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }
                
                utils::output("Calculated u: ", u);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {36, [](){
            double u, L;
            utils::input("Write the value of u: ", u);
            utils::input("Write the value of L: ", L);
            try
            {
                double f = physics::wavelengthFormulaWaveFrequency(u, L);

                if (std::isnan(f) || std::isinf(f)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated f: ", f);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {37, [](){
            double d, f;
            utils::input("Write the value of d: ", d);
            utils::input("Write the value of f: ", f);
            try
            {
                double F = physics::lensFormulaThinLens(d, f);

                if (std::isnan(F) || std::isinf(F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated F: ", F);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {38, [](){
            double F, f;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of f: ", f);
            try
            {
                double d = physics::lensFormulaObjectDistance(F, f);

                if (std::isnan(d) || std::isinf(d)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated d: ", d);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {39, [](){
            double F, d;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of d: ", d);
            try
            {
                double f = physics::lensFormulaImageDistance(F, d);

                if (std::isnan(f) || std::isinf(f)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated f: ", f);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {40, [](){
            double del_F, del_t;
            utils::input("Write the value of del_F: ", del_F);
            utils::input("Write the value of del_t: ", del_t);
            try
            {
                double E = physics::faradaysLaw(del_F, del_t);

                if (std::isnan(E) || std::isinf(E)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated E: ", E);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {41, [](){
            double E, del_t;
            utils::input("Write the value of del_F: ", E);
            utils::input("Write the value of del_t: ", del_t);
            try
            {
                double del_F = physics::faradaysLawMagneticFluxVariation(E, del_t);

                if (std::isnan(del_F) || std::isinf(del_F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated del_F: ", del_F);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {42, [](){
            double del_F, E;
            utils::input("Write the value of del_F: ", del_F);
            utils::input("Write the value of E: ", E);
            try
            {
                double del_t = physics::faradaysLawChangeTime(del_F, E);

                if (std::isnan(del_t) || std::isinf(del_t)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated del_t: ", del_t);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {43, [](){
            double q, v, B, sin_a;
            utils::input("Write the value of q: ", q);
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of B: ", B);
            utils::input("Write the value of sin_a: ", sin_a);
            try
            {
                double F = physics::lorenzsStrength(q, v, B, sin_a);

                if (std::isnan(F) || std::isinf(F)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated F: ", F);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {44, [](){
            double F, v, B, sin_a;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of B: ", B);
            utils::input("Write the value of sin_a: ", sin_a);
            try
            {
                double q = physics::lorenzsStrenghtCharge(F, v, B, sin_a);

                if (std::isnan(q) || std::isinf(q)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated q: ", q);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {45, [](){
            double F, q, B, sin_a;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of q: ", q);
            utils::input("Write the value of B: ", B);
            utils::input("Write the value of sin_a: ", sin_a);
            try
            {
                double v = physics::lorenzsStrenghtChargeRate(F, q, B, sin_a);

                if (std::isnan(v) || std::isinf(v)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated v: ", v);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {46, [](){
            double F, q, v, sin_a;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of q: ", q);
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of sin_a: ", sin_a);
            try
            {
                double B = physics::lorenzsStrenghtMagneticInduction(F, q, v, sin_a);

                if (std::isnan(B) || std::isinf(B)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated B: ", B);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {47, [](){
           double F, q, v, B;
            utils::input("Write the value of F: ", F);
            utils::input("Write the value of q: ", q);
            utils::input("Write the value of v: ", v);
            utils::input("Write the value of B: ", B);
            try
            {
                double sin_a = physics::lorenzsStrenghtSin_a(F, q, v, B);

                if (std::isnan(sin_a) || std::isinf(sin_a)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated sin_a: ", sin_a);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {48, [](){
            double v;
            utils::input("Write the value of v: ", v);
            try
            {
                double E = physics::photonEnergy(v);

                if (std::isnan(E) || std::isinf(E)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated E: ", E);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {49, [](){
            double E;
            utils::input("Write the value of E: ", E);
            try
            {
                double v = physics::photonEnergyRadiationFrequency(E);

                if (std::isnan(v) || std::isinf(v)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                utils::output("Calculated v: ", v);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {50, [](){
            double p;
            utils::input("Write the value of p: ", p);
            try
            {
                double L = physics::theDeBroglieEquation(p);

                if (std::isnan(L) || std::isinf(L)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                if (L < 0) {
                    throw std::invalid_argument("The de Broglie wavelength must be greater than zero.");
                }

                utils::output("Calculated L: ", L);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
        {51, [](){
            double L;
            utils::input("Write the value of L: ", L);
            try
            {
                double p = physics::theDeBroglieEquationParticleMomentum(L);

                if (std::isnan(p) || std::isinf(p)) {
                    throw std::runtime_error("Calculated speed is not a valid number.");
                }

                if (p < 0) {
                    throw std::invalid_argument("The de Broglie wavelength must be greater than zero.");
                }

                utils::output("Calculated p: ", p);
            }
            catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            catch (const std::runtime_error& e) {
                std::cout << "Validation Error: " << e.what() << std::endl;
            }
        }},
    };

    while (true) {
        clearScreen();
        std::cout << "Select a task:\n";
        std::cout << "1.Finding the path travelled by the body at a=0 (s = v * t)\n";
        std::cout << "2.Finding the time travelled by the body at a=0 (t = s / v)\n";
        std::cout << "3.Finding the speed travelled by the body at a=0 (v = s / t)\n";
        std::cout << "4.Finding the final velocity of the body, at v0=0 (v = a * t)\n";
        std::cout << "5.The formula for the path of equidirectional motion(S = v0 * t + (a * t^2 / 2))\n";
        std::cout << "6.The formula for the v0 of equidirectional motion(v0 = (S - a * t^2 / 2) / t)\n";
        std::cout << "7.The formula for the acceleration (a) of equidirectional motion(a = (2 * (S - v0 * t)) / t^2\n";
        std::cout << "8.Equation of the relationship between velocity (v = sqrt(v0^2 - 2 * a * S)\n";
        std::cout << "9.Equation of the relationship between initial speed (v_zero = sqrt(v^2 - 2 * a * S)\n";
        std::cout << "10.Equation of the relationship between acceleration (a = (v^2 - v0^2) / (2 * S))\n";
        std::cout << "11.Equation of the relationship between path (S = (v^2 - v0^2) / (2 * a))\n";
        std::cout << "12.Dynamics Newton's Second Law (F = m * a)\n";
        std::cout << "13.Dynamics Newton's Second Law (m = F / a)\n";
        std::cout << "14.Dynamics Newton's Second Law (a = F / m)\n";
        std::cout << "15.Friction force (F = u * N)\n";
        std::cout << "16.Friction force coefficient of friction (u = F / N)\n";
        std::cout << "17.Friction force normal force (N = F / u)\n";
        std::cout << "18.Work of force (A = F * S * cos a)\n";
        std::cout << "19.Work of force power (F = A / S * cos a)\n";
        std::cout << "20.Work of force path (S = A / F * cos a)\n";
        std::cout << "21.Work of force cos a (cos a = A / F * S)\n";
        std::cout << "22.Power (P = A / t)\n";
        std::cout << "23.Power work (A = P * t)\n";
        std::cout << "24.Power time (t = A / P)\n";
        std::cout << "25.Electrodynamics current strength (I = U / R)\n";
        std::cout << "26.Electrodynamics tension (U = I * R)\n";
        std::cout << "27.Electrodynamics resistance (R = U / I)\n";
        std::cout << "28.Amount of heat when heating or cooling (Q = c * m * del_T)\n";
        std::cout << "29.Thermodynamics specific heat (c = Q / m * del_T)\n";
        std::cout << "30.Thermodynamics mass (m = Q / c * del_T)\n";
        std::cout << "31.Thermodynamics delta T (del_T = Q / c * m)\n";
        std::cout << "32.Formula for the period of oscillation of a pendulum (mathematical pendulum) (T = 2 * pi * sqrt(l / g)\n";
        std::cout << "33.Formula for the period of oscillation of a pendulum (pendulum length) (l = T^2 * g / 4 * pi^2)\n";
        std::cout << "34.Wavelength formula (L = u / f)\n";
        std::cout << "35.Wavelength formula wave speed (u = L * f)\n";
        std::cout << "36.Wavelength formula wave speed (f = u / L)\n";
        std::cout << "37.Lens formula (thin lens) (F = 1 / (1 / d) + (1 / f))\n";
        std::cout << "38.Lens formula the distance to the object (d = 1 / (1 / F) + (1 / f))\n";
        std::cout << "39.Lens formula the image distance (f = 1 / (1 / F) + (1 / d))\n";
        std::cout << "40.Electromagnetic field faraday's law  (E = -(del_F / del_t))\n";
        std::cout << "41.Electromagnetic field magnetic flux variation  (del_F = - (E * del_t)\n";
        std::cout << "42.Electromagnetic field change time (del_t = -(del_F / E))\n";
        std::cout << "43.Lorenz's strength (F = q * v * B * sin_a)\n";
        std::cout << "44.Lorenz's strength charge (q = F / v * B * sin_a)\n";
        std::cout << "45.Lorenz's strength charge rate (v = F / q * B * sin_a)\n";
        std::cout << "46.Lorenz's strength magnetic induction (B = F / q * v * sin_a)\n";
        std::cout << "47.Lorenz's strengths sin_a (sin_a = F / q * v * B)\n";
        std::cout << "48.Quantum physics photon energy (E = h(PLANCK_CONSTANT) * v)\n";
        std::cout << "49.Quantum physics photon energy (v = E / h(PLANCK_CONSTANT))\n";
        std::cout << "50.Quantum physics the de Broglie equation (L = h(PLANCK_CONSTANT) / p)\n";
        std::cout << "51.Quantum physics the de Broglie equation particle momentum (p = h(PLANCK_CONSTANT) / L)\n";
        std::cout << "Your choice: ";

        int choice;
        utils::input("", choice);

        if (choice == 0) break;

        if (tasks.find(choice) != tasks.end()) {
            clearScreen();
            tasks[choice]();
            waitForKeyPress();
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
            waitForKeyPress();
        }
    }
}

void functionGraphs() {
    std::cout << "The 'Function Graphs' section is not yet implemented. Return to the main menu.\n";
}