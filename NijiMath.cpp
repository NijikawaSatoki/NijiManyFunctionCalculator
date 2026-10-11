/* =============================================================================
 * Niji's Many Function Calculator II - Electric Boogaloo
 * =============================================================================
 * Niji Math class file
 * -----------------------------------------------------------------------------
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

/* -----------------------------------------------------------------------------
 * Basic operations
 * -----------------------------------------------------------------------------
 */

signed int NijiMath::addition(signed int x, signed int y) {
    signed int z = x + y;
    return z;
}

signed int NijiMath::subtraction(signed int x, signed int y) {
    signed int z = x - y;
    return z;
}

int NijiMath::multiplication(int x, int y) {
    int z = x * y;
    return z;
}

double NijiMath::division(double x, double y) {
    double z = 0;
    if (y == 0) {
        cout << "You can't divide by 0!";
        return 0;
    } else {
        z = x / y;
    }
    return z;
}

int NijiMath::modulus(int x, int y) {
    int z = 0;
    if (y == 0) {
        cout << "You can't divide by 0!";
        return 0;
    } else {
        z = x % y;
    }
    return z;
}
