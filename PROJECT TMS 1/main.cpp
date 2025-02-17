#include <iostream>
#include <string>
#include "passenger.h"
//#include "payment.h"
#include "shedule.h"
#include "staff.h"
#include "station.h"
#include "ticket.h"
#include "train.h"
#include "User.h"
#include "passenger.cpp"
//#include "payment.h"
#include "shedule.cpp"
#include "staff.h"
#include "station.cpp"
#include "ticket.cpp"
#include "train.cpp"
#include "User.cpp"
#include<windows.h>


using namespace std;

int main() {
         cout<<endl;
         system("color 30");

    cout << "\t\t******************************************************" << endl;
    cout << "\t\t*          WELCOME TO RAILWAY MANAGEMENT SYSTEM      *" << endl;
    cout << "\t\t******************************************************" << endl;
    cout << endl;

    station st("Lahore Junction railway station", 10, 95);
    st.display_station();
    cout << endl;
    //st.facalities();
    cout << endl;
    cout<<"\t\t\t********** HELP DESK **********"<<endl;
    cout << "HOW CAN I HELP YOU ?" << endl;
    string user_input;
    getline(cin, user_input);  // Ask for passenger
    cout << endl;

    shedule sh(3456);
    sh.trainname();
    sh.display_shedule();  // Schedule of train
    cout << endl;
    sh.generateshedule();
    
    cout << endl;
    int m;
    cout << "HOW MANY TICKETS DO YOU WANT TO BUY? ";
    cin >> m;
    cout << endl;
for(int i=0;i<m;i++){
    cout<<"Enter the details "<<i+1<<":"<<endl;
    string name;
    cout << "Name: ";
    cin >> name;

    string gender;
    cout << "Gender (M/F): ";
    cin >> gender;

    int age;
    cout << "Your age: ";
    cin >> age;

    string phone_no;
    cout << "Your phone number: ";
    cin >> phone_no;

    string gmail;
    cout << "Your gmail: ";
    cin >> gmail;

    string cnic;
    cout << "CNIC: ";
    cin >> cnic;

    string city;
    cout << "City: ";
    cin >> city;

    int TicketID;
    cout << "Ticket ID: ";
    cin >> TicketID;

    int PassengerID;
    cout << "Passenger ID: ";
    cin >> PassengerID;

    int TrainID;
    cout << "Train ID: ";
    cin >> TrainID;

    string BookingDate;
    cout << "Booking date: ";
    cin >> BookingDate;

    int SeatNumber;
    cout << "Seat number: ";
    cin >> SeatNumber;

    double TicketPrice;
    cout << "Ticket price: ";
    cin >> TicketPrice;

    string type;
    cout << "Train type: ";
    cin >> type;

    passenger pas( name, gender, age, phone_no, gmail, cnic, city,TicketID, PassengerID, TrainID, BookingDate, SeatNumber, TicketPrice, type);
    cout<<endl;
    cout << "\t*** PASSENGER DETAILS ***" << endl;
    cout<<endl;
    pas.display_passenger_detail();
    cout<<endl;
       
    if (type=="buisness"||type=="Buisness"){
        cout<<"\t***** Buisness CLASS TICKET PRICE ******"<<endl;
                      double new1 =300;
                      TicketPrice+=new1;
                      cout<<"ADDITIONAL CHARGES.....300 for buisness class"<<endl;
                      cout<<" TICKET PRICE "<<TicketPrice;
    }else{
    	cout<<"\t*** ECONOMY CLASS TICKET ***"<<endl;
    pas.price();
	}
	 
	 cout<<endl;
	 }
                          train tr;
                cout<<"\t*** TRAIN DETAILS ***"<<endl;
                cout<<endl;
                          tr.display_train_detail();
                          cout<<endl;
               cout<<"\t*** YOUR TICKET BOOK SUCCESSFULLY ***"<<endl; 
                   
            cout<<endl;
           //staff st(667,"ALI","TT","Buisness Class",&tr);
            //cout<<"STAFF INFORMATION "<<endl;
            //st.display_staff();
             cout<<"\t\t*** PAYMENT METHOD ***"<<endl;
                int choice;
                cout<<"1) JAZZ CASH "<<endl;
                cout<<"2) Easiy Paisa "<<endl;
                cout<<"3) CASH "<<endl;
                cout<<"4) DEBIT CARD"<<endl;
                cin>>choice;
                switch(choice){
                        case 1:
                            cout<<"JAZZ CASH "<<endl;
                                break;
                        case 2:
                            cout<<"Eaisy Paisa"<<endl;
                            break;
                        case 3:
                               cout<<"CASH"<<endl;
                               break;
                        case 4:
                            cout<<"DEBIT CARD"<<endl;
                            break;
                        default:
                          cout<<"please select the one "<<endl;
                        }
                //  passenger pas1;
    
     cout<<"\t\t*** AMMOUNT PAID SUCCESSFULLY ***"<<endl;
       st.facalities();
 

    return 0;
}
