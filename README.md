# Mathematical Utility Program

This program is a multi-functional mathematical tool written in C++. It provides solutions for various problems in geometry, algebra, basic arithmetic calculations, number system conversions, and function graphing. The tool offers a simple text-based menu to guide the user through different modules and tasks.

## Features

The program includes the following modules:

1. **Geometry**: 
   - Calculate areas and perimeters of basic 2D shapes (square, rectangle, triangle, etc.).
   - Calculate volumes and surface areas of 3D shapes (cube, sphere, cylinder, etc.).
   - Implements Heron's formula for triangle area and more.
   - Supports advanced shapes like rhombus, parallelogram, trapezoid, and polygons.
   - Includes specialized shapes like ellipses, circle sectors, and toruses.

2. **Algebra**:
   - Solve linear equations of the form `ax + b = 0`.

3. **Calculator**:
   - Perform basic arithmetic operations (addition, subtraction, multiplication, division).
   - Trigonometric calculations (sin, cos, tan, cotan, and their inverse functions).
   - Calculate square roots, powers, logarithms, factorials, and combinations.

4. **Number System Conversion**:
   - Convert numbers between different number bases (from base 2 to 16) to decimal (base 10).

5. **Function Graphing**:
   - (This module has been intended but not yet implemented in the provided code, the implementation will be with the OpenGL library).

## Geometry Functions

### 2D Shapes
- **Square**: 
  - `square_area(double length)`
  - `square_perimeter(double length)`
  
- **Rectangle**: 
  - `rectangle_area(double lengthA, double lengthB)`
  - `rectangle_perimeter(double lengthA, double lengthB)`
  
- **Triangle**:
  - `triangle_area(double base, double height)`
  - `triangle_perimeter(double sideA, double sideB, double sideC)`
  - `herons_formula_triangle_area(double semiperimeter, double sideA, double sideB, double sideC)`
  
- **Circle**:
  - `circle_area(double radius)`
  - `circle_perimeter(double radius)`
  
- **Rhombus**: 
  - `rhombus_area(double diagonalOne, double diagonalSecond)`
  - `rhombus_perimeter(double length)`
  
- **Parallelogram**: 
  - `parallelogram_area(double base, double height)`
  - `parallelogram_perimeter(double sideA, double sideB)`
  
- **Trapezoid (Trapeze)**: 
  - `trapeze_area(double baseA, double baseB, double height)`
  - `trapeze_perimeter(double sideA, double sideB, double sideC, double sideD)`
  
- **Polygon**:
  - `polygon_area(double numberOfSides, double length)`
  - `polygon_perimeter(double numberOfSides, double length)`
  
- **Ellipse**: 
  - `ellipse_area(double majorAxisHalf, double minorAxis)`
  - `ellipse_perimeter(double majorAxisHalf, double minorAxis)`
  
- **Circle Sector**:
  - `circleSector_area(double sectorCenterAngle, double radius)`
  - `circleSector_arcLength(double sectorCenterAngle, double radius)`

### 3D Shapes
- **Cube**:
  - `cube_volume(double lengthEdge)`
  - `cube_area(double lengthEdge)`
  
- **Rectangular Parallelepiped**: 
  - `rectangularParallelepiped_volume(double sideA, double sideB, double sideC)`
  - `rectangularParallelepiped_area(double sideA, double sideB, double sideC)`
  
- **Cylinder**: 
  - `cylinder_volume(double radius, double height)`
  - `cylinder_area(double radius, double height)`
  
- **Cone**:
  - `cone_volume(double radius, double height)`
  - `cone_area(double radius, double formingObliqueHeight)`
  
- **Torus**: 
  - `thor_volume(double centerCircleRadius, double torusTubeRadius)`
  - `surfaceAreaOfThe_torus(double centerCircleRadius, double torusTubeRadius)`

## Libraries Used

The program uses the following libraries:

- `<iostream>`: For input and output operations.
- `<limits>`: To define limits for numeric data types (e.g., `std::numeric_limits`).
- `<windows.h>`: For clearing the console screen using `system("cls")` (Windows-specific).
- `<locale.h>`: To support the Russian language in the console.
- `<cmath>`: For mathematical functions such as trigonometric, exponential, and logarithmic calculations.
- `<stdexcept>`: To handle standard exceptions (e.g., `std::invalid_argument`).
- `<string>`: For string manipulation.
- `<algorithm>`: For standard algorithms like sorting and searching.
- **Custom Header Files**:
  - `geometry.h`: Contains functions related to geometric calculations.
  - `algebra.h`: Contains functions for solving algebraic problems.
  - `calcul.h`: Contains arithmetic operations and other mathematical functions.
  - `utils.h`: Contains utility functions for input, output, and other operations.
  - `numbertable.h`: Functions for converting between number systems (binary, octal, hexadecimal, etc.).

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
Select a task:
1. Square area and perimeter
2. Rectangle area and perimeter
3. Triangle area
...
Your choice: 1
Enter side length: 5
Square area: 25
Square perimeter: 20
Press Enter to return to the menu.
```

**Calculator Menu**:

Similarly, selecting the Calculator section allows you to perform various operations like addition, trigonometric functions, and logarithms.

```
Select a task:
1. Addition
2. Subtraction
3. Multiplication
...
Your choice: 1
Enter number: 5
Enter number: 3
Result: 8
Press Enter to return to the menu.
```

## Contributing

If you'd like to contribute to the project, feel free to fork the repository, make changes, and create a pull request. I welcome improvements and bug fixes!

## License

This project is open-source and available under the MIT License.

### Key Updates:
1. **Geometry Menu**: The updated Geometry Menu includes calculations for more shapes, such as ellipses, circle sectors, and toruses.
2. **Calculator Menu**: Describes the calculator's functionalities for arithmetic and trigonometric operations.
3. **Key Changes**: Now highlighted in English, including the addition of new shapes and their formulas for area, perimeter, volume, and surface area calculations.

```

This updated `README.md` provides a comprehensive guide for the program's capabilities and usage.
