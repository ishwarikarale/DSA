#include<iostream>
using namespace std;
#include"shelf.cpp"
#include"Book.h"
int main(){
Shelf library;

Book book1("Metamorphosis","Franz Kafka");
Book book2("Pride and Prejudice","JAne Austen");
Book book3("1984","George Orwell");
Book book4("Alchemist","Paulo Coelho");
Book book5("The Kite Runner","Khaled Hosseni");

library.push(book1);
library.push(book2);
library.push(book3);
library.push(book4);
library.push(book5);

library.display();
library.pop();
library.pop();
return 0;
}

