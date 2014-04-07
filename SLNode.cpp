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

#include "SLNode.h"
/*
* Default constructor.
* Initializes nextNode to NULL and contents to 0
*/
SLNode::SLNode() :contents(0),nextNode(NULL)
{}
/*
* Overloaded constructor.
* Initializes contents to contents, and nextNode to NULL
* @param contents an integer containing contents
*/
SLNode::SLNode(int contents) :contents(contents),nextNode(NULL)
{}
/*
* Destructor.
* Sets nextNode to NULL.
*/
SLNode::~SLNode()
{
   nextNode = NULL;
}
/*
* Set the contents.
* @param newContents an integer newContents
*/
void SLNode::setContents(int& newContents)
{
   contents = newContents;
}
/*
* Get the contents.
* @return newContents an integer containing the contents
*/
int SLNode::getContents() const
{
   return contents;
}
/*
* Set the nextNode.
* @param newNextNode an integer containing desired newNextNode
*/
void SLNode::setNextNode(SLNode *newNextNode)
{
   nextNode = newNextNode;
}
/*
* Get the nextNode.
* @return nextNode.
*/
SLNode* SLNode::getNextNode() const
{
   return nextNode;
}
/*
* Get the nextNode.
* @return nextNode.
*/
SLNode*& SLNode::getNextNode()
{
   return nextNode;
}