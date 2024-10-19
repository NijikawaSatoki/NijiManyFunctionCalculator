/* =============================================================================
 * CreditsAndContributors.cpp
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa / 虹川郷鬼
 *                       Wamo            / ワーモ
 * 
 * This contains the function for acknowledging contributors.
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
#include "header/CreditsAndContributors.h"

// Establishes usage of `std' namespace
using namespace std;

void CreditsAndContributors::credits() {
    std::string nextLine = "\n";
    std::string singleTab = "\t";
    std::cout << "Niji's Many Function Calculator developed by:" << nextLine << "Satoki Nijikawa" << singleTab << "Wamo" << std::endl;
}
