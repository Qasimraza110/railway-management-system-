 #include<iostream>
 #include"ticket.h"
 using namespace std;
 
 ticket::ticket(){
TicketID=0;
PassengerID=0;
TrainID=0;
BookingDate="null ptr";
SeatNumber=0;
TicketPrice=0.0;
type="null ptr";
    }//default
    // Parameterized constructor
    ticket::ticket(int tic,int pass,int id,string date,int seat,double price,string typ){
TicketID=tic;
PassengerID=pass;
TrainID=id;
BookingDate=date;
SeatNumber=seat;
TicketPrice=price;
type=typ;
    }
       //setter
         void ticket::setTicketID(int x){
               TicketID=x;
         }
         void ticket::setPassengerID(int x){
                    PassengerID=x;
         }
         void ticket::setTrainID(int x){
                        TrainID=x;
         }
         void ticket::setBookingDate(string x){
                  BookingDate=x;
         }
         void ticket::setSeatNumber(int x){
                   SeatNumber=x;
         }
         void ticket::setTicketPrice(double x){
                        TicketPrice=x;
         } 
         void ticket::settype(string x){
               type=x;
         }
       //getter
       int  ticket::getTicketID(){
                 return TicketID;
       }
    int ticket::getPassengerID(){
             return PassengerID;
    }
    int ticket::getTrainID(){
                return TrainID;
    }
    string ticket::getBookingDate(){
             return BookingDate;
    }
    int ticket::getSeatNumber(){
return SeatNumber;
    }
   double ticket::getTicketPrice(){
                  return TicketPrice;
   }
    string ticket::gettype(){
         return type;
    } 

    // Display function
    void ticket::display_ticket_detail(){
                cout<<"Ticket id :"<<TicketID<<endl;
                cout<<"Passenger Id :"<<PassengerID<<endl;
                cout<<"Train Id :"<<TrainID<<endl;
                cout<<"Booking date :"<<BookingDate<<endl;
                cout<<"Seat Number :"<<SeatNumber<<endl;
                cout<<"Ticket price "<<TicketPrice<<endl;
                cout<<"Type :"<<type<<endl;
    } 
    void ticket::calculateticket(){

   cout<<" the price of ticket is "<<TicketPrice<<endl;
   string economy,Economy,buisness,Buisness;
   if (type==economy||type==Economy){
    double newprice=500;
          TicketPrice+=newprice;
    cout<<" the price of economy class is "<<TicketPrice<<endl;
   }else if(type==buisness||type==Buisness){
    double nprice=1000;
            TicketPrice+=nprice;
    cout<<"the price of buisness class is "<<TicketPrice<<endl;
               cout<<"\t\t**** YOUR AMOUNT PAID SUCCESSFULLY ****"<<endl;
   }
    }