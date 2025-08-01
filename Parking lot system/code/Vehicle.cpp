#include <bits/stdc++.h>

using namespace std;

class Vehicle
{
private:
    string VehicleNo;
    ParkingTicket *ticket;

public
    virtual void assignTicket(ParkingTicket *ticket) = 0;
};

class Car : public Vehicle
{
public:
    void assignTicket(ParkingTicket *ticket) override
    {
    }
};

class Bike : public Vehicle
{
public:
    void assignTicket(ParkingTicket *ticket) override
    {
    }
};

class Van : public Vehicle
{
public:
    void assignTicket(ParkingTicket *ticket) override
    {
    }
};
