/* =============================================================================
 * main.cpp
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa
 *                       Wamo
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
using namespace std;

/* -----------------------------------------------------------------------------
 * User defined functions
 * -----------------------------------------------------------------------------
 */

/* Addition
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_addition() {
    int x, y;
    int sum;
    cout << "Addition takes two numbers and adds them together." << endl;
    // Ask for the numbers
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter another number: ";
    cin >> y;
    // Add the numbers together
    sum = x + y;
    cout << x << " plus " << y << " is " << sum << "." << endl;
}

/* Subtraction
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_subtraction() {
    int x, y;
    signed int difference;
    cout << "Subtraction takes a number and subtracts another number from it." << endl;
    // Ask for the numbers
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter another number: ";
    cin >> y;
    // Subtract the first number from the second
    difference = x - y;
    cout << x << " minus " << y << " is " << difference << "." << endl;
}

/* Multiplication
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_multiplication() {
    int x, y;
    int product;
    cout << "Multiplication takes two numbers and multiplies them." << endl;
    // Ask for the numbers
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter another number: ";
    cin >> y;
    // Multiplies the two numbers together
    product = x * y;
    cout << x << " times " << y << " is " << product << "." << endl;
}

/* Division
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_division() {
    double x, y;
    double quotient;
    cout << "Division takes a number and divides it by another number." << endl;
    // Ask for the numbers
    cout << "Please enter the number you want to divide: ";
    cin >> x;
    cout << "Please enter the number to divide the previous one by: ";
    cin >> y;
    // Check if the user is trying to divide by 0
    if (y == 0) {
        cout << "Fool and knave, you can't divide by 0!" << endl;
    } else if (y != 0) {
        // Divides x by y
        quotient = x / y;
        cout << x << " divided by " << y << " is " << quotient << "." << endl;
    }
}

/* Modulus
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_modulus() {
    int x, y;
    int remainder;
    cout << "Modulus does division, and then takes the remainder." << endl;
    // Ask for the numbers
    cout << "Please enter the number you want to divide: ";
    cin >> x;
    cout << "Please enter the number to divide the previous one by: ";
    cin >> y;
    // Check if the user is trying to divide by 0
    if (y == 0) {
        cout << "Fool and knave, you can't divide by 0!" << endl;
    } else if (y != 0) {
        // Performs the modulus
        remainder = x % y;
        cout << x << " divided by " << y << " gives a remainder of " << remainder << "." << endl;
    }
}

/* Powers of exponents / x^y
 * Function author: Wamo (Niji System) */
void Niji_exponent() {
    int base, exponent;
    int exponentResult;
    cout << "Exponents (powers) raise a number to the nth power" << endl;
    // Ask for the numbers
    cout << "Please enter the base: ";
    cin >> base;
    cout << "Please enter the exponent: ";
    cin >> exponent;
    // Does the exponent thing
    exponentResult = pow(base,exponent);
    cout << base << " raised to the power of " << exponent << " is " << exponentResult << "." << endl;
}

/* Trigonometric cosine
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_cosine() {
    const double PI = 3.1415926535898;
    int angleTheta_degrees;
    long double cosine;
    cout << "*sigh* How do I even explain cosine...?" << endl;
    // Ask for angle θ
    cout << "What is your angle θ (theta), in degrees? ";
    cin >> angleTheta_degrees;
    // Calculate the cosine of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    cosine = cos(angleTheta_radians);
    cout << "The cosine of angle θ being " << angleTheta_degrees << "° is " << cosine << "." << endl;
}

/* Trigonometric sine
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_sine() {
    const double PI = 3.1415926535898;
    int angleTheta_degrees;
    long double sine;
    cout << "*sigh* How do I even explain sine...?" << endl;
    // Ask for angle θ
    cout << "What is your angle θ (theta), in degrees? ";
    cin >> angleTheta_degrees;
    // Calculate the sine of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    sine = sin(angleTheta_radians);
    cout << "The sine of angle θ being " << angleTheta_degrees << "° is " << sine << "." << endl;
}

/* Trigonometric tangent
 * Function author: Satoki Nijikawa (Niji System) */
void Niji_tangent() {
    const double PI = 3.1415926535898;
    int angleTheta_degrees;
    long double tangent;
    cout << "*sigh* How do I even explain tangent...?" << endl;
    // Ask for angle θ
    cout << "What is your angle θ (theta), in degrees? ";
    cin >> angleTheta_degrees;
    // Calculate the tangent of angle θ
    long double angleTheta_radians;
    angleTheta_radians = angleTheta_degrees * PI / 180.0; // Converts degrees to radians
    tangent = tan(angleTheta_radians);
    cout << "The tangent of angle θ being " << angleTheta_degrees << "° is " << tangent << "." << endl;
}

/* Square root / √x
 * Function author: Wamo (Niji System) */
void Niji_squareRoot() {
    int square;
    long double squareRoot;
    cout << "Square root is the inverse of square (that is, a number raised to the power of 2)" << endl;
    // Ask for the square
    cout << "Please enter the square that you want the root of: ";
    cin >> square;
    // Calculates the square root
    squareRoot = sqrt(square);
    cout << "The square root of " << square << " (√" << square << ") is " << squareRoot << "." << endl;
}

/* Cube root / ∛x
 * Function author: Wamo (Niji System) */
void Niji_cubeRoot() {
    int cube;
    long double cubeRoot;
    cout << "Cube root is the inverse of cube (that is, a number raised to the power of 3)" << endl;
    // Ask for the cube
    cout << "Please enter the cube that you want the root of: ";
    cin >> cube;
    // Calculates the cube root
    cubeRoot = cbrt(cube);
    cout << "The cube root of " << cube << " (∛" << cube << ") is " << cubeRoot << "." << endl;
}

/* Square / x²
 * Function author: Wamo (Niji System) */
void Niji_square() {
    int base;
    int square;
    cout << "Squaring is, at its most basic, multiplying a number by itself, i.e. 2*2. Squaring is often expressed as an exponent, x²." << endl;
    // Ask for the number to be squared
    cout << "What do you want the square of? ";
    cin >> base;
    // Calculates the square
    square = pow(base,2);
    cout << "The square of " << base << " (" << base << "²) is " << square << "." << endl;
}

/* Square / x²
 * Function author: Wamo (Niji System) */
void Niji_square() {
    int base;
    int square;
    cout << "Squaring is, at its most basic, multiplying a number by itself, i.e. 2*2. Squaring is often expressed as an exponent, x²." << endl;
    // Ask for the number to be squared
    cout << "What do you want the square of? ";
    cin >> base;
    // Calculates the square
    square = pow(base,2);
    cout << "The square of " << base << " (" << base << "²) is " << square << "." << endl;
}

/* -----------------------------------------------------------------------------
 * Main code
 * -----------------------------------------------------------------------------
 */

int main() {
    cout << "\t\t" << "\"Niji's Many Function Calculator\"" << endl; // Title line
    cout << "\t" << "Made by Satoki Nijikawa and Wamo, of Niji System" << "\n\n"; // Author
    char response; // T_T
    do {
        string operation = "";
        // Ask the user what operation they wish to perform
        cout << "Please state the operation you wish to perform." << endl;
        // Currently implemented maths
        cout << "Currently implemented:" << endl;
        cout << "addition" << "\t" << "subtraction" << "\t" << "multiplication" << "\t" << "division" << "\t" << "modulus" << endl;
        cout << "exponent" << "\t" << "cosine" << "\t\t" << "sine" << "\t\t" << "tangent" << "\t\t" << "square-root" << endl;
        cout << "cube-root" << "\t" << "square" << "\t\t" << "cube" << endl;
        cout << "'exit' closes the program." << endl;
        // User inputs what they want
        cout << "Which will it be? (Please enter your selection entirely in lowercase): ";
        getline(cin, operation);
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
            cout << "Oh." << endl;
            return 0;
        } else if (operation == "") {
            // No input (user hits RETURN)
            cout << "You didn't say what operation you wanted. Like, you do know that I'm *not* a mind reader, right?" << endl;
        } else {
            // User inputted nonsense
            cout << "Not a valid operation!!" << endl;
        }
        cout << "Would you like to perform another operation? [Y/n] ";
        cin >> response;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (response == 'Y' || response == 'y');
    cout << "Have a nice day.";
    cout << endl;
    return 0;
}
