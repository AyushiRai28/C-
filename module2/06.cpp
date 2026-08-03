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

    void displayData()
    {
        cout << "\nEmployee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Salary        : " << salary << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    Employee emp[100];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Employee " << i + 1 << endl;
        emp[i].getData();
    }

    cout << "\n----- Employee Details -----" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].displayData();
    }

    return 0;
}