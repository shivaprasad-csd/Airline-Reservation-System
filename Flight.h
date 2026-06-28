#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include "LinkedList.h"
#include "HashTable.h"

using namespace std;

class Flight
{
private:
    LinkedList seats;
    HashTable passengers;

public:
    Flight();

    void bookTicket();

    void cancelTicket();

    void searchPassenger();

    void displayAvailableSeats();

    void displayPassengers();
};

#endif