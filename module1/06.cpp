#include <iostream>
using namespace std;

// Inline function
inline int square(int n)
{
    return n * n;
}

// Function with default argument
int power(int base, int exp = 2)
{
    int result = 1;

    for (int i = 1; i <= exp ; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square = " << square(num) << endl;

    cout << "Power (default exponent) = " << power(num) << endl;

    cout << "Power (exponent 3) = " << power(num, 3) << endl;

    return 0;
}