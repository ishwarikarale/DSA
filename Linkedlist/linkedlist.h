#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;
#include "Node.h"
#include <string>

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    Node *getHead()
    {
        return head;
    }

    void insert(int value);
    bool remove(int value);
    void display();
    bool search(int key);
    void serialize(const string &filename);
    void deserialize(const string &filename);
};

#endif
