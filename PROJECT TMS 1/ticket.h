#ifndef TICKET_H
#define TICKET_H

#include <string>
 #include<iostream>
 using namespace std;
 
class ticket {
private:
    int  TicketID;
    int PassengerID;
    int TrainID;
    string BookingDate;
    int SeatNumber;
   double TicketPrice;
    string type;

public:
          ticket();//default
    // Parameterized constructor
    ticket(int tic,int pass,int id,string date,int seat,double price,string typ);
       //setter
         void setTicketID(int);
         void setPassengerID(int);
         void setTrainID(int);
         void setBookingDate(string);
         void setSeatNumber(int);
         void setTicketPrice(double);
         void settype(string);
       //getter
       int  getTicketID();
    int getPassengerID();
    int getTrainID();
    string getBookingDate();
    int getSeatNumber();
   double getTicketPrice();
    string gettype();

    // Display function
    void display_ticket_detail();
    void calculateticket();


};

#endif 

