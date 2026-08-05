

#include <iostream>
using namespace std;

//---------- Student Class ----------
class Details
{
private:
    char name[30];
    char regNo[20];

public:
    void input();
    void display();
};

//---------- Marks Class ----------
class Marks
{
private:
    int maths, physics, cpp, python;
    int total;
    float percentage;
    char grade;

public:
    void input();
    void calculate();
    void display();
};

//---------- Student Member Functions ----------
void Details::input()
{
    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Registration Number: ";
    cin >> regNo;
}

void Details::display()
{
    cout << "\n===============================" << endl;
    cout << "      STUDENT DETAILS" << endl;
    cout << "------------------------------" << endl;
    cout << "Name                : " << name << endl;
    cout << "Registration Number : " << regNo << endl;
    cout << "------------------------------" << endl;
}

//---------- Marks Member Functions ----------
void Marks::input()
{
    cout << "\nEnter Marks:" << endl;

    cout << "Mathematics : ";
    cin >> maths;

    cout << "Physics     : ";
    cin >> physics;

    cout << "C++         : ";
    cin >> cpp;

    cout << "Python      : ";
    cin >> python;
}

void Marks::calculate()
{
    total = maths + physics + cpp + python;
    percentage = total / 4.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';
}

void Marks::display()
{
    cout << "\n==================================" << endl;
    cout << "           MARKSHEET" << endl;
    cout << "----------------------------------" << endl;
    cout << "| Subject       | Marks          |" << endl;
    cout << "----------------------------------" << endl;
    cout << "| Mathematics   | " << maths << "             |"<<endl;
    cout << "| Physics       | " << physics << "             |"<<endl;
    cout << "| C++           | " << cpp << "             |"<<endl;
    cout << "| Python        | " << python << "             |"<<endl;
    cout << "----------------------------------" << endl;
    cout << "| Total         | " << total << "            |"<<endl;
    cout << "| Percentage    | " << percentage << "%" << "          |"<<endl;
    cout << "| Grade         | " << grade <<"              |"<< endl;
    cout << "==================================" << endl;
}

//---------- Main Function ----------
int main()
{
    Details d1;
    Marks m1;
    
    cout << "\n==========================================" << endl;
cout << "         VIT BHOPAL UNIVERSITY" << endl;
cout << "      MARKSHEET ACADEMIC YEAR(2026-27)" << endl;
cout << "==========================================" << endl;

    d1.input();
    m1.input();

    m1.calculate();

    d1.display();
    m1.display();

    return 0;
}