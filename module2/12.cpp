#include <iostream>
using namespace std;

class Area
{
public:
    // Area of Circle
    float area(float r)
    {
        return 3.14 * r * r;
    }

    // Area of Triangle
    float area(float b, float h)
    {
        return 0.5 * b * h;
    }

    // Area of Box (Rectangle)
    int area(int l, int w)
    {
        return l * w;
    }
};

int main()
{
    Area a;

    float radius, base, height;
    int length, width;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    cout << "Enter Base and Height of Triangle: ";
    cin >> base >> height;

    cout << "Enter Length and Width of Box(Rectangle): ";
    cin >> length >> width;

    cout << "\nArea of Circle = " << a.area(radius) << endl;
    cout << "Area of Triangle = " << a.area(base, height) << endl;
    cout << "Area of Box(Rectangle) = " << a.area(length, width) << endl;

    return 0;
}