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
1. **Physics Constants**: The program now includes important physical constants, such as the speed of light, gravitational constant, and Planck's constant, which are stored in the physics_constants.h file. These constants are useful for scientific and advanced calculations involving fundamental physical properties.

2. **Physics Module**: Physics has been rewritten, the formulas changed and made more understandable
   
   **Kinematics**
      - 2.1 Uniform Motion:
         - Displacement, Time, and Speed: Functions for calculating the displacement (s), time (t), and speed (v) in cases of uniform (constant) motion. These are based on the simple equation s=v⋅ts=v⋅t, where vv is velocity, and tt is time. The time and displacement can also be computed from the other two known variables.
         
         - Key Formula:
          $$s = v * t$$

      - 2.2 Uniformly Accelerated Motion:
         - Velocity, Displacement, Initial Velocity, and Acceleration: Functions for solving problems where motion is uniformly accelerated, using the well-known kinematic equations:
         
         - Key Formula:
          $$v=v_0​+a*t$$
          $$s = v_0 * t + \frac12 * a * t^2$$
          $$v^2 = v_0^2$$
         - These formulas allow you to compute the final velocity $v$, displacement $s$, or acceleration aa from the known quantities like initial velocity $v_0$​, time $t$, and acceleration.

      - 2.3 Solving Equations Relating Velocity, Acceleration, and Displacement:
         - The module provides various equations that link velocity, initial velocity, acceleration, and displacement. For example:

         - Equation 1: $v = \sqrt{v_0^2 - 2 * a * s}$ (used for finding final velocity given initial velocity, acceleration, and displacement).

         - Equation 2: $s = \frac{v^2 - v_0^2}{2 \cdot a}$ (used for finding displacement with known velocities and acceleration).
      
   **Dynamics**
      - 2.4 Newton's Second Law:
         - Force, Mass, and Acceleration: The module allows the application of Newton's Second Law of Motion $(F=m⋅a)$ to calculate force $(F)$, mass $(m)$, or acceleration $(a)$ when two of the quantities are known. This enables solving problems involving the forces acting on objects.
   
         - Key Formula:
          $$F = m * a$$

         - The module also includes separate functions for calculating mass from force and acceleration and acceleration from force and mass.

      - 2.5 Mass and Acceleration Calculations:
         - With this feature, you can compute the mass of an object when the force and acceleration are known, or calculate the acceleration if you know the force and mass. These functions can be used for solving dynamic motion problems where external forces are involved.
   
   - **Motion and Velocity Relationships**
      - 2.6 Relationship Between Velocity, Initial Velocity, Acceleration, and Displacement:
         - The module derives relationships between key quantities such as velocity $(v)$, initial velocity $(v_0​)$, acceleration $(a)$, and displacement $(s)$. These relationships are essential for solving a variety of kinematic and dynamic problems.
   
         - Examples include:
            - $v = \sqrt{v_0^2 - 2 \cdot a \cdot s}$ (to find velocity in cases where you have acceleration and displacement).
            - $v_0 = \sqrt{v^2 - 2 \cdot a \cdot s}$ (to find initial velocity).
            - $s = \frac{v^2 - v_0^2}{2 \cdot a}$ (to find displacement with known initial and final velocities).
   
      - 2.7 Advanced Motion Equations:
         - Terminal Velocity: The module can calculate terminal velocity in situations where an object is subject to forces like drag, and its acceleration decreases to zero due to opposing forces. The formulas for terminal velocity $v_{\text{terminal}} = \sqrt{2 \cdot m \cdot g / c}$ are implemented for use in such calculations.

3. **User Interface (Menu)**: The menu structure provides a range of options to calculate various physical quantities. Each menu option corresponds to a different formula or method for calculating a specific aspect of mechanics, from basic kinematic equations to more complex force, acceleration, and work-related problems.

4. **Error Handling**: Improved error handling has been added throughout the functions to ensure that invalid inputs or calculations that result in "NaN" or "infinity" are flagged. This ensures more robust and user-friendly interactions, especially when working with real-world values.

```

This updated `README.md` provides a comprehensive guide for the program's capabilities and usage.
