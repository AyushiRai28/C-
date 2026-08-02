#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
protected:
    int vehicleNo;
    string vehicleName;

public:
    void getData()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNo;

        cout << "Enter Vehicle Name: ";
        cin >> vehicleName;
    }

    void display()
    {
        cout << "Vehicle Number : " << vehicleNo << endl;
        cout << "Vehicle Name   : " << vehicleName << endl;
    }

    virtual void calculateRent()
    {
        cout << "Rental Charge" << endl;
    }
};

// Derived Class Car
class Car : public Vehicle
{
public:
    void calculateRent()
    {
        int days;
        cout << "Enter Rental Days: ";
        cin >> days;

        cout << "Car Rent = " << days * 1000 << endl;
    }
};

// Derived Class Bike
class Bike : public Vehicle
{
public:
    void calculateRent()
    {
        int days;
        cout << "Enter Rental Days: ";
        cin >> days;

        cout << "Bike Rent = " << days * 500 << endl;
    }
};

// Derived Class Truck
class Truck : public Vehicle
{
public:
    void calculateRent()
    {
        int days;
        cout << "Enter Rental Days: ";
        cin >> days;

        cout << "Truck Rent = " << days * 2000 << endl;
    }
};

int main()
{
    Vehicle *v;

    Car c;
    Bike b;
    Truck t;

    cout << "Car Details\n";
    c.getData();
    c.display();
    v = &c;
    v->calculateRent();

    cout << "\nBike Details\n";
    b.getData();
    b.display();
    v = &b;
    v->calculateRent();

    cout << "\nTruck Details\n";
    t.getData();
    t.display();
    v = &t;
    v->calculateRent();

    return 0;
}