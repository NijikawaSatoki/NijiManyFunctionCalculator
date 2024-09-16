/* =============================================================================
 * main.cpp
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa / 虹川郷鬼
 *                       Wamo            / ワーモ
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

// Header libraries
#include <iostream>
#include <limits>
#include <string>
#include <cmath>

// User defined headers

// Establishes usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * User defined classes
 * -----------------------------------------------------------------------------
 */

/* -----------------------------------------------------------------------------
 * User defined functions
 * -----------------------------------------------------------------------------
 */

/* Addition
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_addition() {
    int x, y;
    int sum;
    std::cout << "Addition takes two numbers and adds them together." << std::endl;
    // Ask for the numbers
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "Please enter another number: ";
    std::cin >> y;
    // Add the numbers together
    sum = x + y;
    std::cout << x << " plus " << y << " is " << sum << "." << std::endl;
}

/* Subtraction
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_subtraction() {
    int x, y;
    signed int difference;
    std::cout << "Subtraction takes a number and subtracts another number from it." << std::endl;
    // Ask for the numbers
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "Please enter another number: ";
    std::cin >> y;
    // Subtract the first number from the second
    difference = x - y;
    std::cout << x << " minus " << y << " is " << difference << "." << std::endl;
}

/* Multiplication
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_multiplication() {
    int x, y;
    int product;
    std::cout << "Multiplication takes two numbers and multiplies them." << std::endl;
    // Ask for the numbers
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "Please enter another number: ";
    std::cin >> y;
    // Multiplies the two numbers together
    product = x * y;
    std::cout << x << " times " << y << " is " << product << "." << std::endl;
}

/* Division
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_division() {
    double x, y;
    double quotient;
    std::cout << "Division takes a number and divides it by another number." << std::endl;
    // Ask for the numbers
    std::cout << "Please enter the number you want to divide: ";
    std::cin >> x;
    std::cout << "Please enter the number to divide the previous one by: ";
    std::cin >> y;
    // Check if the user is trying to divide by 0
    if (y == 0) {
        std::cout << "Fool and knave, you can't divide by 0!" << std::endl;
    } else if (y != 0) {
        // Divides x by y
        quotient = x / y;
        std::cout << x << " divided by " << y << " is " << quotient << "." << std::endl;
    }
}

/* Modulus
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_modulus() {
    int x, y;
    int remainder;
    std::cout << "Modulus does division, and then takes the remainder." << std::endl;
    // Ask for the numbers
    std::cout << "Please enter the number you want to divide: ";
    std::cin >> x;
    std::cout << "Please enter the number to divide the previous one by: ";
    std::cin >> y;
    // Check if the user is trying to divide by 0
    if (y == 0) {
        std::cout << "Fool and knave, you can't divide by 0!" << std::endl;
    } else if (y != 0) {
        // Performs the modulus
        remainder = x % y;
        std::cout << x << " divided by " << y << " gives a remainder of " << remainder << "." << std::endl;
    }
}

/* Powers of exponents / x^y
 * Function author: Wamo (Niji System) */
void Niji_exponent() {
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

/* Trigonometric cosine
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_cosine() {
    const double PI = 3.1415926535898;
    int angleTheta_degrees;
    long double cosine;
    std::cout << "*sigh* How do I even explain cosine...?" << std::endl;
    // Ask for angle θ
    std::cout << "What is your angle θ (theta), in degrees? ";
    std::cin >> angleTheta_degrees;
    // Calculate the cosine of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    cosine = cos(angleTheta_radians);
    std::cout << "The cosine of angle θ being " << angleTheta_degrees << "° is " << cosine << "." << std::endl;
}

/* Trigonometric sine
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_sine() {
    const double PI = 3.1415926535898;
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
void Niji_tangent() {
    const double PI = 3.1415926535898;
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

/* Square root / √x
 * Function author: Wamo (Niji System) */
void Niji_squareRoot() {
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
void Niji_cubeRoot() {
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
void Niji_square() {
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
void Niji_cube() {
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

/* -----------------------------------------------------------------------------
 * Main code
 * -----------------------------------------------------------------------------
 */

int main() {
    std::cout << "\t\t" << "\"Niji's Many Function Calculator\"" << std::endl; // Title line
    std::cout << "\t" << "Made by Satoki Nijikawa and Wamo, of Niji System" << "\n\n"; // Author
    char response; // T_T
    do {
        std::string operation = "";
        // Ask the user what operation they wish to perform
        std::cout << "Please state the operation you wish to perform." << std::endl;
        // Currently implemented maths
        std::cout << "Currently implemented:" << std::endl;
        std::cout << "addition" << "\t" << "subtraction" << "\t" << "multiplication" << "\t" << "division" << "\t" << "modulus" << std::endl;
        std::cout << "exponent" << "\t" << "cosine" << "\t\t" << "sine" << "\t\t" << "tangent" << "\t\t" << "square-root" << std::endl;
        std::cout << "cube-root" << "\t" << "square" << "\t\t" << "cube" << std::endl;
        std::cout << "'exit' closes the program." << std::endl;
        // User inputs what they want
        std::cout << "Which will it be? (Please enter your selection entirely in lowercase): ";
        getline(std::cin, operation);
        /* Checks against user input and executes desired operation (or lack of).
         * This is about to get messy D: */
        if (operation == "addition" || operation == "Addition" || operation == "ADDITION") {
            // Addition
            Niji_addition();
        } else if (operation == "subtraction" || operation == "Subtraction" || operation == "SUBTRACTION") {
            // Subtraction
            Niji_subtraction();
        } else if (operation == "multiplication" || operation == "Multiplication" || operation == "MULTIPLICATION") {
            // Multiplication
            Niji_multiplication();
        } else if (operation == "division" || operation == "Division" || operation == "DIVISION") {
            // Division
            Niji_division();
        } else if (operation == "modulus" || operation == "Modulus" || operation == "MODULUS") {
            // Modulus
            Niji_modulus();
        } else if (operation == "exponent" || operation == "Exponent" || operation == "EXPONENT") {
            // Powers of exponents
            Niji_exponent();
        } else if (operation == "cosine" || operation == "Cosine" || operation == "COSINE") {
            // Trigonometric cosine
            Niji_cosine();
        } else if (operation == "sine" || operation == "Sine" || operation == "SINE") {
            // Trigonometric sine
            Niji_sine();
        } else if (operation == "tangent" || operation == "Tangent" || operation == "TANGENT") {
            // Trigonometric tangent
            Niji_tangent();
        } else if (operation == "square-root" || operation == "Square-root" || operation == "square-Root" || operation == "SQUARE-root" || operation == "square-ROOT" || operation == "SQUARE-ROOT" || operation == "squareroot" || operation == "Squareroot" || operation == "SQUAREROOT") {
            // Square root
            Niji_squareRoot();
        } else if (operation == "cube-root" || operation == "Cube-root" || operation == "cube-Root" || operation == "CUBE-root" || operation == "cube-ROOT" || operation == "CUBE-ROOT" || operation == "cuberoot" || operation == "Cuberoot" || operation == "CUBEROOT") {
            // Cube root
            Niji_cubeRoot();
        } else if (operation == "square" || operation == "Square" || operation == "SQUARE") {
            // Square
            Niji_square();
        } else if (operation == "cube" || operation == "Cube" || operation == "CUBE") {
            // Cube
            Niji_cube();
        } else if (operation == "exit" || operation == "Exit" || operation == "EXIT") {
            std::cout << "Oh." << std::endl;
            return 0;
        } else if (operation == "") {
            // No input (user hits RETURN)
            std::cout << "You didn't say what operation you wanted. Like, you do know that I'm *not* a mind reader, right?" << std::endl;
        } else {
            // User inputted nonsense
            std::cout << "Not a valid operation!!" << std::endl;
        }
        std::cout << "Would you like to perform another operation? [Y/n] ";
        std::cin >> response;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clears out the input stream
    } while (response == 'Y' || response == 'y');
    std::cout << "Have a nice day.";
    std::cout << std::endl;
    return 0;
}
