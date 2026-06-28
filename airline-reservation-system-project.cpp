#include <iostream>
#include "Flight.h"

using namespace std;

int main()
{
    Flight flight;

    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << "   AIRLINE RESERVATION SYSTEM\n";
        cout << "====================================\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Search Passenger\n";
        cout << "4. Display Available Seats\n";
        cout << "5. Display All Passengers\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                flight.bookTicket();
                break;

            case 2:
                flight.cancelTicket();
                break;

            case 3:
                flight.searchPassenger();
                break;

            case 4:
                flight.displayAvailableSeats();
                break;

            case 5:
                flight.displayPassengers();
                break;

            case 6:
                cout << "\nThank You for using Airline Reservation System.\n";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(choice != 6);

    return 0;
}