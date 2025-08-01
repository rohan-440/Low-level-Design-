#include <bits/stdc++.h>
using namespace std;

class ParkingRate
{
private:
    double hours;
    double rate;

public:
    void Calculate(double hours, double rate)
    {
        this->hours = hours;
        this->rate = rate;
    }
};