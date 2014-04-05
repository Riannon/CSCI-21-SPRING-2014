#include "Prize.h"
#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Box
{

public:
    /*
     * Default constructor.
     * Initializes boxNumber to 0, boxColor to "NO COLOR", prizeCapacity to 5,
     * prizeCount to 0, and intializes prizes array to match prizeCapacity.
     */
    Box();
    /*
     * Overloaded constructor.
     * Initializes boxNumber to newBoxNumber, boxColor to newBoxColor, and
     * prizeCapacity to newPrizeCapacity.
     * @param newBoxNumber an unsigned integer containing the desired number of new box
     * @param newBoxColor a string containing the desired color for the new box
     * @param newPrizeCapacity an unsigned integer containing the desired capacity of new box
     */
    Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity);
    /*
     * Destructor.
     * Frees the memory associated with items.
     */
    ~Box();
    /*
     * Set the box's number.
     * @param newBoxNumber an unsigned integer containing the desired number of new box
     */
    void setBoxNumber(unsigned int newBoxNumber);
    /*
     * Set the box's color.
     * @param newBoxColor a string containing the desired color of the new box
     */
    void setBoxColor(string newBoxColor);
     /*
     * Get the box number.
     * @return boxNumber an unsigned integer containing the number of the box
     */
    unsigned int getBoxNumber();
    /*
     * Get the box color.
     * @return boxColor a string containing the color of the box
     */
    string getBoxColor();
    /*
     * Get the prize capacity.
     * @return prizeCapacity an unsigned integer containing the prize capacity
     */
    unsigned int getPrizeCapacity();
    /*
     * Get the prize count.
     * @return prizeCount an unsigned integer containing the current prize count
     */
    unsigned int getPrizeCount();
    /*
     * Add a prize in the array (if there is space available).
     * @param prize  --------------------------------
     * @return true if the prize can be added, otherwise return false
     */
    bool addPrize(Prize prize);
    /*
     * Retrieve a reference to the prize at a specified index in the array.
     * @param index an unsigned integer containing the zero-based index
     *        of the prize to be retrieved
     * @return if index is valid, a reference to Prize at the specified index,
     *        else return scratch
     */
    Prize& getPrize(unsigned int index);
    /*
     * Remove the item at a specified index in the array. Decrement item count a "pack"
     * the array so that all valid items are contiguous in the array.
     * @param index an unsigned integer containing the zero-based index
     *        of the item to be removed
     * @return Prize if index is valid, else return scratch
     */
    Prize removePrize(unsigned int index);

private:

    unsigned int boxNumber;
    string boxColor;
    Prize scratch;
    Prize* prizes;
    unsigned int prizeCapacity;
    unsigned int prizeCount;
};
