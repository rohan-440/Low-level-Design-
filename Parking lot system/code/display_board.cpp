#include <bits/stdc++.h>
using namespace std;

#include "ParkingSpot.cpp"

class DisplayBoard
{
private
    int id;
    map<string, List<ParkingSpot>> parkingSpots;

public:
    DisplayBoard(int id) : id(id) {}

    void addParkingSpot(const string &floorName, List<ParkingSpot> spot)
    {
        // logic
    }

    void showFreeSlot()
    {
    }
};