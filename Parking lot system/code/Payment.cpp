#include <bits/stdc++.h>
using namespace std;

#include "Payment.cpp"

class Payment
{
private:
    double amount;
    PaymentStatus status;
    time_t timeStamp;

public:
    bool virtual initiateTransaction() = 0;
};

class CashPayment : public Payment
{
public:
    bool initiateTransaction() override
    {
        // logic to initiate cash payment
        return true;
    }
};

class CardPayment : public Payment
{
public:
    bool initiateTransaction() override
    {
        // logic to initiate card payment
        return true;
    }
};

class UPI_Payment : public Payment
{
public:
    bool initiateTransaction() override
    {
        // logic to initiate UPI payment
        return true;
    }
};
