#include <iostream>
using namespace std;

class Service;

// Vehicle Class
class Vehicle
{
private:
    int vehicleNo;
    string ownerName;

public:
    // Constructor
    Vehicle()
    {
        vehicleNo = 0;
        ownerName = "";
    }

    void getData()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNo;

        cout << "Enter Owner Name: ";
        cin >> ownerName;
    }

    void display()
    {
        cout << "Vehicle Number : " << vehicleNo << endl;
        cout << "Owner Name     : " << ownerName << endl;
    }

    friend class Service;

    // Destructor
    ~Vehicle()
    {
        cout << "Vehicle Object Destroyed" << endl;
    }
};

// Friend Class
class Service
{
public:
    void showService(Vehicle v)
    {
        cout << "\nService Details" << endl;
        cout << "Vehicle Number : " << v.vehicleNo << endl;
        cout << "Owner Name     : " << v.ownerName << endl;
    }
};

// Container Class
class Garage
{
private:
    Vehicle vehicles[2];

public:
    void getVehicles()
    {
        for(int i = 0; i < 2; i++)
        {
            cout << "\nEnter Details of Vehicle " << i + 1 << endl;
            vehicles[i].getData();
        }
    }

    void displayVehicles()
    {
        for(int i = 0; i < 2; i++)
        {
            cout << "\nVehicle " << i + 1 << endl;
            vehicles[i].display();
        }
    }
};

int main()
{
    // Dynamic Object
    Vehicle *v = new Vehicle;

    cout << "Dynamic Vehicle Object\n";
    v->getData();
    v->display();

    Service s;
    s.showService(*v);

    delete v;

    Garage g;

    cout << "\nGarage Records\n";
    g.getVehicles();
    g.displayVehicles();

    return 0;
}