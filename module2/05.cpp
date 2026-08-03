#include <iostream>
using namespace std;

class Shape
{
private:
    int length;
    int breadth;

public:
    // Parameterized Constructor
    Shape(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Copy Constructor
    Shape(const Shape &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }

    void display()
    {
        cout << "Length  : " << length << endl;
        cout << "Breadth : " << breadth << endl;
    }
};

int main()
{
    Shape s1(10, 20);

    // Copy Constructor Called
    Shape s2 = s1;

    cout << "Original Object" << endl;
    s1.display();

    cout << "\nCopied Object" << endl;
    s2.display();

    return 0;
}