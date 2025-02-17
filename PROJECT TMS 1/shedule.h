#ifndef SHEDULE_H
#define SHEDULE_H

#include<iostream>
using namespace std;

class shedule{
    private:
    int  ScheduleID;

    public:
    shedule(int shed);//parametrize
   //setter
   void setScheduleID(int);
   //getter
   int  getScheduleID();
   
    //display finction
    void display_shedule();
    void generateshedule();
    void trainname();
    
};
#endif