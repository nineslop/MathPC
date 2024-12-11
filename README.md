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
   - **Kinematics**: Calculate displacement, time, and speed for uniform motion, and velocity, displacement, initial velocity, and acceleration for uniformly accelerated motion.
   - **Dynamics**: Use Newton's Second Law to find force, mass, and acceleration in a system.
   - **Motion and Velocity Relationships**: Derive and solve equations connecting velocity, acceleration, and displacement, including terminal velocity.
   - **Friction Force**: Compute friction based on the coefficient of friction and normal force; solve for unknowns in friction-related problems.
   - **Work of Force**: Calculate work done by a force, using magnitude, displacement, and the angle between them.
   - **Power**: Calculate power based on work and time, or determine work or time given power.
   - **Electrodynamics**: Solve for current, voltage, and resistance in circuits using Ohm's Law.
   - **Thermodynamics**: Calculate heat energy changes based on specific heat capacity, mass, and temperature change.
   - **Mechanical vibrations and waves**: Analyze mechanical vibrations and wave properties.
   - **Wavelength formula**: Calculate the wavelength of a wave based on frequency and wave speed.
   - **Lens formula (thin lens)**: Apply the thin lens formula to solve optical problems involving lenses.
   - **Electromagnetic Field**: Analyze and compute characteristics of electromagnetic fields.
   - **Lorentz Force**: Solve problems involving the Lorentz force acting on charged particles in magnetic and electric fields.
   - **Quantum Physics**: Calculate photon energy using Planck's constant and frequency.
   - **The de Broglie Equation**: Apply the de Broglie wavelength formula to determine the wavelength of particles based on their momentum.

6. **Function Graphing**:
   - (This module has been intended but not yet implemented in the provided code, the implementation will be with the OpenGL library).

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

      - New features added.
         - Electromagnetic Field

         - Lorentz Force
         
         - Quantum Physics   

         - The de Broglie Equation

```

This updated `README.md` provides a comprehensive guide for the program's capabilities and usage.
