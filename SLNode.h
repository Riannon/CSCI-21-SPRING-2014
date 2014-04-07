/*
 * Programming Challenge 17
 * Seventeenth programming challenge for CSCI 21. Complete the header SLNode.h,
 * and complete the implementation SLNode.cpp to pass the unit tests. 
 *
 * Kevan Johnson
 * Date created: 4/07/14
 * Last date modified: 4/07/14
 *
 */

#include <cstdlib>

using namespace std;

#ifndef SLNODE_H
#define SLNODE_H

class SLNode
{

public:
    /*
     * Default constructor.
     * Initializes nextNode to NULL and contents to 0
     */
    SLNode();
    /*
     * Overloaded constructor.
     * Initializes contents to contents, and nextNode to NULL
     * @param contents an integer containing contents
     */
    SLNode(int contents);
    /*
     * Destructor.
     * Sets nextNode to NULL.
     */
    virtual ~ SLNode();
    /*
     * Set the contents.
     * @param newContents an integer newContents
     */
    void setContents(int& newContents);
    /*
     * Get the contents.
     * @return contents an integer containing the contents
     */
    int getContents() const;
    /*
     * Set the nextNode.
     * @param newNextNode an integer containing desired newNextNode
     */
    void setNextNode(SLNode *newNextNode);
    /*
     * Get the nextNode.
     * @return nextNode.
     */
    SLNode* getNextNode()const;
    /*
     * Get the nextNode.
     * @return nextNode.
     */
    SLNode*& getNextNode();

private:

    int contents;
    SLNode *nextNode;
    
};

#endif
