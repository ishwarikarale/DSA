#ifndef SETUP_H
#define SETUP_H
#include "greenhouse.h"

class Setup{
    private:
    static const int ROWS = 2;
    static const int COLS = 5;
    Greenhouse farm[ROWS][COLS];
    public:
    void Data();
    void Displayall();
};

#endif