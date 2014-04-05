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
#include "Box.h"
#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Box::Box()
    : boxNumber (0), boxColor ("NO COLOR"), prizeCapacity (5), prizeCount (0)
{
    prizes = new Prize[prizeCapacity];
}

Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity)
    : boxNumber (newBoxNumber), boxColor (newBoxColor),
    prizeCapacity (newPrizeCapacity), prizeCount (0)
{
    prizes = new Prize[prizeCapacity];
}

Box::~Box()
{
    //if (prizes != NULL)
    delete [] prizes;
}

void Box::setBoxNumber(unsigned int newBoxNumber)
{
    boxNumber = newBoxNumber;
}

void Box::setBoxColor(string newBoxColor)
{
    boxColor = newBoxColor;
}

unsigned int Box::getBoxNumber()
{
    return boxNumber;
}

string Box::getBoxColor()
{
    return boxColor;
}

unsigned int Box::getPrizeCapacity()
{
    return prizeCapacity;
}

unsigned int Box::getPrizeCount()
{
    return prizeCount;
}

bool Box::addPrize(Prize prize)
{
    int size = prizeCapacity;

    if (prizeCount < prizeCapacity)
    {
        for (int i = 0; i < size; i++)
        {
            if (prizes[i] == scratch)
            {
                prizes[prizeCount] = prize;
                prizeCount++;
                return true;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

Prize& Box::getPrize(unsigned int index)
{
    if (index < prizeCapacity)
        return prizes[index];
    else
        return scratch;
}

Prize Box::removePrize(unsigned int index)
{
    if (index < prizeCount)
    {
        Prize prizeToRemove = prizes[index];
        prizes[index] = scratch;
        if (prizes[index] == scratch)
        {
            for (int i = index; i < prizeCount; i++)
            {
                prizes[i-1] = prizes[i];
                prizes[i] = scratch;
            }
            prizeCount--;
            return prizeToRemove;
        }
    }
    else
        return scratch;
}
