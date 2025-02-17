#ifndef PASSENGER_H
#define PASSENGER_H

#include "User.h"
#include "ticket.h"
#include <string>

class passenger : public User {
        private:
    std::string name;
    string gender;
    int age;
    ticket t;
public:
    passenger();
    passenger(std::string nm, string gen, int ag, std::string p2, std::string g1, std::string cn, std::string c, int tic, int pass, int id, std::string date, int seat, double price, std::string typ);
    
    void setname(std::string x);
    void setgender(string x);
    void setage(int x);
    
    std::string getname();
    string getgender();
    int getage();

    void display_passenger_detail();
    void price() ;


};

#endif // PASSENGER_H
