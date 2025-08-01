#include <bits/stdc++.h>
using namespace std;

#include "Vehicle.cpp"

class ParkingSpot
{
private:
    int id;
    Vehicle *vehicle;
    bool isFree;

public:
    virtual bool assignVehicle(Vehicle *vehicle) = 0;

    virtual bool removeVehicle()
    {
        // logic

        return true;
    }
};

class bike_lot : public ParkingSpot
{
public:
    bool assignVehicle(Vehicle *vehicle) override
    {

        return false;
    }
};

class car_lot : public ParkingSpot
{
public:
    bool assignVehicle(Vehicle *vehicle) override
    {
        return true;
    }
};

class van_lot : public ParkingSpot
{
public:
    bool assignVehicle(Vehicle *vehicle) override
    {
        return true;
    }
};