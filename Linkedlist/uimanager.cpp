#include <iostream>
#include "linkedList.h"
#include "uimanager.h"

using namespace std;

void UI::run()
{
    LinkedList list;
    int choice, value;

    while (true)
    {
        cout << "\n===== LINKEDLIST MENU =====" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "5.Save Linked List to File" << endl;
        cout << "6.Load Linked List from File" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insert(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.remove(value);
            break;

        case 3:
            list.display();
            break;

        case 4:
            cout << "Exiting linkedlist" << endl;
            return;

        case 5:
            list.serialize("listdata.txt");
            break;

        case 6:
            list.deserialize("listdata.txt");
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    }
}