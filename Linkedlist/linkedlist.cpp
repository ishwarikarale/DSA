#include <iostream>
#include "linkedlist.h"
using namespace std;

LinkedList::LinkedList()
{
    this->head = nullptr;
}

LinkedList::~LinkedList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
}

void LinkedList::insert(int value)
{
    Node *newN = new Node(value);

    if (head == nullptr)
    {
        head = newN;
        return;
    }

    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newN;
    }
}

bool LinkedList::remove(int value)
{
    if (head == nullptr)
    {
        cout << "List is empty can't remove" << endl;
        return false;
    }
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    Node *cur = head;
    while (cur->next && cur->next->data != value)
    {
        cur = cur->next;
    }
    if (!cur->next)
    {
        cout << "The number " << value << " didn't exist" << endl;
        return false;
    }
    Node *temp = cur->next;
    cur->next = temp->next;
    delete temp;
    return true;
}

void LinkedList::display()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool LinkedList::search(int key)
{
    Node *cur = head;
    while (cur)
    {
        Node *temp = cur;
        cur = cur->next;
        delete temp;
    }
    head = nullptr;
    return true;
}
