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
#include "header/NijiMath.h"
#include "header/NijiMisc.h"

// Establishes usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * Main code
 * -----------------------------------------------------------------------------
 */

int main() {
    // Establish some variables
    char response; // T_T
    std::string singleTab = "\t";
    std::string doubleTab = "\t\t";
    std::string blankLine = "\n\n";
    // Main stuff
    std::cout << doubleTab << "\"Niji's Many Function Calculator\"" << std::endl; // Title line
    std::cout << singleTab << "Made by Satoki Nijikawa and Wamo, of Niji System" << blankLine; // Author
    do {
        // Variables
        std::string operation = "";
        // 1D arrays
        std::string opList[] = {
            "addition", "subtraction", "multiplication", "division",
            "modulus",  "exponent",    "cosine",         "sine",
            "tangent",  "squareroot",  "cuberoot",       "square",
            "cube",     "fourthroot"
        };
        // Initialise the objects
        // >> NijiMath <<
        NijiMath calculator;
        // >> NijiMisc <<
        NijiMisc miscellaneous;
        // Ask the user what operation they wish to perform
        std::cout << "Please state the operation you wish to perform." << std::endl;
        // Currently implemented maths
        std::cout << "Currently implemented:" << std::endl;
        std::cout << opList[0] << singleTab << opList[1] << singleTab << opList[2] << singleTab << opList[3] << std::endl;
        std::cout << opList[4] << doubleTab << opList[5] << singleTab << opList[6] << doubleTab << opList[7] << std::endl;
        std::cout << opList[8] << doubleTab << opList[9] << singleTab << opList[10] << singleTab << opList[11] << std::endl;
        std::cout << opList[12] << doubleTab << opList[13] << std::endl;
        std::cout << "`credits' shows all contributors and closes the program." << std::endl;
        std::cout << "`exit' closes the program." << std::endl;
        // User inputs what they want
        std::cout << "Which will it be? (Please enter your selection entirely in lowercase): ";
        getline(std::cin, operation);
        /* Checks against user input and executes desired operation (or lack of).
         * This is about to get messy D: */
        if (operation == "addition" || operation == "Addition" || operation == "ADDITION") {
            // Addition
            calculator.addition();
        } else if (operation == "subtraction" || operation == "Subtraction" || operation == "SUBTRACTION") {
            // Subtraction
            calculator.subtraction();
        } else if (operation == "multiplication" || operation == "Multiplication" || operation == "MULTIPLICATION") {
            // Multiplication
            calculator.multiplication();
        } else if (operation == "division" || operation == "Division" || operation == "DIVISION") {
            // Division
            calculator.division();
        } else if (operation == "modulus" || operation == "Modulus" || operation == "MODULUS") {
            // Modulus
            calculator.modulus();
        } else if (operation == "exponent" || operation == "Exponent" || operation == "EXPONENT") {
            // Powers of exponents
            calculator.exponent();
        } else if (operation == "cosine" || operation == "Cosine" || operation == "COSINE") {
            // Trigonometric cosine
            calculator.cosine();
        } else if (operation == "sine" || operation == "Sine" || operation == "SINE") {
            // Trigonometric sine
            calculator.sine();
        } else if (operation == "tangent" || operation == "Tangent" || operation == "TANGENT") {
            // Trigonometric tangent
            calculator.tangent();
        } else if (operation == "squareroot" || operation == "Squareroot" || operation == "SQUAREROOT") {
            // Square root
            calculator.squareRoot();
        } else if (operation == "cuberoot" || operation == "Cuberoot" || operation == "CUBEROOT") {
            // Cube root
            calculator.cubeRoot();
        } else if (operation == "square" || operation == "Square" || operation == "SQUARE") {
            // Square
            calculator.square();
        } else if (operation == "cube" || operation == "Cube" || operation == "CUBE") {
            // Cube
            calculator.cube();
        } else if (operation == "fourthroot" || operation == "Fourthroot" || operation == "FOURTHROOT") {
            // Fourth root
            calculator.fourthRoot();
        } else if (operation == "credits" || operation == "Credits" || operation == "CREDITS") {
            // Credits & Contributors
            miscellaneous.credits();
            break;
        } else if (operation == "exit" || operation == "Exit" || operation == "EXIT") {
            // Exiting
            miscellaneous.exit();
            break;
        } else if (operation == "") {
            // No input (user hits RETURN)
            miscellaneous.emptyInput();
        } else {
            // User inputted nonsense
            miscellaneous.unknownInput();
        }
        std::cout << "Would you like to perform another operation? [Y/n] ";
        std::cin >> response;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clears out the input stream
    } while (response == 'Y' || response == 'y');
    std::cout << "Have a nice day.";
    std::cout << std::endl;
    return 0;
}
