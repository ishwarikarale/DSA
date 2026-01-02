//greenhouse effect
#include<iostream>
#define ROWS 2
#define COLS 5
using namespace std;
struct ClimateControl{
float temperature;
float humidity;
float lightIntensity;
float co2;
float soilMoisture;
};

int main(){
    ClimateControl farm[ROWS][COLS];
    srand(time(NULL));
   //this above fn will ensure that we get random outputs every second

    for(int r=0;r<ROWS;r++){
        for(int c=0;c< COLS;c++){
            farm[r][c].temperature=(rand()%151);
            farm[r][c].humidity=(rand()%101);
            farm[r][c].lightIntensity=(rand()%10000);
            farm[r][c].co2=(rand()%2000)+300;
            farm[r][c].soilMoisture=(rand()%101);


        }
    }
    cout<<"Tambademala's Green House Data"<<endl;
    cout<<"____________________________________________________________________________"<<endl;

    for(int r=0;r<ROWS;r++){
        for(int c=0;c<COLS;c++){
            cout<<"[R"<<r+1<<"C"<<c+1<<"]T="<<farm[r][c].temperature<<"°C H="<< farm[r][c].humidity<<"% LI="<<farm[r][c].lightIntensity<<"Lux CO2="<<farm[r][c].co2<<"ppm SM="<<farm[r][c].soilMoisture<<"%  ";

        }
        cout<<endl;
    }
    //avg temp
int sum=0;
int count=0;
  for(int r=0;r<ROWS;r++){
    for(int c=0;c<COLS;c++){
        sum=sum+farm[r][c].temperature;
        count++;
    }

  }
  int average=sum/count;
  cout<<"The average temp is:"<<average<<endl;


int max=farm[0][0].co2;
for(int r=0;r<ROWS;r++){
    for(int c=0;c<COLS;c++){
        if(max<farm[r][c].co2){
            max=farm[r][c].co2;

        }
    }}

cout<<"Max value of co2 green house is in "<<max;


  return 0;
}
//make it in .cpp and .h also replace the stuff with class and all 