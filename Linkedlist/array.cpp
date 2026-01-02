#include<iostream>
#include <cstring>       
using namespace std;
class Animal{
    public:
    char name[40];
    int age;
    char breed[50];
void display(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Breed:"<<breed<<endl;
}
};

int main(){
    Animal dog;
    strcpy(dog.name, "Tommy");
    dog.age=5;
    strcpy(dog.breed, "Pomerianian");
    dog.display();
    Animal cat;
    strcpy(cat.name, "Kitty");
    cat.age=3;
    strcpy(cat.breed, "Persian");
    cat.display();
    Animal tiger;
    strcpy(tiger.name, "Simba");
    tiger.age=1;
    strcpy(tiger.breed, "Bengal");
    tiger.display();


    return 0;
}