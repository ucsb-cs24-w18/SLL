/* SLL.cpp
 * Author: Zack Higgins
 * Implementation of class SLL defined within SLL.h
 */

#include <iostream>
#include "SLL.h"

using namespace std;

// Constructor:
SLL::SLL()
{
   head = NULL;
   transient = NULL;
}

// Node Destructor:
/*
node::~node()
{
    if (next)
    {
        delete next;
    }
}
*/

// SLL Destructor:
SLL::~SLL()
{
    if (head)
    {
        delete head;
    }
}

// Copy Constructor:
SLL::SLL(const SLL& SLL1)
{
    // Stub
}

// Assignment Operator:
SLL& SLL::operator=(const SLL& SLL1)
{
    // Stub
}

// Insertion Functions:
void SLL::insertAtHead(int value)
{
    transient = head;
    transient = new node;
    transient -> data = value;
    transient -> next = head;
    head = transient;
    return;
}

void SLL::insertAtTail(int value)
{
    if (!head)
    {
        insertAtHead(value);
        return;
    }

    transient = head;
    while (transient -> next)
    {
        transient = transient -> next;
    }
    transient -> next = new node;
    transient = transient -> next;
    transient -> data = value;
    transient -> next = NULL;
    return;
    
}

void SLL::insertAtIndex(int value, int index)
{
    int count(0);
    node* temporary;
    transient = head;
    
    if (index < 1)
    {
        insertAtHead(value);
        return;
    }

    while (transient -> next && count < (index-1))
    {
        transient = transient -> next;
        count++;
    }

    if (transient)
    {
        temporary = new node;
        temporary -> data = value;
        temporary -> next = transient -> next;
        transient -> next = temporary;
        return;
    }

    temporary = new node;
    temporary -> data = value;
    temporary -> next = NULL;
    transient -> next = temporary;
    return;
}

void SLL::insertBeforeData(int value, int data)
{
    // Stub
}

void SLL::insertAfterData(int value, int data)
{
    // Stub
}

// Deletion Functions:
void SLL::deleteAtHead()
{

}

void SLL::deleteAtTail()
{

}

void SLL::deleteAllPriorToIndex(int index)
{

}

void SLL::deleteAllAfterIndex(int index)
{

}

void SLL::deleteFirstOfData(int data)
{

}

void SLL::deleteAllOfData(int data)
{

}

// Miscellaneous Functions:
void SLL::reverseList()
{

}

void SLL::printSLL()
{
    transient = head;
    while (transient)
    {
        cout << transient -> data << endl;
        transient = transient -> next;
    }
    return;
}
bool SLL::isPalindrome()
{

}
