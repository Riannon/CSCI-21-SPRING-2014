/*
* Programming Challenge 20
* Twentieth programming challenge for CSCI 21. Complete the header SList.h
* and complete the implementation SList.cpp to pass the unit tests. Using
* SLNode.cpp and SLNode.h from Programming Challenge 17 and updated SList.h
* and SList.cpp from challenges 19 & 18.
*
* Kevan Johnson
* Date created: 4/08/14
* Last date modified: 4/16/14
*
*/

#include "SLNode.h"

#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;

#ifndef SLIST_H
#define SLIST_H

class SList
{

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
     * Create new SLNode and attach as yail of list.
     * @param newValue an integer with value of new tail
     */
    void insertTail(int newValue);
    /*
     * Remove the head node from the list.
     */
    void removeHead();
    /*
    * Remove the tail node from the list.
    */
    void removeTail();
    /*
    * Create new SLNode and insert it in the correct position in
    * the list so values are sorted in ascending order from head
    * node to tail node.
    * @param newValue an integer with value to insert
    */
    void insert(int newValue);
    /*
     * Remove the first appearance of parameter value.
     * @param valueToRemove an integer with desired value to remove
     * @return - returns true on sucess or false if value is not in the list
     */
    bool removeFirst(int valueToRemove);
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
