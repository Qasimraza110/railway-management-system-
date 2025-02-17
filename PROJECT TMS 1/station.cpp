#include<iostream>
#include"station.h"
#include<string>
using namespace std;



station::station(string nam,int nop,int nos):Name(nam),NumberOfPlatforms(nop),NumberOfStaff(nos){}//parameterize
string station::getName(){
          return Name;
}
    int station::getNumberOfPlatforms(){
            return NumberOfPlatforms;
    }
    int station::getNumberOfStaff(){
            return NumberOfStaff;
    }
 void station::display_station(){
           cout<<"NAME OF STATION :"<<Name<<endl;
           cout<<"NUMBER OF PLATFORM :"<<NumberOfPlatforms<<endl;
           cout<<"AVAILABLE STAFF :"<<NumberOfStaff<<endl;
 }
void station::addstaff(){
      
            if (NumberOfStaff<100){
               int add;
                 cout<<"Add staff on station :";
                     cin>>add;
                     NumberOfPlatforms+=add;
                     cout<<"the staff is added";
            }else{
              cout<<"no need to add satff";
            }
  }
  void station::facalities(){

                cout<<"\t\t***** AVAILABLE FACILITIES *****"<<endl;
                cout<<"1) Restrooms"<<endl;
                cout<<"2) Waiting Area"<<endl;
                cout<<"3) Food Court"<<endl;
                cout<<"4) Parking"<<endl;
                int choice ;
                cin>>choice;
                switch(choice){
                        case 1:
                             cout<<"Restrooms"<<endl;
                             cout<<"\t*** REST FOR A WHILE  ***"<<endl;
                             break;
                        case 2:
                               cout<<"Waiting Area"<<endl;
                               cout<<"\t*** WATING FOR THE TRAIN ***"<<endl;
                               break;
                        case 3:
                              cout<<"Food Court"<<endl;
                              cout<<"\t*** NOW GO TO CANTEEN FOR EATING SOME FOOD ***"<<endl;
                              break;
                        case 4:
                             cout<<"Parking"<<endl;
                             cout<<"\t*** GOING FOR PARK THE CAR IN PARING STAND "<<endl;
                             break;
                        default:
                        cout<<"no other facility is available "<<endl;

                }
  }
