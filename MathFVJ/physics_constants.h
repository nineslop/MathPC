#pragma once

#ifndef PHYSICS_CONSTANTS_H
#define PHYSICS_CONSTANTS_H

#include <cmath>

namespace Physics_constants {
    // Speed of light in vacuum (exactly), m/s
    constexpr double SPEED_OF_LIGHT = 299792458.0;

    // Gravitational constant (value with error), m³/(kg-s²)
    constexpr double GRAVITATIONAL_CONSTANT = 6.67430e-11; // Basic value
    constexpr double GRAVITATIONAL_CONSTANT_ERROR = 0.00015e-11; // Погрешность

    // Planck's constant (exact), J-s
    constexpr double PLANCK_CONSTANT = 6.62607015e-34;

    // π value (accurate up to 15 characters, sufficient for most calculations)
    constexpr double PI = 3.141592653589793;

    // Dirac constant (exact value, ℏ = h / 2π), J-s
    constexpr double REDUCED_PLANCK_CONSTANT = PLANCK_CONSTANT / (2.0 * PI);

    // Elementary charge (exactly), Coulombs (C)
    constexpr double ELEMENTARY_CHARGE = 1.602176634e-19;

    // Boltzmann constant (exactly), J/K
    constexpr double BOLTZMANN_CONSTANT = 1.380649e-23;

    // Fine-structure constant (dimensionless)
    constexpr double FINE_STRUCTURE_CONSTANT = ELEMENTARY_CHARGE * ELEMENTARY_CHARGE / (4.0 * PI * 8.854187817e-12 * PLANCK_CONSTANT * SPEED_OF_LIGHT); // α = e² / (4 * π * ε₀ * ℏ * c)

    // Electric constant (ε₀), F/m
    constexpr double ELECTRIC_CONSTANT = 8.854187818e-12; // Exact value

    // Magnetic constant (μ₀), H/m (Henries per meter)
    constexpr double MAGNETIC_CONSTANT = 4.0 * PI * 1e-7; // μ₀ = 4π × 10⁻⁷ H/m

    // Wave impedance in vacuum (Z₀), Ω (Ohms)
    constexpr double VACUUM_IMPEDANCE = MAGNETIC_CONSTANT * SPEED_OF_LIGHT; // Z₀ = μ₀ * c ≈ 376.73 Ω

    // Coulomb's constant (k), N·m²/C²
    constexpr double COULOMBS_CONSTANT = 1.0 / (4.0 * PI * ELECTRIC_CONSTANT); // k = 1 / (4π ε₀) ≈ 8.98755 × 10⁹ N·m²/C²

    // Atomic mass unit (amu), kg
    constexpr double ATOMIC_MASS_UNIT = 1.66053906660e-27;

    // Avogadro constant, mol⁻¹
    constexpr double AVOGADRO_CONSTANT = 6.02214076e23; // Exact value

    // 1 electronvolt (eV) in Joules
    constexpr double ELECTRON_VOLT = 1.602176634e-19; // Exact value

    // 1 calorie (international) in Joules
    constexpr double CALORIE = 4.1868; // Exact value

    // Mass of electron (me), kg
    constexpr double ELECTRON_MASS = 9.1093837139e-31; // kg

    // Mass of proton (mp), kg
    constexpr double PROTON_MASS = 1.67262192595e-27; // kg

    // Mass of neutron (mn), kg
    constexpr double NEUTRON_MASS = 1.67492750056e-27; // kg

    // Mass of proton + electron (hydrogen atom), kg
    constexpr double PROTON_ELECTRON_MASS = 1.6735328e-27; // kg

    // Bohr magneton (μB), J·T⁻¹
    constexpr double BOHR_MAGNETON = 9.2740100657e-24; // J·T⁻¹

    // Nuclear magneton (μN), J·T⁻¹
    constexpr double NUCLEAR_MAGNETON = 5.0507837393e-27; // J·T⁻¹

    // g-factor of the free electron (ge), dimensionless
    constexpr double ELECTRON_G_FACTOR = 2.00231930436092; // dimensionless

    // Gyromagnetic ratio of proton (γp), s⁻¹·T⁻¹
    constexpr double PROTON_GYROMAGNETIC_RATIO = 2.6752218708e8; // s⁻¹·T⁻¹

    // Faraday constant (F), C·mol⁻¹
    constexpr double FARADAY_CONSTANT = 96485.33212; // C·mol⁻¹

    // Universal gas constant (R), J·K⁻¹·mol⁻¹
    constexpr double UNIVERSAL_GAS_CONSTANT = 8.314462618; // J·K⁻¹·mol⁻¹

    // Molar volume of ideal gas (Vm), m³·mol⁻¹ at 273.15 K and 101.325 kPa
    constexpr double MOLAR_VOLUME = 22.41396954e-3; // m³·mol⁻¹

    // Standard acceleration due to gravity (gn), m/s²
    constexpr double GRAVITY_ACCELERATION = 9.80665; // m/s²

    // Triple point of water temperature (T₀), K
    constexpr double WATER_TRIPLE_POINT_TEMP = 273.16; // K

    constexpr double sqrt_custom(double value, double guess = 1.0) {
        double new_guess = 0.5 * (guess + value / guess);
        if (guess == new_guess) {
            return new_guess;
        }
        return sqrt_custom(value, new_guess);
    }

    constexpr double PLANCK_MASS =
        sqrt_custom(REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT / GRAVITATIONAL_CONSTANT); // Planck mass, kg
    constexpr double PLANCK_LENGTH =
        sqrt_custom(REDUCED_PLANCK_CONSTANT * GRAVITATIONAL_CONSTANT / (SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT)); // Planck length, m
    constexpr double PLANCK_TIME =
        sqrt_custom(REDUCED_PLANCK_CONSTANT * GRAVITATIONAL_CONSTANT / (SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT)); // Planck time, s
    constexpr double PLANCK_TEMPERATURE =
        sqrt_custom(REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT * SPEED_OF_LIGHT / GRAVITATIONAL_CONSTANT) / BOLTZMANN_CONSTANT; // Planck temperature, K
}

#endif