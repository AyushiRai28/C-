#include <iostream>
using namespace std;

int power(int base, int exp = 2)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Square = " << power(num) << endl;

    cout << "Cube = " << power(num, 3) << endl;

    return 0;
}