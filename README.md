# Mathematical Physical Utility Program (MPUP)

This program is a multifunctional mathematical and physical tool written in C++/C. It provides solutions to various problems in geometry, algebra, basic arithmetic calculations, number system conversions, calculating with physics formulas and using internal physical constants and graphing functions. The program has a simple text menu through which the user can perform various modules and tasks.

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

5. **Physics**:
   - **Kinematics**: Calculate velocity, acceleration, displacement, and time using the basic kinematic equations.
   - **Forces**: Calculate force, mass, and acceleration using Newton's Second Law.
   - **Energy**: Compute kinetic energy, potential energy, and work done.
   - **Momentum**: Calculate momentum and impulse.
   - **Simple Harmonic Motion**: Calculate the period, frequency, and amplitude of simple harmonic oscillators.
   - **Physics Constants**: The program uses a comprehensive set of physics constants, which are stored in the `physics_constants.h` file. These constants include fundamental quantities like the speed of light, gravitational constant, Planck's constant, elementary charge, Boltzmann constant, and more.

6. **Function Graphing**:
   - (This module has been intended but not yet implemented in the provided code, the implementation will be with the OpenGL library).

## Geometry Functions

### 2D Shapes
- Square:
  
- Rectangle: 
  
- Triangle:
  
- Circle:
  
- Rhombus: 
  
- Parallelogram: 
  
- Trapezoid (Trapeze): 
  
- Polygon:
  
- Ellipse: 
  
- Circle Sector:

### 3D Shapes
- Cube:
  
- Rectangular Parallelepiped: 
  
- Cylinder: 
  
- Cone:
  
- Torus: 

## Physics constants

A file that future development will use to apply the physics constants stored in `physics_constants.h` for accurate scientific calculations. Here are some of the key constants:

- **Speed of light in vacuum**:  
  `SPEED_OF_LIGHT = 299792458.0 m/s`  
  The speed of light in a vacuum is a fundamental constant.

- **Gravitational constant**:  
  `GRAVITATIONAL_CONSTANT = 6.67430e-11 m³/(kg·s²)`  
  The gravitational constant with a known error margin.

- **Planck's constant**:  
  `PLANCK_CONSTANT = 6.62607015e-34 J·s`  
  Used to describe quantum mechanics.

- **Elementary charge**:  
  `ELEMENTARY_CHARGE = 1.602176634e-19 C`  
  The charge of a single proton or electron.

- **Boltzmann constant**:  
  `BOLTZMANN_CONSTANT = 1.380649e-23 J/K`  
  Used in statistical mechanics.

- **Fine-structure constant**:  
  `FINE_STRUCTURE_CONSTANT`  
  A dimensionless constant important in quantum electrodynamics.

- **Gravitational acceleration on Earth**:  
  `GRAVITY_ACCELERATION = 9.80665 m/s²`  
  The standard acceleration due to gravity at Earth's surface.

- **Planck mass, length, time, and temperature**:  
  These constants represent the fundamental units of mass, length, time, and temperature in quantum gravity theory:
  - `PLANCK_MASS`
  - `PLANCK_LENGTH`
  - `PLANCK_TIME`
  - `PLANCK_TEMPERATURE`

For more constants and details, check the `physics_constants.h` header file.


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
  - `physics.h`: Contains functions for physics-related calculations.
  - `physics_constants.h`: Contains constants used in physics calculations.

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
   - **5. Physics forms**: Access physics-related calculations.
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
1. **Physics Constants**: The program now includes a set of essential physical constants, such as the speed of light, gravitational constant, Planck's constant, and more. These are available in the `physics_constants.h` file for scientific calculations.
2. **Physics Module**: A new **Physics** module has been added, with the implementation of fundamental mechanics formulas in the files `physics.cpp` and `physics.h`. This includes the following functionalities:
   - **Speed and Time Calculations**: Functions to calculate path, time, and speed based on known variables.
   - **Acceleration and Velocity Change**: Functions to calculate acceleration, velocity change, and time change.
   - **Newton's Second Law (Force)**: Functions for calculating force, mass, and acceleration using Newton’s second law (F = ma).
   - **Work and Force Calculations**: Functions to calculate work, force, and distance based on the work-energy principle, incorporating angles for work done (A = F * s * cos(α)).
   
   The new **Physics** functions can be used to solve various mechanics-related problems, such as finding the time it takes to travel a distance, the force needed for acceleration, and the work done by a force over a given distance with an angle.

```

This updated `README.md` provides a comprehensive guide for the program's capabilities and usage.
