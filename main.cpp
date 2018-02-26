#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    SLL SLL1, SLL2;

    for (int i = 0; i < 10; i++)
    {
        SLL1.insertAtHead(i);
    }

    for (int i = 0; i < 10; i++)
    {
        SLL2.insertAtTail(i);    
    }

    cout << "insertAtHead Test:" << endl;
    SLL1.printSLL();
    cout << endl << "insertAtTail Test:" << endl;
    SLL2.printSLL();

    return 0;
}
