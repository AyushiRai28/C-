#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student()
    {
        rollNo = 0;
        name = "";
        marks = 0;
    }

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}