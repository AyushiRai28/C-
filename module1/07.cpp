#include <iostream>
using namespace std;

// Pass-by-reference function
void updateSalary(int &salary)
{
    salary = salary + 5000;
}

// Function returning reference
int& highestSalary(int &s1, int &s2)
{
    if (s1 > s2)
        return s1;
    else
        return s2;
}

int main()
{
    int salary1, salary2;

    cout << "Enter Salary of Employee 1: ";
    cin >> salary1;

    cout << "Enter Salary of Employee 2: ";
    cin >> salary2;

    // Update salary using pass-by-reference
    updateSalary(salary1);

    cout << "\nSalary of Employee 1 after increment = " << salary1 << endl;

    // Modify highest salary using returned reference
    highestSalary(salary1, salary2) = 100000;

    cout << "\nAfter modifying highest salary:" << endl;
    cout << "Employee 1 Salary = " << salary1 << endl;
    cout << "Employee 2 Salary = " << salary2 << endl;

    return 0;
}