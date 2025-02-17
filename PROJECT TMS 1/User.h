#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>
using namespace std;


class User{
    private:
    string  phone_no;
    string  gmail;
    string cnic;
    string city;
    public:
    User();//default
    User(string p2,string g1,string cn,string c);//parameterize
    //setter
        void  setphone_no(string);
         void  setgmail(string);
         void  setcnic(string);
         void  setcity(string);
    //getter
    string  getphone_no();
    string  getgmail();
    string getcnic();
    string getcity();

    void display_details();

};
#endif