#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
#include<string>
using namespace std;

class train{
    private:
     string TrainNumber;
     //string TrainName;
    int MaximumCapacity;
    int NumberOfBogies;
    int  staffList;
    public:
    train();//default
    train(string t3,int ma,int nu,int st);//parameterize 
     //setter
     void setTrainNumber(string);
    // void setTrainName(string);
      void setMaximumCapacity(int);
       void setNumberOfBogies(int);
       void setstaffList(int);
     //getter
     string gerTrainNumber();
    // string gerTrainName();
    int gerMaximumCapacity();
    int gerNumberOfBogies();
    int  gerstaffList();
    //display function 
    void display_train_detail();
    void addstaff();
    };
#endif