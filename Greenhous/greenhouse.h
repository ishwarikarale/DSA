#ifndef GREENHOUSE_H
#define GREENHOUSE_H

#include<iostream>
using namespace std;

class Greenhouse{
    private:
    float temperature;
    float humidity;
    float lightIntensity;
    float co2;
    float soilMoisture;
    string name;
    public:
    void setData();
    void display();
};



#endif