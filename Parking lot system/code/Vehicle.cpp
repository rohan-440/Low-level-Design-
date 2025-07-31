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
