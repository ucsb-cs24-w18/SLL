#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    SLL SLL1, SLL2, SLL3, SLL4, SLL5, SLL6, SLL7, SLL8;

    for (int i = 0; i < 6; i++)
    {
        SLL1.insertAtHead(i);
    }

    for (int i = 0; i < 6; i++)
    {
        SLL2.insertAtTail(i);    
    }

    for (int i = 0; i < 6; i++)
    {
        SLL3.insertAtHead(i);
    }
    SLL3.insertAtIndex(1000, 2);
    SLL3.insertAtIndex(2000, 7);
    SLL3.insertAtIndex(3000, 20);
    SLL3.insertAtIndex(4000, -1);

    SLL4.insertAtIndex(1000,1000);

    for (int i = 0; i < 6; i++)
    {
        SLL5.insertAtHead(i);
    }
    SLL5.insertBeforeData(1000, 3);

    SLL6.insertBeforeData(1000, 3);

    for (int i = 0; i < 6; i++)
    {
        SLL7.insertAtHead(i);
    }

    SLL7.insertAfterData(1000, 3);
    SLL7.insertAfterData(1000, 10);

    SLL8.insertAfterData(1000, 3);

    cout << "insertAtHead Test:" << endl;
    SLL1.printSLL();
    cout << endl << "insertAtTail Test:" << endl;
    SLL2.printSLL();
    cout << endl << "insertAtIndex Test:" << endl;
    SLL3.printSLL();
    cout << endl << "insertAtIndex Empty List Test:" << endl;
    SLL4.printSLL();
    cout << endl << "insertBeforeData Test:" << endl;
    SLL5.printSLL();
    cout << endl << "insertBeforeData Empty List Test:" << endl;
    SLL6.printSLL();
    cout << endl << "insertAfterData Test:" << endl;
    SLL7.printSLL();
    cout << endl << "insertAfterData Empty List Test:" << endl;
    SLL8.printSLL();

    return 0;
}
