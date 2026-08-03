#include <iostream>
using namespace std;

class Patient
{
private:
    int patientId;
    string patientName;

public:
    void getData()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cout << "Enter Patient Name: ";
        cin >> patientName;
    }

    void displayData()
    {
        cout << "\n----- Patient Details -----" << endl;
        cout << "Patient ID   : " << patientId << endl;
        cout << "Patient Name : " << patientName << endl;
    }
};

int main()
{
    // Dynamic object creation
    Patient *p = new Patient;

    p->getData();
    p->displayData();

    // Memory deallocation
    delete p;

    cout << "\nMemory Released Successfully." << endl;

    return 0;
}