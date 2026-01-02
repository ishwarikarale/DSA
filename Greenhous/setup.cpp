
#include "setup.h"
#include <cstdlib>
#include<iostream>
using namespace std;

void Setup:: Data() {
    for(int r=0;r<ROWS;r++){
        for(int c=0;c<COLS;c++){
            farm[r][c].setData();
    
        }
    }
}

void Setup::Displayall(){
    for(int r=0;r<ROWS;r++){
        for(int c=0;c<COLS;c++){
            cout << "[" << r+1 << "][" << c+1 << "]";
            farm[r][c].display();
        }
        cout<<endl<<endl;
    }
}



