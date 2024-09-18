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
#include "header/niji_math.h"

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
            NijiMath nijiAdd;
            nijiAdd.Niji_addition();
        } else if (operation == "subtraction" || operation == "Subtraction" || operation == "SUBTRACTION") {
            // Subtraction
            NijiMath nijiSubtract;
            nijiSubtract.Niji_subtraction();
        } else if (operation == "multiplication" || operation == "Multiplication" || operation == "MULTIPLICATION") {
            // Multiplication
            NijiMath nijiMultiply;
            nijiMultiply.Niji_multiplication();
        } else if (operation == "division" || operation == "Division" || operation == "DIVISION") {
            // Division
            NijiMath nijiDivide;
            nijiDivide.Niji_division();
        } else if (operation == "modulus" || operation == "Modulus" || operation == "MODULUS") {
            // Modulus
            NijiMath nijiModulo;
            nijiModulo.Niji_modulus();
        } else if (operation == "exponent" || operation == "Exponent" || operation == "EXPONENT") {
            // Powers of exponents
            NijiMath nijiExponent;
            nijiExponent.Niji_exponent();
        } else if (operation == "cosine" || operation == "Cosine" || operation == "COSINE") {
            // Trigonometric cosine
            NijiMath nijiCosine;
            nijiCosine.Niji_cosine();
        } else if (operation == "sine" || operation == "Sine" || operation == "SINE") {
            // Trigonometric sine
            NijiMath nijiSine;
            nijiSine.Niji_sine();
        } else if (operation == "tangent" || operation == "Tangent" || operation == "TANGENT") {
            // Trigonometric tangent
            NijiMath nijiTangent;
            nijiTangent.Niji_tangent();
        } else if (operation == "square-root" || operation == "Square-root" || operation == "square-Root" || operation == "SQUARE-root" || operation == "square-ROOT" || operation == "SQUARE-ROOT" || operation == "squareroot" || operation == "Squareroot" || operation == "SQUAREROOT") {
            // Square root
            NijiMath nijiSquareRoot;
            nijiSquareRoot.Niji_squareRoot();
        } else if (operation == "cube-root" || operation == "Cube-root" || operation == "cube-Root" || operation == "CUBE-root" || operation == "cube-ROOT" || operation == "CUBE-ROOT" || operation == "cuberoot" || operation == "Cuberoot" || operation == "CUBEROOT") {
            // Cube root
            NijiMath nijiCubeRoot;
            nijiCubeRoot.Niji_cubeRoot();
        } else if (operation == "square" || operation == "Square" || operation == "SQUARE") {
            // Square
            NijiMath nijiSquare;
            nijiSquare.Niji_square();
        } else if (operation == "cube" || operation == "Cube" || operation == "CUBE") {
            // Cube
            NijiMath nijiCube;
            nijiCube.Niji_cube();
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
