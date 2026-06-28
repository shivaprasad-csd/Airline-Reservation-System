#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include "Passenger.h"

using namespace std;

const int TABLE_SIZE = 10;

class HashTable
{
private:
    Passenger* table[TABLE_SIZE];

public:
    HashTable();

    int hashFunction(int id);

    void insertPassenger(int id, string name, int age, int seat);

    Passenger* searchPassenger(int id);

    bool deletePassenger(int id);

    void displayPassengers();
};

#endif