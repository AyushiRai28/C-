// A college plans to replace its existing procedural student record system with an object-oriented system. Analyze the limitations of the procedural approach and justify the need for object-oriented programming. Design suitable classes and objects for the system, and write a basic C++ program to demonstrate their implementation.

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int studentID;
    string name;
    string course;
    int semester;
    float marks;

public:
    void getData()
    {
        cout << "Enter Student ID: ";
        cin >> studentID;

        cin.ignore();

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Course: ";
        cin >> course;

        cout << "Enter Semester: ";
        cin >> semester;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Student ID : " << studentID << endl;
        cout << "Name       : " << name << endl;
        cout << "Course     : " << course << endl;
        cout << "Semester   : " << semester << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}