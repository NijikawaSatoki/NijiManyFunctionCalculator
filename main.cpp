/* =============================================================================
 * Niji's Many Function Calculator II - Electric Boogaloo
 * =============================================================================
 * 
 *  Author: Niji System
 *              Satoki Nijikawa
 *              Wamo
 *              Kiyoi
 *              Vihreääketty
 *              Hsiao Lyuhsien
 *              Antiainehunt Õudus
 *              Rinith
 *              Q'aemil
 *              SAW-01-2548 "Mlikam Klichesh"
 * 
 */

/* #############################################################################
 * Preprocessor stuffs
 * #############################################################################
 */

 // C++ built-in header(s)
#include <iostream>

// Custom header(s)
#include "NijiMath.h"

// Namespaces
using namespace std;

/* #############################################################################
 * Main code
 * #############################################################################
 */

int main() {
    // Object initialization
    NijiMath nijimath;
    // Print the title to the screen
    char title[] = "Niji's Many Function Calculator\nBy: Satoki Nijikawa";
    cout << title << endl;
    char willYouContinue = ' ';
    do {
        // Show the user the choices that are available
        cout << "Choices:" << endl;
        cout << "0. Addition\t1. Subtraction\t2. Multiplication" << endl;
        cout << "3. Division\t4. Modulus" << endl;
        cout << "255. Exits the program" << endl;
        // Ask the user to make a selection
        int selection = 0;
        cout << "Please enter you selection: ";
        cin >> selection;
        // Prepare some variables and constants
        const char NULL_NOT_IMPLEMENTED[] = "This feature is not implemented and therefore does not exist.";
        const char OUT_OF_BOUNDS[] = "You are out of bounds.\nPenalty: Life -1";
        signed int signedIntegerX = 0;
        signed int signedIntegerY = 0;
        int integerX = 0;
        int integerY = 0;
        double floatX = 0.00;
        double floatY = 0.00;
        signed int signedIntegerAnswer = 0;
        int integerAnswer = 0;
        double floatAnswer = 0.00;
        // Execute based on user selection
        switch (selection) {
        case 0: // Addition
            // Inform the user of the choice that they made
            cout << "You chose: addition!" << endl;
            // Input for 'x'
            cout << "Please enter a number: ";
            cin >> signedIntegerX;
            // Input for 'y'
            cout << "Please enter another number: ";
            cin >> signedIntegerY;
            // Calculate the result
            signedIntegerAnswer = nijimath.addition(signedIntegerX, signedIntegerY);
            printf("%d + %d = %d\n", signedIntegerX, signedIntegerY, signedIntegerAnswer);
            break;
        case 1: // Subtraction
            // Inform the user of the choice that they made
            cout << "You chose: subtraction!" << endl;
            // Input for 'x'
            cout << "Please enter a number: ";
            cin >> signedIntegerX;
            // Input for 'y'
            cout << "Please enter another number: ";
            cin >> signedIntegerY;
            // Calculate the result
            signedIntegerAnswer = nijimath.subtraction(signedIntegerX, signedIntegerY);
            printf("%d - %d = %d\n", signedIntegerX, signedIntegerY, signedIntegerAnswer);
            break;
        case 2: // Multiplication
            // Inform the user of the choice that they made
            cout << "You chose: multiplication!" << endl;
            // Input for 'x'
            cout << "Please enter a number: ";
            cin >> integerX;
            // Input for 'y'
            cout << "Please enter another number: ";
            cin >> integerY;
            // Calculate the result
            integerAnswer = nijimath.multiplication(integerX, integerY);
            printf("%d × %d = %d\n", integerX, integerY, integerAnswer);
            break;
        case 3: // Division
            // Inform the user of the choice that they made
            cout << "You chose: division!" << endl;
            // Input for 'x'
            cout << "Please enter a number: ";
            cin >> floatX;
            // Input for 'y'
            cout << "Please enter another number: ";
            cin >> floatY;
            // Calculate the result
            floatAnswer = nijimath.division(floatX, floatY);
            printf("%f ÷ %f = %f\n", floatX, floatY, floatAnswer);
            break;
        case 4: // Modulus
            // Inform the user of the choice that they made
            cout << "You chose: modulus!" << endl;
            // Input for 'x'
            cout << "Please enter a number: ";
            cin >> integerX;
            // Input for 'y'
            cout << "Please enter another number: ";
            cin >> integerY;
            // Calculate the result
            integerAnswer = nijimath.modulus(integerX, integerY);
            printf("%d mod %d = %d\n", integerX, integerY, integerAnswer);
            break;
        case 5:
            cout << NULL_NOT_IMPLEMENTED << endl;
            break;
        case 6:
            cout << NULL_NOT_IMPLEMENTED << endl;
            break;
        case 7:
            cout << NULL_NOT_IMPLEMENTED << endl;
            break;
        case 255: // Exits the program
            goto EXIT_MAIN_LOOP;
        default:
            cout << OUT_OF_BOUNDS << endl;
        }
        EXIT_MAIN_LOOP:
        if (selection == 255) {
            break;
        } else {
            cout << "Continue?: ";
            cin >> willYouContinue;
        }
    } while (willYouContinue == 'Y' || willYouContinue == 'y');
    // Send the user on their way
    cout << "Have a nice day." << endl;
    return 0;
}
