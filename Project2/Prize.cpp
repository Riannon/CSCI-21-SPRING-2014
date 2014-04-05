/*
 * Programming Project 2
 * Second programming challenge for CSCI 21. Implement the classes Prize & Box and
 * the associated functions, default constructors, the overlaoded constructors,
 * and the destructors as well as the driver. All sections labeled with "CODE HERE" need to be filled in.
 *
 * Kevan Johnson
 * Date created: 4/01/14
 * Last date modified: 4/04/14
 *
 */
#include "Prize.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Prize::Prize()
    : prizeName ("NO NAME"), prizeValue (0) {}

Prize::Prize(string newPrizeName, unsigned int newPrizeValue)
    : prizeName (newPrizeName), prizeValue (newPrizeValue) {}

Prize::~Prize() {}  // Empty


void Prize::setPrizeName(string newPrizeName)
{
    prizeName = newPrizeName;
}


void Prize::setPrizeValue(unsigned int newPrizeValue)
{
    prizeValue = newPrizeValue;
}

string Prize::getPrizeName()
{
    return prizeName;
}

unsigned int Prize::getPrizeValue()
{
    return prizeValue;
}

bool operator==(Prize prizeOne, Prize prizeTwo)
{
    string prizeName1 = prizeOne.prizeName;
    string prizeName2 = prizeTwo.prizeName;
    unsigned int prizeValue1 = prizeOne.prizeValue;
    unsigned int prizeValue2 = prizeTwo.prizeValue;

    if (prizeName1 == prizeName2 && prizeValue1 == prizeValue2)
    {
        return true;
    }
    else
        return false;
}




