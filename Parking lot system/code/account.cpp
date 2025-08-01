#include <bits/stdc++.h>
using namespace std;

#include "ParkingSpot.cpp"
#include "Entrance.cpp"
#include "Exit.cpp"

class Account
{
private:
    string userName;
    string email;
    string password;

public:
    virtual bool resetPassword() = 0;
};

class Admin : public Account
{
public:
    bool resetPassword() override
    {
        // logic to reset password
        return true;
    }

    bool addParkingSpot(ParkingSpot *spot)
    {
        // logic to add parking spot
        return true;
    }

    bool removeParkingSpot(ParkingSpot *spot)
    {
        // logic to remove parking spot
        return true;
    }

    bool addEntrance(Entrance *entrance)
    {
        // logic to add entrance
        return true;
    }

    bool addExit(Exit *exit)
    {
        // logic to add exit
        return true;
    }
};