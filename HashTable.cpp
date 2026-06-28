#include "HashTable.h"

HashTable::HashTable()
{
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
}

int HashTable::hashFunction(int id)
{
    return id % TABLE_SIZE;
}

void HashTable::insertPassenger(int id, string name, int age, int seat)
{
    int index = hashFunction(id);

    Passenger* newPassenger = new Passenger(id, name, age, seat);

    newPassenger->next = table[index];

    table[index] = newPassenger;
}

Passenger* HashTable::searchPassenger(int id)
{
    int index = hashFunction(id);

    Passenger* temp = table[index];

    while(temp != nullptr)
    {
        if(temp->passengerID == id)
        {
            return temp;
        }

        temp = temp->next;
    }

    return nullptr;
}

bool HashTable::deletePassenger(int id)
{
    int index = hashFunction(id);

    Passenger* temp = table[index];
    Passenger* prev = nullptr;

    while(temp != nullptr)
    {
        if(temp->passengerID == id)
        {
            if(prev == nullptr)
                table[index] = temp->next;
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

void HashTable::displayPassengers()
{
    cout << "\n===== Passenger List =====\n";

    for(int i = 0; i < TABLE_SIZE; i++)
    {
        Passenger* temp = table[i];

        while(temp != nullptr)
        {
            cout << "ID: " << temp->passengerID
                 << "  Name: " << temp->name
                 << "  Age: " << temp->age
                 << "  Seat: " << temp->seatNumber << endl;

            temp = temp->next;
        }
    }
}