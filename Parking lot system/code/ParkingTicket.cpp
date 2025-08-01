#include <bits/stdc++.h>
using namespace std;

class ParkingTicket
{
private:
    int ticketNo;
    Date entryTime;
    Date exitTime;
    double amount;
    TicketStatus status;
    Vehicle *vehicle;
    Payment payment;
    Entrance *entrance;
    Exit *exit;
};