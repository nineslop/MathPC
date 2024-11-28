# Mathematical Utility Program

This program is a multi-functional mathematical tool written in C++. It provides solutions for various problems in geometry, algebra, basic arithmetic calculations, number system conversions, and function graphing. The tool offers a simple text-based menu to guide the user through different modules and tasks.

## Features

The program includes the following modules:

1. **Geometry**: 
   - Calculate areas and perimeters of basic 2D shapes (square, rectangle, triangle, etc.).
   - Calculate volumes and surface areas of 3D shapes (cube, sphere, cylinder, etc.).
   - Implements Heron's formula for triangle area and more.

2. **Algebra**:
   - Solve linear equations of the form `ax + b = 0`.

3. **Calculator**:
   - Perform basic arithmetic operations (addition, subtraction, multiplication, division).
   - Trigonometric calculations (sin, cos, tan, cotan, and their inverse functions).
   - Calculate square roots, powers, logarithms, factorials, and combinations.

4. **Number System Conversion**:
   - Convert numbers between different number bases (from base 2 to 16) to decimal (base 10).

5. **Function Graphing**:
   - (This module has been outlined but not yet implemented in the provided code.)

## Libraries Used

- `<iostream>`: For input/output operations.
- `<windows.h>`: For clearing the console screen (`system("cls")`).
- `<locale.h>`: To support the Russian language in the console.
- Custom header files for different mathematical functionalities:
  - `geometry.h`: Contains functions related to geometric calculations.
  - `algebra.h`: Contains functions for solving algebraic problems.
  - `calcul.h`: Contains arithmetic operations and mathematical functions like factorial, log, etc.
  - `utils.h`: Utility functions for input and output operations.
  - `numbertable.h`: Functions for number system conversion.

## How to Use

1. **Compile the Program**:  
   Compile the C++ source code using a C++ compiler. For example:
   ```bash
   g++ main.cpp -o math_tool
   ```

2. **Run the Program**:
   After compilation, run the executable:
   ```bash
   ./math_tool
   ```

3. **Navigate the Menu**:
   The program will display a main menu with the following options:
   - **1. Geometry**: Access geometry-related calculations.
   - **2. Algebra**: Solve algebraic equations.
   - **3. Calculator**: Perform arithmetic and scientific calculations.
   - **4. Number Table**: Convert numbers between different number systems.
   - **5. Function Graphs**: (Under development in the provided code).
   - **0. Exit**: Exit the program.

   After selecting an option, the program will guide you through the specific tasks related to that section. You can return to the main menu at any time by pressing Enter.

## Example

**Geometry Menu**:

If you choose the Geometry section, you'll be prompted with various options like calculating the area and perimeter of a square, rectangle, or circle. For example:

```
Выберите задачу:
1. Площадь и периметр квадрата
2. Площадь и периметр прямоугольника
3. Площадь треугольника
...
Ваш выбор: 1
Введите длину стороны: 5
Площадь квадрата: 25
Периметр квадрата: 20
Нажмите Enter для возврата в меню.
```

**Calculator Menu**:

Similarly, selecting the Calculator section allows you to perform various operations like addition, trigonometric functions, and logarithms.

```
Выберите задачу:
1. Сложение
2. Вычитание
3. Умножение
...
Ваш выбор: 1
Введите число: 5
Введите число: 3
Ответ: 8
Нажмите Enter для возврата в меню.
```

## Contributing

If you'd like to contribute to the project, feel free to fork the repository, make changes, and create a pull request. I welcome improvements and bug fixes!

## License

This project is open-source and available under the MIT License.

```

This `README.md` provides a clear overview of the project, the different sections available, and some instructions on how to use the program. It also includes instructions for building and running the program, and encourages others to contribute.
