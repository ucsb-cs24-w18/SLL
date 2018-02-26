/* SLL.h
 * Author: Zack Higgins
*/

#ifndef SLL_H
#define SLL_H

#include <iostream>

using namespace std;

class SLL
{
    public:

        // Class Functions:
        SLL();                              // Constructor
        ~SLL();                             // Destructor
        SLL(const SLL& SLL1);               // Copy Constructor
        SLL& operator=(const SLL& SLL1);    // Assignment Operator

        // All references to data refer to existing nodes.
        // All references to value refer to new nodes.
        // Insertion references to index refer to the position of a new node in the linked list.
        // Deletion references to index refer to the position of an existing node in the linked list.

        // Insertion Functions:
        void insertAtHead(int value);                  // Inserts node at head of linked list.
        void insertAtTail(int value);                  // Inserts node at tail of linked list.
        void insertAtIndex(int value, int index);      // Inserts node at specified location in linked list. If no such index exists, adds to tail. If index is zero or lesser, adds to head.
        void insertBeforeData(int value, int data);    // Inserts node before first node of specified value in linked list. If no such value exists, adds no new node.
        void insertAfterData(int value, int data);     // Inserts node after first node of specified value in linked list. If no such value exists, adds no new node.

        // Deletion Functions:
        void deleteAtHead();                    // Deletes first node of linked list. 
        void deleteAtTail();                    // Deletes final node of linked list.
        void deleteAtIndex(int index);          // Deletes node at specified location in linked list.
        void deleteAllPriorToIndex(int index);  // Deletes all nodes preceding specified location in linked list.
        void deleteAllAfterIndex(int index);    // Deletes all nodes succeeding specified location in linked list.
        void deleteFirstOfData(int data);       // Deletes first node with specified data.
        void deleteAllOfData(int data);         // Deletes all nodes with specified data.
        
        // Miscellaneous Functions:
        void reverseList();     // Reverses orientation of linked list.
        void printSLL();        // Prints contents of linked list.
        bool isPalindrome();    // Returns true if data elements of successive linked list nodes are equal when read from head or tail.

    private:
    
        // Definition of node:
        struct node          
        {
            int data;      
            node* next;    
        };

        // General pointers:
        node* head;
        node* transient;
};
#endif
