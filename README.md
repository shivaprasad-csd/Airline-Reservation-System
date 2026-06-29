#  Airline Reservation System

##  Project Overview

The Airline Reservation System is a console-based application developed in **C++** using **Object-Oriented Programming (OOP)** concepts. The system allows users to book flight tickets, cancel bookings, search for passengers, and display available seats.

The project uses **Linked Lists** for seat management and **Hash Tables with Separate Chaining** for efficient passenger lookup.

---

##  Objectives

- Develop a console-based airline reservation system.
- Apply Object-Oriented Programming concepts.
- Implement Linked Lists for seat management.
- Implement Hash Tables using Separate Chaining.
- Provide fast passenger search operations.

---

##  Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Linked List
- Hash Table
- Separate Chaining
- Visual Studio Code
- Git & GitHub

---

##  Project Structure

```
Airline-Reservation-System/
│
├── main.cpp
├── Flight.h
├── Flight.cpp
├── Passenger.h
├── Passenger.cpp
├── LinkedList.h
├── LinkedList.cpp
├── HashTable.h
├── HashTable.cpp
└── README.md
```

---

##  Features

- Book a Flight Ticket
- Cancel a Ticket
- Search Passenger by Passenger ID
- Display Available Seats
- Display All Booked Passengers
- Prevent Duplicate Passenger IDs
- Efficient Passenger Lookup using Hash Tables
- Seat Management using Linked Lists

---

##  Data Structures Used

### Linked List

Used to manage available seats.

Operations:
- Insert Seat
- Delete Seat
- Search Seat
- Display Available Seats

### Hash Table

Used to store passenger information.

Operations:
- Insert Passenger
- Search Passenger
- Delete Passenger

Collision Handling:
- Separate Chaining

---

##  Classes Used

### Passenger
Stores passenger details.

Attributes:
- Passenger ID
- Name
- Age
- Seat Number

---

### LinkedList

Manages available seats.

Functions:
- Initialize Seats
- Book Seat
- Cancel Seat
- Display Seats

---

### HashTable

Stores passengers.

Functions:
- Insert Passenger
- Search Passenger
- Delete Passenger
- Display Passengers

---

### Flight

Connects the Linked List and Hash Table.

Functions:
- Book Ticket
- Cancel Ticket
- Search Passenger
- Display Available Seats
- Display All Passengers

---

##  How to Run

### Compile

```bash
g++ main.cpp Passenger.cpp LinkedList.cpp HashTable.cpp Flight.cpp -o airline
```

### Run (Windows)

```bash
.\airline.exe
```

---

##  Sample Menu

```
====================================
   AIRLINE RESERVATION SYSTEM
====================================

1. Book Ticket
2. Cancel Ticket
3. Search Passenger
4. Display Available Seats
5. Display All Passengers
6. Exit
```

---

##  Sample Output

### Booking a Ticket

```
Passenger ID : 101
Passenger Name : R shiva prasad
Passenger Age : 21
Seat Number : 5

Ticket Booked Successfully.
```

### Searching a Passenger

```
Passenger Details

ID : 101
Name : R shiva prasad
Age : 21
Seat : 5
```

### Cancelling a Ticket

```
Booking Cancelled Successfully.
```

---

##  Future Improvements

- Multiple Flights
- File Storage
- Login Authentication
- Seat Categories (Economy/Business)
- Ticket Price Calculation
- Flight Schedule Management

---

##  Concepts Demonstrated

- Object-Oriented Programming
- Classes and Objects
- Constructors
- Linked Lists
- Hash Tables
- Separate Chaining
- Dynamic Memory Allocation
- Menu-Driven Programming

---

##  Author

**Shiva prasad**

GitHub:
https://github.com/shivaprasad-csd

---

##  Acknowledgement

This project was developed as part of a Data Structures and Object-Oriented Programming learning project to demonstrate the practical use of Linked Lists and Hash Tables in a real-world Airline Reservation System.