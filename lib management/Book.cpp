#include "Book.h"

Book::Book() {
    this->title = "Metamorphosis";
    this->author = "Franz Kafka";
}

Book::Book(string t, string a) {
    this->title = t;
    this->author = a;
}

void Book::print() {
    cout << "Title: " << title << " Author: " << author << endl;
}