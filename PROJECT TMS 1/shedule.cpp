#include<iostream>
using namespace std;
#include"shedule.h"
#include<string>

shedule::shedule(int shed ):ScheduleID(shed){}
 void shedule::setScheduleID(int x){
             ScheduleID=x;
 }
   //getter
   int  shedule::getScheduleID(){
           return ScheduleID;
   }
    
    //display finction
    void shedule::display_shedule(){
            cout<<"Shedule Id :"<<ScheduleID<<endl;
    }
    void shedule::generateshedule(){
              cout<<"Available time for this train :"<<endl;
              cout<<endl;
    cout<<"\t 1) Morning 10.00 AM------2.00pm "<<endl;
    cout<<"\t 2) Evening 3.00 pm -----7.00pm "<<endl;
    cout<<"\t 3) Night 9.00 Pm-------8.00am"<<endl;
    cout<<endl;
    int choice;
    cout<<"select the time :";
    cin>>choice;
    switch (choice){
      case 1:
           cout<<"Morning 10.00 AM------2.00pm"<<endl;
           break;
      case 2:
           cout<<"Evening 3.00 pm -----6.00pm"<<endl;
           break;
      case 3:
           cout<<"Night 9.00 Pm-------1.00am"<<endl;
           break;
        default:
          cout<<"no shedule available "<<endl;
    }
    }
    void shedule::trainname(){
      cout<<"AVAILABLE TRAINS :"<<endl;
              cout<<endl;
    cout<<"\t 1) Allama Iqbal Express "<<endl;
    cout<<"\t 2) Badar Express "<<endl;
    cout<<"\t 3) Ghauri Express  "<<endl;
    cout<<endl;
    int choice;
    cout<<"select the train :";
    cin>>choice;
    switch (choice){
      case 1:
           cout<<"Allama Iqbal Express"<<endl;
           break;
      case 2:
           cout<<"Badar Express"<<endl;
           break;
      case 3:
           cout<<"Ghauri Express "<<endl;
           break;
        default:
          cout<<"no train available "<<endl;
    }
    }
    