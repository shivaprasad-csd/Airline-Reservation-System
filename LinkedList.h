#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class SeatNode
{
public:
    int seatNumber;
    SeatNode* next;

    SeatNode(int seat)
    {
        seatNumber = seat;
        next = nullptr;
    }
};

class LinkedList
{
private:
    SeatNode* head;

public:
    LinkedList();

    void initializeSeats(int totalSeats);

    bool bookSeat(int seatNumber);

    void cancelSeat(int seatNumber);

    void displayAvailableSeats();

    bool isSeatAvailable(int seatNumber);
};

#endif