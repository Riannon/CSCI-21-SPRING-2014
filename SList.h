/*
* Programming Challenge 18
* Eighteenth programming challenge for CSCI 21. Complete the header SList.h
* and complete the implementation SList.cpp to pass the unit tests. Using
* SLNode.cpp and SLNode.h from Programming Challenge 17.
*
* Kevan Johnson
* Date created: 4/08/14
* Last date modified: 4/08/14
*
*/

#include "SLNode.h"

#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;

#ifndef SLIST_H
#define SLIST_H

class SList {

public:
    /*
     * Default constructor.
     * Initializes head to NULL and size to 0
     */
    SList();
    /*
     * Destructor.
     * Calls clear function.
     */
    virtual ~SList();
    /*
     * Create new SLNode and attach as head of list.
     * @param newValue an integer with value of new head
     */
    void insertHead(int newValue);
    /*
     * Remove the head node from the list.
     */
    void removeHead();
    /*
     * Clear the entire contents of the list, freeing all
     * memory associated with all nodes.
     */
    void clear();
    /*
     * Get the size.
     * @return size an integer containing the size of the list
     */
    unsigned int getSize() const;
    /*
     * Returns a string representing all of the contents of
     * all nodes in the list.
     * @return empty string ("") on empty list or list contents separated by a ","
     */
    string toString () const;

private:
    SLNode *head;
    unsigned int size;
};

#endif
