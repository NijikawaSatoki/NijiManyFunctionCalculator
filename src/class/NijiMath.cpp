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
#include "../header/NijiMath.h"

// Establishes usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * Functions that Satoki wrote
 * -----------------------------------------------------------------------------
 */

/* Addition
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::nijiAddition() {
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
void NijiMath::nijiSubtraction() {
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
void NijiMath::nijiMultiplication() {
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
void NijiMath::nijiDivision() {
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
void NijiMath::nijiModulus() {
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
void NijiMath::nijiCosine() {
    const double PI = 3.1415926535898; // π
    int angleThetaInDegrees;
    long double cosine;
    char confirmation;
    std::cout << "*sigh* How do I even explain cosine...?" << std::endl;
    do {
        // Ask for angle θ
        std::cout << "What is your angle θ (theta), in degrees? ";
        std::cin >> angleThetaInDegrees;
        std::cout << "So you want the cosine of a " << angleThetaInDegrees << "° angle." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculate the cosine of angle θ
        long double angleThetaInRadians;
        angleThetaInRadians = angleThetaInDegrees * PI / 180.0; // Converts degrees to radians
        cosine = cos(angleThetaInRadians);
        std::cout << "The cosine of a " << angleThetaInDegrees << "° (" << angleThetaInRadians << " rad) angle is " << cosine << "." << std::endl;
    }
}

/* Trigonometric sine
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::nijiSine() {
    // Constants
    const long double PI = 3.1415926535898;                             // π
    const int SINE_OF_0_RADIANS = 0;                                    // sin 0 rad
    const long double SINE_OF_PI_OVER_36_RADIANS = 0.08715574274765817; // sin π/36 rad
    const long double SINE_OF_PI_OVER_12_RADIANS = 0.25881904510252074; // sin π/12 rad
    const long double SINE_OF_PI_OVER_8_RADIANS = 0.3826834323650898;   // sin π/8 rad
    const long double SINE_OF_PI_OVER_6_RADIANS = 0.5;                  // sin π/6 rad
    const long double SINE_OF_PI_OVER_5_RADIANS = 0.5877852522924731;   // sin π/5 rad
    const long double SINE_OF_PI_OVER_4_RADIANS = 0.7071067811865476;   // sin π/4 rad
    const long double SINE_OF_1_RADIAN = 0.8414709848078965;            // sin 1 rad
    const long double SINE_OF_PI_OVER_3_RADIANS = 0.8660254037844386;   // sin π/3 rad
    const long double SINE_OF_2_PI_OVER_5_RADIANS = 0.9510565162951535; // sin 2π/5 rad
    const int SINE_OF_PI_OVER_2_RADIANS = 1;                            // sin π/2 rad
    const long double SINE_OF_2_PI_OVER_3_RADIANS = 0.8660254037844387; // sin 2π/3 rad
    const long double SINE_OF_4_PI_OVER_5_RADIANS = 0.5877852522924732; // sin 4π/5 rad
    const int SINE_OF_PI_RADIANS = 0;                                   // sin π rad
    const signed int SINE_OF_3_PI_OVER_2_RADIANS = -1;                  // sin 3π/2 rad
    const int SINE_OF_2_PI_RADIANS = 0;                                 // sin 2π rad
    // Variables
    int angleThetaInDegrees;
    long double sine;
    char confirmation;
    std::cout << "*sigh* How do I even explain sine...?" << std::endl;
    do {
        // Ask for angle θ
        std::cout << "What is your angle θ (theta), in degrees? ";
        std::cin >> angleThetaInDegrees;
        std::cout << "So you want the sine of a " << angleThetaInDegrees << "° angle." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Check against predefined sine values
        switch(angleThetaInDegrees) {
            case 0:
                std::cout << "The sine of a 0° (0 rad) angle is " << SINE_OF_0_RADIANS << "." << std::endl;
                break;
            case 5:
                std::cout << "The sine of a 5° (π/36 rad) angle is " << SINE_OF_PI_OVER_36_RADIANS << "." << std::endl;
                break;
            case 15:
                std::cout << "The sine of a 15° (π/12 rad) angle is " << SINE_OF_PI_OVER_12_RADIANS << "." << std::endl;
                break;
            case 22:
                std::cout << "The sine of a 22.5° (π/8 rad) angle is " << SINE_OF_PI_OVER_8_RADIANS << "." << std::endl;
                break;
            case 30:
                std::cout << "The sine of a 30° (π/6 rad) angle is " << SINE_OF_PI_OVER_6_RADIANS << "." << std::endl;
                break;
            case 36:
                std::cout << "The sine of a 36° (π/5 rad) angle is " << SINE_OF_PI_OVER_5_RADIANS << "." << std::endl;
                break;
            case 45:
                std::cout << "The sine of a 45° (π/4 rad) angle is " << SINE_OF_PI_OVER_4_RADIANS << "." << std::endl;
                break;
            case 57:
                std::cout << "The sine of a ≈57.2958° (1 rad) angle is " << SINE_OF_1_RADIAN << "." << std::endl;
                break;
            case 60:
                std::cout << "The sine of a 60° (π/3 rad) angle is " << SINE_OF_PI_OVER_3_RADIANS << "." << std::endl;
                break;
            case 72:
                std::cout << "The sine of a 72° (2π/5 rad) angle is " << SINE_OF_2_PI_OVER_5_RADIANS << "." << std::endl;
                break;
            case 90:
                std::cout << "The sine of a 90° (π/2 rad) angle is " << SINE_OF_PI_OVER_2_RADIANS << "." << std::endl;
                break;
            case 120:
                std::cout << "The sine of a 120° (2π/3 rad) angle is " << SINE_OF_2_PI_OVER_3_RADIANS << "." << std::endl;
                break;
            case 144:
                std::cout << "The sine of a 144° (4π/5 rad) angle is " << SINE_OF_4_PI_OVER_5_RADIANS << "." << std::endl;
                break;
            case 180:
                std::cout << "The sine of a 180° (π rad) angle is " << SINE_OF_PI_RADIANS << "." << std::endl;
                break;
            case 270:
                std::cout << "The sine of a 270° (3π/2 rad) angle is " << SINE_OF_3_PI_OVER_2_RADIANS << "." << std::endl;
                break;
            case 360:
                std::cout << "The sine of a 360° (2π rad) angle is " << SINE_OF_2_PI_RADIANS << "." << std::endl;
                break;
            default:
                // Calculate the sine of angle θ
                long double angleThetaInRadians;
                angleThetaInRadians = angleThetaInDegrees * PI / 180.0; // Converts degrees to radians
                sine = sin(angleThetaInRadians);
                std::cout << "The sine of a " << angleThetaInDegrees << "° (" << angleThetaInRadians << " rad) angle is " << sine << "." << std::endl;
                break;
            // END OF SWITCH
        }
    }
}

/* Trigonometric tangent
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMath::nijiTangent() {
    const double PI = 3.1415926535898; // π
    int angleThetaInDegrees;
    long double tangent;
    char confirmation;
    std::cout << "*sigh* How do I even explain tangent...?" << std::endl;
    do {
        // Ask for angle θ
        std::cout << "What is your angle θ (theta), in degrees? ";
        std::cin >> angleThetaInDegrees;
        std::cout << "So you want the tangent of a " << angleThetaInDegrees << "° angle." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculate the tangent of angle θ
        long double angleThetaInRadians;
        angleThetaInRadians = angleThetaInDegrees * PI / 180.0; // Converts degrees to radians
        tangent = tan(angleThetaInRadians);
        std::cout << "The tangent of a " << angleThetaInDegrees << "° (" << angleThetaInRadians << " rad) angle is " << tangent << "." << std::endl;
    }
}

/* -----------------------------------------------------------------------------
 * Functions that Wamo wrote
 * -----------------------------------------------------------------------------
 */

/* Powers of exponents / x^y
 * Function author: Wamo (Niji System) */
void NijiMath::nijiExponent() {
    int base, exponent;
    int exponentResult;
    char confirmation;
    std::cout << "Exponents (powers) raise a number to the nth power" << std::endl;
    do {
        // Ask for the numbers
        std::cout << "Please enter the base: ";
        std::cin >> base;
        std::cout << "Please enter the exponent: ";
        std::cin >> exponent;
        std::cout << "So you want the answer to " << base << " raised to the power of " << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Does the exponent thing
        exponentResult = pow(base,exponent);
        std::cout << base << " raised to the power of " << exponent << " is " << exponentResult << "." << std::endl;
    }
}

/* Square root / √x
 * Function author: Wamo (Niji System) */
void NijiMath::nijiSquareRoot() {
    int square;
    long double squareRoot;
    char confirmation;
    std::cout << "Square root is the inverse of square (that is, a number raised to the power of 2)" << std::endl;
    do {
        // Ask for the square
        std::cout << "Please enter the square that you want the root of: ";
        std::cin >> square;
        std::cout << "So you want the square root of √" << square << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculates the square root
        squareRoot = sqrt(square);
        std::cout << "The square root of " << square << " (√" << square << ") is " << squareRoot << "." << std::endl;
    }
}

/* Cube root / ∛x
 * Function author: Wamo (Niji System) */
void NijiMath::nijiCubeRoot() {
    int cube;
    long double cubeRoot;
    char confirmation;
    std::cout << "Cube root is the inverse of cube (that is, a number raised to the power of 3)" << std::endl;
    do {
        // Ask for the cube
        std::cout << "Please enter the cube that you want the root of: ";
        std::cin >> cube;
        std::cout << "So you want the cube root of ∛" << cube << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculates the cube root
        cubeRoot = cbrt(cube);
        std::cout << "The cube root of " << cube << " (∛" << cube << ") is " << cubeRoot << "." << std::endl;
    }
}

/* Square / x²
 * Function author: Wamo (Niji System) */
void NijiMath::nijiSquare() {
    int base;
    int square;
    char confirmation;
    std::cout << "Squaring is, at its most basic, multiplying a number by itself, i.e. 2*2. Squaring is often expressed as an exponent, x²." << std::endl;
    do {
        // Ask for the number to be squared
        std::cout << "What do you want the square of? ";
        std::cin >> base;
        std::cout << "So you want the square of " << base << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculates the square
        square = pow(base,2);
        std::cout << "The square of " << base << " (" << base << "²) is " << square << "." << std::endl;
    }
}

/* Cube / x³
 * Function author: Wamo (Niji System) */
void NijiMath::nijiCube() {
    int base;
    int cube;
    char confirmation;
    std::cout << "Cubing is, at its most basic, multiplying a number by itself three (3) times, i.e. 2*2*2. Cubing is often expressed as an exponent, x³." << std::endl;
    do {
        // Ask for the number to be cubed
        std::cout << "What do you want the cube of? ";
        std::cin >> base;
        std::cout << "So you want the cube of " << base << "." << std::endl;
        std::cout << "Is this correct? [Y/n] ";
        std::cin >> confirmation;
    } while (confirmation == 'N' || confirmation == 'n');
    if (confirmation == 'Y' || confirmation == 'y') { // <-- Checks if the user inputted 'Y' or 'y'
        // Calculates the cube
        cube = pow(base,3);
        std::cout << "The cube of " << base << " (" << base << "³) is " << cube << "." << std::endl;
    }
}
