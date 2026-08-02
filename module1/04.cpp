#include <iostream>
using namespace std;

// Base Class
class Payment
{
public:
    virtual void pay()
    {
        cout << "Processing Payment..." << endl;
    }
};

// Derived Class Credit Card
class CreditCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Credit Card." << endl;
    }
};

// Derived Class Debit Card
class DebitCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Debit Card." << endl;
    }
};

// Derived Class UPI
class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using UPI." << endl;
    }
};

// Derived Class Net Banking
class NetBanking : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Net Banking." << endl;
    }
};

int main()
{
    Payment *p;

    CreditCard c;
    DebitCard d;
    UPI u;
    NetBanking n;

    p = &c;
    p->pay();

    p = &d;
    p->pay();

    p = &u;
    p->pay();

    p = &n;
    p->pay();

    return 0;
}