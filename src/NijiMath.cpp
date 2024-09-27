/* =============================================================================
 * niji_math.cpp
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa / 虹川郷鬼
 *                       Wamo            / ワーモ
 * 
 * This contains the functions for Niji Math.
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

// Header libraries
#include <iostream>
#include <cmath>

// User defined headers
#include "header/NijiMath.h"

// Establishes usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * Functions that Satoki wrote
 * -----------------------------------------------------------------------------
 */

/* Addition
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_addition() {
    int x, y;
    int sum;
    char confirmation;
    std::cout << "Addition takes two numbers and adds them together." << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter a number: ";
        std::cin >> x;
        std::cout << "Please enter another number: ";
        std::cin >> y;
        // Confirm the user's desire
        std::cout << "So you want to add " << x << " and " << y << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Add the numbers together
        sum = x + y;
        std::cout << x << " plus " << y << " is " << sum << "." << std::endl;
    }
}

/* Subtraction
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_subtraction() {
    int x, y;
    signed int difference;
    char confirmation;
    std::cout << "Subtraction takes a number and subtracts another number from it." << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter a number: ";
        std::cin >> x;
        std::cout << "Please enter another number: ";
        std::cin >> y;
        // Confirm the user's desire
        std::cout << "So you want to subtract " << y << " from " << x << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Subtract the first number from the second
        difference = x - y;
        std::cout << x << " minus " << y << " is " << difference << "." << std::endl;
    }
}

/* Multiplication
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_multiplication() {
    int x, y;
    int product;
    char confirmation;
    std::cout << "Multiplication takes two numbers and multiplies them." << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter a number: ";
        std::cin >> x;
        std::cout << "Please enter another number: ";
        std::cin >> y;
        // Confirm the user's desire
        std::cout << "So you want to multiply " << x << " by " << y << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Multiplies the two numbers together
        product = x * y;
        std::cout << x << " times " << y << " is " << product << "." << std::endl;
    }
}

/* Division
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_division() {
    double x, y;
    double quotient;
    char confirmation;
    std::cout << "Division takes a number and divides it by another number." << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter the number you want to divide: ";
        std::cin >> x;
        std::cout << "Please enter the number to divide the previous one by: ";
        std::cin >> y;
        // Confirm the user's desire
        std::cout << "So you want to divide " << x << " by " << y << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Check if the user is trying to divide by 0
        if (y == 0) {
            std::cout << "Fool and knave, you can't divide by 0!" << std::endl;
        } else if (y != 0) {
            // Divides x by y
            quotient = x / y;
            std::cout << x << " divided by " << y << " is " << quotient << "." << std::endl;
        }
    }
}

/* Modulus
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_modulus() {
    int x, y;
    int remainder;
    char confirmation;
    std::cout << "Modulus does division, and then takes the remainder." << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter the number you want to divide: ";
        std::cin >> x;
        std::cout << "Please enter the number to divide the previous one by: ";
        std::cin >> y;
        // Confirm the user's desire
        std::cout << "So you want to divide " << x << " by " << y << "and take the remainder." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Check if the user is trying to divide by 0
        if (y == 0) {
            std::cout << "Fool and knave, you can't divide by 0!" << std::endl;
        } else if (y != 0) {
            // Performs the modulus
            remainder = x % y;
            std::cout << x << " divided by " << y << " gives a remainder of " << remainder << "." << std::endl;
        }
    }
}

/* Trigonometric cosine
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_cosine() {
    const double PI = 3.1415926535898; // π
    int angleTheta_degrees;
    long double cosine;
    char confirmation;
    std::cout << "*sigh* How do I even explain cosine...?" << std::endl;
    do {
        // Ask for angle θ
        std::cout << "What is your angle θ (theta), in degrees? ";
        std::cin >> angleTheta_degrees;
        std::cout << "So you want the cosine of a " << angleTheta_degrees << "° angle." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculate the cosine of angle θ
        long double angleTheta_radians;
        angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
        cosine = cos(angleTheta_radians);
        std::cout << "The cosine of angle θ being " << angleTheta_degrees << "° is " << cosine << "." << std::endl;
    }
}

/* Trigonometric sine
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_sine() {
    const double PI = 3.1415926535898; // π
    int angleTheta_degrees;
    long double sine;
    std::cout << "*sigh* How do I even explain sine...?" << std::endl;
    // Ask for angle θ
    std::cout << "What is your angle θ (theta), in degrees? ";
    std::cin >> angleTheta_degrees;
    // Calculate the sine of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    sine = sin(angleTheta_radians);
    std::cout << "The sine of angle θ being " << angleTheta_degrees << "° is " << sine << "." << std::endl;
}

/* Trigonometric tangent
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::Niji_tangent() {
    const double PI = 3.1415926535898; // π
    int angleTheta_degrees;
    long double tangent;
    std::cout << "*sigh* How do I even explain tangent...?" << std::endl;
    // Ask for angle θ
    std::cout << "What is your angle θ (theta), in degrees? ";
    std::cin >> angleTheta_degrees;
    // Calculate the tangent of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    tangent = tan(angleTheta_radians);
    std::cout << "The tangent of angle θ being " << angleTheta_degrees << "° is " << tangent << "." << std::endl;
}

/* -----------------------------------------------------------------------------
 * Functions that Wamo wrote
 * -----------------------------------------------------------------------------
 */

/* Powers of exponents / x^y
 * Function author: Wamo (Niji System) */
void NijiMath::Niji_exponent() {
    int base, exponent;
    int exponentResult;
    std::cout << "Exponents (powers) raise a number to the nth power" << std::endl;
    // Ask for the numbers
    std::cout << "Please enter the base: ";
    std::cin >> base;
    std::cout << "Please enter the exponent: ";
    std::cin >> exponent;
    // Does the exponent thing
    exponentResult = pow(base,exponent);
    std::cout << base << " raised to the power of " << exponent << " is " << exponentResult << "." << std::endl;
}

/* Square root / √x
 * Function author: Wamo (Niji System) */
void NijiMath::Niji_squareRoot() {
    int square;
    long double squareRoot;
    std::cout << "Square root is the inverse of square (that is, a number raised to the power of 2)" << std::endl;
    // Ask for the square
    std::cout << "Please enter the square that you want the root of: ";
    std::cin >> square;
    // Calculates the square root
    squareRoot = sqrt(square);
    std::cout << "The square root of " << square << " (√" << square << ") is " << squareRoot << "." << std::endl;
}

/* Cube root / ∛x
 * Function author: Wamo (Niji System) */
void NijiMath::Niji_cubeRoot() {
    int cube;
    long double cubeRoot;
    std::cout << "Cube root is the inverse of cube (that is, a number raised to the power of 3)" << std::endl;
    // Ask for the cube
    std::cout << "Please enter the cube that you want the root of: ";
    std::cin >> cube;
    // Calculates the cube root
    cubeRoot = cbrt(cube);
    std::cout << "The cube root of " << cube << " (∛" << cube << ") is " << cubeRoot << "." << std::endl;
}

/* Square / x²
 * Function author: Wamo (Niji System) */
void NijiMath::Niji_square() {
    int base;
    int square;
    std::cout << "Squaring is, at its most basic, multiplying a number by itself, i.e. 2*2. Squaring is often expressed as an exponent, x²." << std::endl;
    // Ask for the number to be squared
    std::cout << "What do you want the square of? ";
    std::cin >> base;
    // Calculates the square
    square = pow(base,2);
    std::cout << "The square of " << base << " (" << base << "²) is " << square << "." << std::endl;
}

/* Cube / x³
 * Function author: Wamo (Niji System) */
void NijiMath::Niji_cube() {
    int base;
    int cube;
    std::cout << "Cubing is, at its most basic, multiplying a number by itself three (3) times, i.e. 2*2*2. Cubing is often expressed as an exponent, x³." << std::endl;
    // Ask for the number to be cubed
    std::cout << "What do you want the cube of? ";
    std::cin >> base;
    // Calculates the cube
    cube = pow(base,3);
    std::cout << "The cube of " << base << " (" << base << "³) is " << cube << "." << std::endl;
}
