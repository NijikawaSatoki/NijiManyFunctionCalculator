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
#include "header/NijiMisc.h"

// Establishes usage of `std' namespace
using namespace std;

void NijiMisc::credits() {
    std::string nextLine = "\n";
    std::string singleTab = "\t";
    std::cout << "Niji's Many Function Calculator developed by:" << nextLine << "Satoki Nijikawa" << singleTab << "Wamo" << std::endl;
}
