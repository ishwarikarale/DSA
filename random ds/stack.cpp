//bookshelf
//book class and shelf class
//stack using array
#include <iostream>
#include <string.h>
#define size 5
 
using namespace std;
 
class Book{
        public:
            string title;
            string author;  
            Book(){
                this->title="Rich Dad Poor Dad";
                this->author="Robert K";
            }
 
            Book(string t, string a){
                this->title=t;
                this->author=a;
            }
 
            void print(){
                cout<<"\n"<<this->title <<"  "<<this->author;
            }
};
 
class Shelf{
    private :
         int top;  //represent index of the shelf
         Book books[size];
    public:
        Shelf(){
            this->top=-1;
        }
        void push(Book theBook){
            //Overflow condition
            if(top == size-1){
                cout<<"Shelf is full with Books"<<endl;
                cout<<"You can not push more books on Shelf";
            }
            else{
                top++;
                this->books[top]=theBook;
            }
        }
 
 
        void pop(){
            //Underflow condition
            if(this->top >0)
            this->top--;
            else{
                cout<<"Shelf is empty"<<endl;
                cout<<"There is no any book available to Pop"<<endl;
            }
        }
        void display(){
            //keep traversing  shelf with Books from Top to bottom
            cout<<"\n Books available on Shelf"<<endl;
            for(int i=top; i>=0;i--){
                this->books[i].print();
            }
        }  
};
 
int main(){
 
    Book book1("You can win","Shiv khera");
    Book book2("Ignited Minds","APJ Kalam");
    Book book3("The Monk who sold his Ferrari", "Robhin Sharma");
    Book book4("Mahabharat", "Vyas");
    Book book5("Ramayan", "Walminki");
    Book book6("M3", "Ram Pande");
 
    Shelf  theShelf ;
 
    theShelf.push(book1);
    theShelf.push(book2);
    theShelf.push(book3);
    theShelf.push(book4);
    theShelf.push(book5);
 
    cout<<"Show all Books which are pushed"<<endl;
 
    theShelf.display();
 
 
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();
    theShelf.pop();  /// underflow
   
    cout<<"|n\n After first Pop \n";
    theShelf.display();
 
    return 0;
}