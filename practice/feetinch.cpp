#include <iostream>
#include <string>
using namespace std;

class Distance
{
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = feet * 0.833;
    }

    Distance(int x)
    {
        feet = x;
        inch = x * 0.833;
    }

    Distance(Distance &_x)
    {
        feet = _x.feet;
        inch = _x.inch;
    }
};

int main()
{
    Distance d1;
    Distance d2(5);
    Distance d3(d2);

    return 0;
}