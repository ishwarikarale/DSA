
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    Book();
    Book(string t, string a);

    void print();
};

#endif