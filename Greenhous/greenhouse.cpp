#include "greenhouse.h"
#include "setup.h"
#include<cstdlib>
#include<ctime>


void Greenhouse::setData(){
    temperature=rand()%100;
    humidity=(rand()%101);
    lightIntensity=(rand()%10000);
    co2=(rand()%2000)+300;
    soilMoisture=(rand()%101);
} 
void Greenhouse::display()
{
    cout<<name<<"T="<<temperature<<" C H="<<humidity<<"% LI="<<lightIntensity<<"Lux CO2="<<co2<<"ppm SM="<<soilMoisture<<"%  ";
}





