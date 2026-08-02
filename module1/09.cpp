#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "ID   : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

// Derived Class Doctor
class Doctor : public Person
{
public:
    void displayDoctor()
    {
        cout << "\n----- Doctor Details -----\n";
        display();
    }
};

// Derived Class Administrator
class Administrator : public Person
{
public:
    void displayAdmin()
    {
        cout << "\n----- Administrator Details -----\n";
        display();
    }
};

// Patient Class (Encapsulation)
class Patient
{
private:
    int patientId;
    string patientName;
    string disease;

public:
    void getPatient()
    {
        cout << "\nEnter Patient ID: ";
        cin >> patientId;

        cout << "Enter Patient Name: ";
        cin >> patientName;

        cout << "Enter Disease: ";
        cin >> disease;
    }

    void displayPatient()
    {
        cout << "\n----- Patient Details -----\n";
        cout << "Patient ID   : " << patientId << endl;
        cout << "Patient Name : " << patientName << endl;
        cout << "Disease      : " << disease << endl;
    }
};

int main()
{
    Doctor d;
    Administrator a;
    Patient p;

    cout << "Enter Doctor Details\n";
    d.getData();

    cout << "\nEnter Administrator Details\n";
    a.getData();

    p.getPatient();

    d.displayDoctor();
    a.displayAdmin();
    p.displayPatient();

    return 0;
}