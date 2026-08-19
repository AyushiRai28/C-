// freinds function

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 85;
    }

    friend void displayMarks(Student);
};

void displayMarks(Student s)
{
    cout << "Student Marks = " << s.marks << endl;
}

int main()
{
    Student s;
    displayMarks(s);

    return 0;
}


// //friends class
// #include <iostream>
// using namespace std;

// class Result;

// class Student
// {
// private:
//     int marks;

// public:
//     Student()
//     {
//         marks = 90;
//     }

//     friend class Result;
// };

// class Result
// {
// public:
//     void display(Student s)
//     {
//         cout << "Student Marks = " << s.marks << endl;
//     }
// };

// int main()
// {
//     Student s;
//     Result r;

//     r.display(s);

//     return 0;
// }