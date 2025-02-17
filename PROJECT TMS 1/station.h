#ifndef STATION_H
#define STATION_H
#include<iostream>
using namespace std;
class station{
    private:
    string Name;
    int NumberOfPlatforms;
    int NumberOfStaff;
    public:
    station(string nam,int nop,int nos);//parameterize
    //setter
    void setName(string);
    void setNumberOfPlatforms(int);
    void setNumberOfStaff(int);
   //getter
    string getName();
    int getNumberOfPlatforms();
    int getNumberOfStaff();

  //display function
  void display_station();
  void addstaff();
  void facalities();


};

#endif