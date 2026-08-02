#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int id;

public:
    void getPersonData()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "ID   : " << id << endl;
    }
};

// Derived Class Student
class Student : public Person
{
private:
    string course;
    int semester;

public:
    void getData()
    {
        getPersonData();

        cout << "Enter Course: ";
        getline(cin, course);

        cout << "Enter Semester: ";
        cin >> semester;
        cin.ignore();
    }

    void display()
    {
        cout << "\n----- Student Details -----\n";
        displayPerson();
        cout << "Course    : " << course << endl;
        cout << "Semester  : " << semester << endl;
    }
};

// Derived Class Faculty
class Faculty : public Person
{
private:
    string subject;
    float salary;

public:
    void getData()
    {
        getPersonData();

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void display()
    {
        cout << "\n----- Faculty Details -----\n";
        displayPerson();
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }
};

// Derived Class Administrative Staff
class AdminStaff : public Person
{
private:
    string department;
    string designation;

public:
    void getData()
    {
        getPersonData();

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Designation: ";
        getline(cin, designation);
    }

    void display()
    {
        cout << "\n----- Administrative Staff Details -----\n";
        displayPerson();
        cout << "Department  : " << department << endl;
        cout << "Designation : " << designation << endl;
    }
};

int main()
{
    Student s;
    Faculty f;
    AdminStaff a;

    cout << "Enter Student Details\n";
    s.getData();

    cout << "\nEnter Faculty Details\n";
    f.getData();

    cout << "\nEnter Administrative Staff Details\n";
    a.getData();

    s.display();
    f.display();
    a.display();

    return 0;
}