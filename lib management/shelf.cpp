#include<iostream>
using namespace std;
#include"Book.h"
#define size 5
class Shelf{
    public:
int top;
Book books[size];
Shelf(){
    this->top=-1;
}
void push(Book thebook){
    if(top==size-1){
        cout<<"The shelf is full no more books can be added"<<endl;
        return;
    }
    else{
        top++;
        books[top]=thebook;
        cout<<"Book is pushed"<<thebook.title<<thebook.author<<endl;

    }

}
Book pop(){
if(top==-1){
    cout<<"Stack is empty nothing to delete";
    return Book("empty","none");
}
else{
        Book deletedBook = books[top];
        cout<<"Deleted book"<<deletedBook.title<<endl;
        top--;
        return deletedBook; 

}
}
void peek() {
        if (top == -1) {
            cout << "Stack is empty, no top element." << endl;
        } else {
            cout << "Top book (without removing):" << endl;
            books[top].print(); // Use the Book::print() method
        cout<<books[top].author<<books[top].title;
        }
    }
void display() {
        int choice;
        std::cout << "\n--- DISPLAY MENU ---\n";
        std::cout << "1. Show entire stack\n";
        std::cout << "2. Show top element (Peek)\n";
        std::cout << "3. Show stack size\n";
        std::cout << "4. Check if stack is empty\n";
        std::cout << "Enter your option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // **CORRECTED LOGIC: Show entire stack from top to bottom**
                if (top == -1) {
                   cout << "Stack is empty.\n";
                } else {
                    cout << "\n--- Shelf Contents (Top to Bottom) ---\n";
                    // Iterate from the top element (top) down to the bottom (0)
                    for (int i = top; i >= 0; --i) {
                        cout << "[" << i << "] ";
                        books[i].print();
                    }
                    cout << "------------------------------------------\n";
                }
                break;

            case 2:
                
                this->peek();
                break;

            case 3:
                cout << "Current stack size: " << (top + 1) << endl;
                break;

            case 4:
                if (top == -1) cout << "YES, Stack is empty\n";
                else cout << "NO, Stack is not empty\n";
                break;

            default:
                cout << "Invalid display option\n";
        }
    }

};