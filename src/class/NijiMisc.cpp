/* =============================================================================
 * NijiMisc.cpp
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa / 虹川郷鬼
 *                       Wamo            / ワーモ
 * 
 * This contains miscellaneous functions.
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

// Header libraries
#include <iostream>
#include <string>

// User defined headers
#include "../header/NijiMisc.h"

// Establishes usage of `std' namespace
using namespace std;

/* Credits And Contributors
 * Function author: Satoki Nijikawa (Niji System) */
void NijiMisc::credits() {
    std::string nextLine = "\n";
    std::string doubleTab = "\t\t";
    std::cout << "Niji's Many Function Calculator developed by:" << nextLine << "Satoki Nijikawa" << doubleTab << "Wamo" << std::endl;
}

/* Exit
 * Function author: Wamo (Niji System) */
void NijiMisc::exit() {
    std::cout << "Oh. I see..." << std::endl;
}

/* No input
 * Function author: Wamo (Niji System) */
void NijiMisc::emptyInput() {
    std::cout << "You didn't say what operation you wanted. Like, you do know that I'm *not* a mind reader, right?" << std::endl;
    std::cout << "*sigh*" << std::endl;
    std::cout << "Maybe try saying what input you want next time." << std::endl;
}

/* Nonsensical input
 * Function author: Wamo (Niji System) */
void NijiMisc::unknownInput() {
    std::cout << "That's not a valid operation!!" << std::endl;
    std::cout << "Try again!!" << std::endl;
}
