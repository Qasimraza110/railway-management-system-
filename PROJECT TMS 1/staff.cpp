#include<iostream>
#include"staff.h"
#include<string>
staff::staff():StaffID(0),Name(" "),Position(" "),AssignedTrain(" "){}//default
     staff::staff(int stff,string name,string posi,string assign,int p2,string g1,string cn,string c,train* t2):User(p2,g1,cn,c),t(t2){
        StaffID=stff;
        Name=name;
        Position=posi;
        AssignedTrain=assign;
        }//parameterize
     
//setter
void staff::setStaffID(int x){
           StaffID=x;
}
void staff::setName(string x){
            Name=x;
}
void staff::setPosition(string x){
         Position=x;
}
void staff::setAssignedTrain(string x){
            AssignedTrain=x;
}
//getter
     int  staff::getStaffID(){
           return StaffID;
     }
     string staff::getName(){
           return Name;
     }
     string staff::getPosition(){
            return Position;
     }
     string staff::getAssignedTrain(){
             return AssignedTrain;
     }

    
       void staff::display_staff(){
        cout<<"staff id :"<<StaffID<<endl;
        cout<<"Name :"<<Name<<endl;
        cout<<"Position :"<<Position<<endl;
        cout<<"Assign Train :"<<AssignedTrain<<endl;
        User::display_details();
        t->display_train_detail();
       }
      
