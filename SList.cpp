/*
* Programming Challenge 19
* Nineteenth programming challenge for CSCI 21. Complete the header SList.h
* and complete the implementation SList.cpp to pass the unit tests. Using
* SLNode.cpp and SLNode.h from Programming Challenge 17 and updated SList.h
* and SList.cpp from challenge 18.
*
* Kevan Johnson
* Date created: 4/08/14
* Last date modified: 4/13/14
*
*/


#include "SList.h"

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

/*
 * Default constructor.
 * Initializes head to NULL and size to 0
 */
SList::SList() : head (NULL), size (0)
{}

/*
 * Destructor.
 * Calls clear function.
 */
SList::~SList()
{
    clear();
}

/*
 * Create new SLNode and attach as head of list.
 * @param newValue an integer with value of new head
 */
void SList::insertHead(int newValue)
{
    if (size > 0)
    {
        SLNode *tempNode = head;
        head = new SLNode(newValue);
        size++;
        head->setNextNode(tempNode);
    }
    else
    {
        head = new SLNode(newValue);
        size++;
    }
}

/*
 * Create new SLNode and attach as tail of list.
 * @param newValue an integer with value of new tail
 */
void SList::insertTail(int newValue)
{
    if (size > 0)
    {
        SLNode *tempNode = head;
        while (tempNode->getNextNode() != NULL)
        {
            tempNode = tempNode->getNextNode();
        }
        tempNode->setNextNode(new SLNode(newValue));
    }
    else
    {
        head = new SLNode(newValue);
    }
    size++;
}

/*
 * Remove the head node from the list.
 */
void SList::removeHead()
{
    if (size > 0)
    {
        SLNode *tempNode = head->getNextNode();
        head = tempNode;
        size--;
    }
}

/*
 * Remove the tail node from the list.
 */
void SList::removeTail()
{
    if (size > 1)
    {
        SLNode *tempNode = head;
        while ((tempNode->getNextNode())->getNextNode() != NULL)
        {
            tempNode = tempNode->getNextNode();
        }
        tempNode->setNextNode(NULL);
        size--;
    }
    else if (size == 1)
    {
        //delete head;
        size--;
    }
}
/*
 * Clear the entire contents of the list, freeing all
 * memory associated with all nodes.
 */
void SList::clear()
{
    if (size > 1)
    {
        SLNode *tempNode;
        do
        {
            tempNode = head->getNextNode();
            head = tempNode;
        }
        while (head->getNextNode() != NULL);
    }
    if (size >= 1)
    {
        size = 0;
    }
}

/*
 * Get the size.
 * @return size an integer containing the size of the list
 */
unsigned int SList::getSize() const
{
    return size;
}

/*
 * Returns a string representing all of the contents of
 * all nodes in the list.
 * @return empty string ("") on empty list or list contents separated by a ","
 */
string SList::toString () const
{
    if (size > 0)
    {
        stringstream tempString;
        if (head->getNextNode() == NULL)
        {
            tempString << head->getContents();
            return tempString.str();
        }
        SLNode *tempNode = head;
        do
        {
            tempString << tempNode->getContents() << ",";
            tempNode = tempNode->getNextNode();
        }
        while (tempNode->getNextNode() != NULL);
        tempString << tempNode->getContents();
        return tempString.str();
    }
    else
        return "";
}
