#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
using namespace std;

class Passenger
{
public:
    int passengerID;
    string name;
    int age;
    int seatNumber;

    Passenger* next;

    Passenger();
    Passenger(int id, string n, int a, int seat);
};

#endif