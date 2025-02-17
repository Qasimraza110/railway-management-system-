#include<iostream>
#include"User.h"
using namespace std;

User::User():phone_no(0),gmail(" "),cnic(" "),city(" "){}
User::User(string p2,string g1,string cn,string c):phone_no(p2),gmail(g1),cnic(cn),city(c){}//parameterize
    //setter
        void  User::setphone_no(string x){
                  phone_no=x;
        }
         void  User::setgmail(string x){
                   gmail=x;
         }
         void  User::setcnic(string x){
                    cnic=x;
         }
         void  User::setcity(string x){
                  city=x;
         }
    //getter
    string  User::getphone_no(){
       return phone_no;
    }
    string  User::getgmail(){
               return gmail;
    }
    string User::getcnic(){
         return cnic;
    }
    string User::getcity(){
              return city;
    }

    void User::display_details(){
           cout<<"phone number :"<<phone_no<<endl;
           cout<<"gmail :"<<gmail<<endl;
           cout<<"cnic :"<<cnic<<endl;
           cout<<"city :"<<city<<endl;
    }