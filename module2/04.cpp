#include <iostream>
using namespace std;

class Student
{
public:
    // Constructor
    Student()
    {
        cout << "Constructor Called" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << "Processing Student Results..." << endl;

    return 0;
}