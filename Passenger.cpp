#include "Passenger.h"

Passenger::Passenger()
{
    passengerID = 0;
    name = "";
    age = 0;
    seatNumber = 0;
    next = nullptr;
}

Passenger::Passenger(int id, string n, int a, int seat)
{
    passengerID = id;
    name = n;
    age = a;
    seatNumber = seat;
    next = nullptr;
}