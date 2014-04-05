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




