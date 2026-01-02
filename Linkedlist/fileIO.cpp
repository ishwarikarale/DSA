#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist.h"
using namespace std;

void LinkedList::serialize(const string &filename)
{
    ofstream fout(filename);
    Node *temp = head;
    while (temp != nullptr)
    {
        fout << temp->data << "->";
        temp = temp->next;
    }
    fout.close();
    cout << "List saved to file\n";
}

void LinkedList::deserialize(const string &filename)
{
    ifstream fin(filename);
    int value;
    while (fin >> value)
    {
        insert(value);
    }
    fin.close();
    cout << "List read from file\n";
}