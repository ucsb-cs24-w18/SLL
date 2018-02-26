#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    SLL SLL1, SLL2, SLL3;

    for (int i = 0; i < 10; i++)
    {
        SLL1.insertAtHead(i);
    }

    for (int i = 0; i < 10; i++)
    {
        SLL2.insertAtTail(i);    
    }

    for (int i = 0; i < 10; i++)
    {
        SLL3.insertAtHead(i);
    }
    SLL3.insertAtIndex(1000, 3);
    SLL3.insertAtIndex(2000, 11);
    SLL3.insertAtIndex(3000, 20);
    SLL3.insertAtIndex(4000, -1);

    cout << "insertAtHead Test:" << endl;
    SLL1.printSLL();
    cout << endl << "insertAtTail Test:" << endl;
    SLL2.printSLL();
    cout << endl << "insertAtIndex Test:" << endl;
    SLL3.printSLL();

    return 0;
}
