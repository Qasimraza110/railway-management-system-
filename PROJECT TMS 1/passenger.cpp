#include "passenger.h"
#include <iostream>

passenger::passenger() {}

passenger::passenger(std::string nm, string gen, int ag, std::string p2, std::string g1, std::string cn, std::string c, int tic, int pass, int id, std::string date, int seat, double price, std::string typ)
    : User(p2, g1, cn, c), name(nm), gender(gen), age(ag), t(tic, pass, id, date, seat, price, typ) {}

void passenger::setname(std::string x) {
    name = x;
}

void passenger::setgender(string x) {
    gender = x;
}

void passenger::setage(int x) {
    age = x;
}

std::string passenger::getname() {
    return name;
}

string passenger::getgender() {
    return gender;
}

int passenger::getage() {
    return age;
}

void passenger::display_passenger_detail()  {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Age: " << age << std::endl;
    User::display_details();  // Assuming User class has a display_details() method
    std::cout << std::endl;
    cout<<"\t*** TICKET DETAILS ***"<<endl;
    t.display_ticket_detail();  // Assuming Ticket class has a display_ticket_detail() method
}

void passenger::price()  {
    t.calculateticket();  // Assuming Ticket class has a calculateticket() method
}
