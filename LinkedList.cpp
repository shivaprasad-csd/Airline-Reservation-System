#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::initializeSeats(int totalSeats)
{
    for (int i = totalSeats; i >= 1; i--)
    {
        SeatNode* newNode = new SeatNode(i);
        newNode->next = head;
        head = newNode;
    }
}

bool LinkedList::isSeatAvailable(int seatNumber)
{
    SeatNode* temp = head;

    while (temp != nullptr)
    {
        if (temp->seatNumber == seatNumber)
            return true;

        temp = temp->next;
    }

    return false;
}

bool LinkedList::bookSeat(int seatNumber)
{
    SeatNode* temp = head;
    SeatNode* prev = nullptr;

    while (temp != nullptr)
    {
        if (temp->seatNumber == seatNumber)
        {
            if (prev == nullptr)
                head = temp->next;
            else
                prev->next = temp->next;

            delete temp;
            return true;
        }

        prev = temp;
        temp = temp->next;
    }

    return false;
}

void LinkedList::cancelSeat(int seatNumber)
{
    SeatNode* newNode = new SeatNode(seatNumber);

    newNode->next = head;
    head = newNode;
}

void LinkedList::displayAvailableSeats()
{
    SeatNode* temp = head;

    cout << "\nAvailable Seats:\n";

    while (temp != nullptr)
    {
        cout << temp->seatNumber << " ";
        temp = temp->next;
    }

    cout << endl;
}