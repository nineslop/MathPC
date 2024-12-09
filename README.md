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
   - Solve linear equations of the form $ax + b = 0$.

3. **Calculator**:
   - Perform basic arithmetic operations (addition, subtraction, multiplication, division).
   - Trigonometric calculations (sin, cos, tan, cotan, and their inverse functions).
   - Calculate square roots, powers, logarithms, factorials, and combinations.

4. **Number System Conversion**:
   - Convert numbers between different number bases (from base 2 to 16) to decimal (base 10).

5. **Physics**:
   - **Kinematics**
      - Calculate displacement, time, and speed for uniform motion.
      - Compute velocity, displacement, initial velocity, and acceleration for uniformly accelerated motion.
      - Solve equations relating velocity, acceleration, and displacement.
   - **Dynamics**
      - Apply Newton's Second Law to calculate force, mass, and acceleration.
      - Support calculations for mass and acceleration based on given forces.
   - **Motion and Velocity Relationships**
      - Derive relationships between velocity, initial velocity, acceleration, and displacement.
      - Compute values using advanced motion equations, including terminal velocity.
   - **Friction Force**
      - Calculate the force of friction based on the coefficient of friction and the normal force.
      - Determine the coefficient of friction or the normal force when the other values are known.
      - Useful for solving problems involving objects in motion or at rest on surfaces with varying friction.
   - **Work of Force**
      - Calculate the work done by a force based on the force magnitude, displacement, and the angle between them.
      - Determine unknown variables such as force, displacement, or the angle based on known work values.
      - Ideal for analyzing energy transfer in mechanical systems.
   - **Power**
      - Calculate the power output of a system based on work done and time taken.
      - Determine work done or time elapsed when the power is known.
      - Supports solving problems in mechanics and electrical circuits.
   - **Electrodynamics**
      - Calculate current, voltage, or resistance in an electrical circuit using Ohm's Law.
      - Analyze relationships between these quantities for various circuit configurations.
      - A foundational tool for solving electrodynamics problems.
   - **Thermodynamics**
      - Calculate the heat energy required or released based on specific heat capacity, mass, and temperature change.
      - Determine unknown properties such as specific heat capacity, mass, or temperature change in thermal systems.
      - Essential for solving problems involving heat transfer and thermal energy storage.
   - **Scalable Physics Constants**
      - Incorporates predefined constants for accurate physical computations.

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

The program leverages a comprehensive set of predefined constants stored in physics_constants.h to ensure accurate and scientifically robust calculations. These include:

#### Fundamental Constants

   - Speed of Light $(c)$: $299,792,458 m/s$, the exact speed of light in a vacuum.
   - Gravitational Constant $(G)$: $6.67430×10^{−11} m^3/kg⋅s^2$, used in gravitational calculations.
   - Planck's Constant $(h)$: $6.62607015×10^{−34} J⋅s$, foundational for quantum mechanics.
   - Reduced Planck's Constant $(ℏ)$: $ℏ=h/(2π)$.

#### Atomic and Particle Physics Constants

   - Elementary Charge $(e)$: $1.602176634×10^{−19} C$, the charge of an electron or proton.
   - Electron Mass: $9.1093837139×10^{−31} kg$.
   - Proton Mass: $1.67262192595×10^{−27} kg$.
   - Neutron Mass: $1.67492750056×10^{−27} kg$.

#### Thermodynamics and Statistical Mechanics

   - Boltzmann Constant $(k)$: $1.380649×10^{−23} J/K$, essential for statistical mechanics.
   - Universal Gas Constant $(R)$: $8.314462618 J/K⋅mol$.
   - Molar Volume: $22.41396954 cm^3/mol$ at standard conditions.

#### Electromagnetic Constants

   - Electric Constant $(ϵ_0​)$: $8.854187818×10^{−12} F/m$.
   - Magnetic Constant $(μ_0​)$: $4π×10^{−7} H/m$.
   - Vacuum Impedance: $376.73 Ω$.

#### Planetary Free-Fall Accelerations

   - Earth: $9.81 m/s^2$.
   - Moon: $1.62 m/s^2$.
   - Jupiter: $24.79 m/s^2$.
   Additional constants for Venus, Mars, Saturn, and other celestial bodies are included.

#### Planck Units (Quantum Gravity Theory)

   - Planck Mass: Derived from fundamental constants, representing the quantum of mass.
   - Planck Length: The smallest meaningful length in quantum physics.
   - Planck Time: The smallest meaningful unit of time.
   - Planck Temperature: Maximum temperature in quantum theory.

These constants are carefully validated and structured for use in a variety of physical, astrophysical, and quantum mechanics calculations. For a complete list, refer to the physics_constants.h file.


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
1. **Physics Module**

      - New functions and enhanced error handling have been added to improve accuracy and robustness for various physical calculations.
   
   **Friction Force**
      - Functions for calculating the force of friction, the coefficient of friction, and the normal force have been implemented.
         
      - Enhanced error handling ensures inputs like negative coefficients or zero normal force are flagged as invalid.

   **Work of Force**
      - Functions to compute work done by a force, as well as solve for unknowns like force, displacement, or the angle between force and motion.
   
      - Invalid scenarios, such as zero displacement or cosine of the angle being zero, are now handled with clear exceptions.

   **Power**
      - New functions to calculate power, work, and time in systems involving energy transfer.
   
      - The module checks for logical constraints, such as non-negative time and work values.

   **Electrodynamics**
      - Functions for computing current strength, voltage, and resistance using Ohm's Law.

      - Robust validation prevents division by zero and ensures realistic values for current and resistance.

   **Thermodynamics**
      - Added functions to calculate heat, specific heat capacity, mass, and temperature change in thermal systems.

      - Error handling ensures that inputs like mass, specific heat capacity, and temperature differences meet physical constraints.
      
2. **User Interface (Menu)**

      The menu structure now offers an expanded range of options for calculating various physical quantities across multiple physics domains. Each menu option corresponds to specific formulas or methods, covering topics such as friction, work, power, electrodynamics, and thermodynamics.

      The menu is structured to guide the user through intuitive steps for solving problems, from basic kinematic equations to advanced calculations for forces, energy, and thermal systems. Enhanced error handling ensures a user-friendly experience, providing clear feedback for invalid inputs or edge cases.

      Newly added options allow users to:
      - Calculate friction forces and analyze the effects of different coefficients and normal forces.

      - Compute work done, power output, and related variables in mechanical systems.

      - Solve electrodynamic problems involving current, voltage, and resistance.

      - Perform thermal calculations, such as determining heat energy, mass, or temperature changes.

      This expanded functionality makes the menu a versatile tool for tackling a wide variety of physical problems.

3. **Error Handling**

      Error handling has been significantly improved across all new and existing functions to ensure robust and user-friendly interactions. Key enhancements include:

      - Input Validation: Functions now rigorously check for invalid inputs, such as negative or zero values where they are not physically meaningful (e.g., negative mass, zero time, or invalid coefficients of friction).

      - Exception Handling: When invalid inputs are detected, clear and specific exceptions (std::invalid_argument) are thrown, providing detailed feedback to the user about the nature of the issue.

      - Boundary Conditions: Calculations that could result in "NaN" (Not a Number) or "infinity" are intercepted early, with appropriate error messages to guide the user toward correcting the inputs.

      - Consistency Checks: Ensures that logical constraints, such as positive work and non-zero temperature changes, are always met.

      These enhancements make the program more reliable and ensure that real-world values are handled with precision, minimizing the likelihood of runtime errors and improving the overall user experience.

```

This updated `README.md` provides a comprehensive guide for the program's capabilities and usage.
