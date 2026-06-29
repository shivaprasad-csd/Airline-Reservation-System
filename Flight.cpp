#include "Flight.h"

Flight::Flight()
{
    seats.initializeSeats(10);   // Total Seats = 10
}

void Flight::bookTicket()
{
    int id, age, seat;
    string name;

    cout << "\nPassenger ID : ";
    cin >> id;

    // Check if Passenger ID already exists
    if (passengers.searchPassenger(id) != nullptr)
    {
        cout << "Passenger ID already exists.\n";
        return;
    }

    // Clear the newline left by cin >> id
    cin.ignore();

    cout << "Passenger Name : ";
    getline(cin, name);

    cout << "Passenger Age : ";
    cin >> age;

    cout << "Seat Number (1-10) : ";
    cin >> seat;

    // Check if seat is available
    if (!seats.isSeatAvailable(seat))
    {
        cout << "Seat is already booked or invalid.\n";
        return;
    }

    // Book the seat
    seats.bookSeat(seat);

    // Store passenger details
    passengers.insertPassenger(id, name, age, seat);

    cout << "\nTicket Booked Successfully.\n";
}
void Flight::cancelTicket()
{
    int id;

    cout << "\nEnter Passenger ID : ";
    cin >> id;

    Passenger* p = passengers.searchPassenger(id);

    if(p == nullptr)
    {
        cout << "Passenger Not Found.\n";
        return;
    }

    int seat = p->seatNumber;

    passengers.deletePassenger(id);

    seats.cancelSeat(seat);

    cout << "\nBooking Cancelled Successfully.\n";
}

void Flight::searchPassenger()
{
    int id;

    cout << "\nEnter Passenger ID : ";
    cin >> id;

    Passenger* p = passengers.searchPassenger(id);

    if(p == nullptr)
    {
        cout << "Passenger Not Found.\n";
    }
    else
    {
        cout << "\nPassenger Details\n";
        cout << "------------------------\n";
        cout << "ID : " << p->passengerID << endl;
        cout << "Name : " << p->name << endl;
        cout << "Age : " << p->age << endl;
        cout << "Seat : " << p->seatNumber << endl;
    }
}

void Flight::displayAvailableSeats()
{
    seats.displayAvailableSeats();
}

void Flight::displayPassengers()
{
    passengers.displayPassengers();
}