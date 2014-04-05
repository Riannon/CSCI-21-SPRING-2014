#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Prize
{
public:

    /*
     * Default constructor.
     * Initializes prizeName to "NO NAME" and prizeValue to 0.
     */
    Prize();
    /*
     * Overloaded constructor.
     * Initializes prizeName to newPrizeName and prizeValue to newPrizeValue.
     * @param newPrizeName a string containing the desired new prize's name
     * @param newPrizeValue an unsigned integer containing the desired value of the new prize
     */
    Prize(string newPrizeName, unsigned int newPrizeValue);
    /*
     * Destructor.
     * Frees the memory associated with items.
     */
    ~Prize();
    /*
     * Set the prize's name.
     * @param newPrizeName a string containing the desired new prize's name
     */
    void setPrizeName(string newPrizeName);
    /*
     * Set the prize's value.
     * @param newPrizeValue an unsigned integer containing the desired value of the new prize
     */
    void setPrizeValue(unsigned int newPrizeValue);
    /*
     * Get the prize's name.
     * @return prizeName a string containing the name of the prize
     */
    string getPrizeName();
    /*
     * Get the prize's name.
     * @return prizeValue an unsigned integer containing the value of the prize
     */
    unsigned int getPrizeValue();
    /*
    * Overload of operator ==.
    * Compares two prizes' names and values.
    * @param Prize prizeOne first prize to compare
    * @param Prize prizeTwo second prize to compare
    * @return true if the both prizes have the same name and value, otherwise return false
    */
    friend bool operator==(Prize prizeOne, Prize prizeTwo);

private:

    string prizeName;
    unsigned int prizeValue;
};

