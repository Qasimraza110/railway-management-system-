#include<iostream>
#include<string>
#include"train.h"
using namespace std;


 train::train():TrainNumber("lEM456"),MaximumCapacity(200),NumberOfBogies(9),staffList(40){}//default
   // train::train(string t3,string tr,int ma,int nu,int st);//parameterize 
     //setter
    /* void train::setTrainNumber(string);
     void train::setTrainName(string);
      void train::setMaximumCapacity(int);
       void train::setNumberOfBogies(int);
       void train::setstaffList(int);*/
     //getter
     string train::gerTrainNumber(){
        return TrainNumber;
     }
     //string train::gerTrainName(){
      //  return TrainName;
     //}
    int train::gerMaximumCapacity(){
        return MaximumCapacity;
    }
    int train::gerNumberOfBogies(){
        return NumberOfBogies;
    }
    int  train::gerstaffList(){
        return staffList;
    }
    //display function 
    void train::display_train_detail(){
         // cout<<"Train Name :"<<TrainName<<endl;
          cout<<"Train Number :"<<TrainNumber<<endl;
          cout<<"Maximun caoacity :"<<MaximumCapacity<<endl;
          cout<<"Number of bogies :"<<NumberOfBogies<<endl;
          cout<<"staff in train :"<<staffList<<endl;
    }
