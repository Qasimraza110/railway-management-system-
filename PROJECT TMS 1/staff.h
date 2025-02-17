#ifndef STAFF_H
#define STAFF_H
#include<iostream>
#include"train.h"
#include"User.h"
#include<string>
class staff:public User{
    private:
     int  StaffID;
     string Name;
     string Position;
     string AssignedTrain;
     train *t; //aggregation
     public:
     staff();//default
     staff(int stff,string name,string posi,string assign,int p2,string g1,string cn,string c,train* t2);//parameterize
     
//setter
void setStaffID(int);
void setName(string);
void setPosition(string);
void setAssignedTrain(string);
//getter
     int  getStaffID();
     string getName();
     string getPosition();
     string getAssignedTrain();

       void display_staff(); 
      
    
};

#endif