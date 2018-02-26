#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    SLL SLL1, SLL2, SLL3, SLL4;

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

    cout << "insertAtHead Test:" << endl;
    SLL1.printSLL();
    cout << endl << "insertAtTail Test:" << endl;
    SLL2.printSLL();
    cout << endl << "insertAtIndex Test:" << endl;
    SLL3.printSLL();
    cout << endl << "insertAtIndex Empty List Test:" << endl;
    SLL4.printSLL();

    return 0;
}
