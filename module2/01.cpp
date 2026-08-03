#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    float salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void updateSalary()
    {
        float increment;

        cout << "Enter Salary Increment: ";
        cin >> increment;

        salary = salary + increment;
    }

    void displayData()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Salary        : " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.getData();
    e1.updateSalary();
    e1.displayData();

    return 0;
}