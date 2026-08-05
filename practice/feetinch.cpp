#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = feet * 12;
    }

    Distance(int x)
    {
        feet = x;
        inch = x * 12;
    }

    Distance(Distance &x)
    {
        feet = x.feet;
        inch = x.inch;
    }

    void display()
    {
        cout << "Feet = " << feet << endl;
        cout << "Inch = " << inch << endl;
    }
};

int main()
{
    Distance d1;
    Distance d2(6);
    Distance d3(d2);

    d1.display();
    d2.display();
    d3.display();

    return 0;
}