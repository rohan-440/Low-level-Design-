#include <bits/stdc++.h>
using namespace std;

#include "ParkingTicket.cpp"
#include "Address.cpp"
#include "Entrance.cpp"
#include "Exit.cpp"
#include "Vehicle.cpp"

class Parking_lot
{
private:
    int id;
    string name;
    Address address;
    Entrance entrance;
    Exit exit;

public:
    ParkingTicket getParkingTicket(Vehicle *vehicle)
    {
        // logic to get parking ticket for the vehicle
        ParkingTicket ticket;
        return ticket;
    }

    bool isFull()
    {
        // logic to check if the parking lot is full
        return false; // placeholder
    }
};