// Solution 1

#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n)
{
    T min = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "Minimum value = " << findMin(arr, n);

    return 0;
}


// Solution 2

#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if(top == 9)
        {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top--] << endl;
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }

        for(int i=top; i>=0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();

    cout << "After Pop: ";
    s.display();

    return 0;
}


// solution 3

#include <iostream>
using namespace std;

template <class T>
void swapNum(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapNum(a, b);

    cout << "After swapping: " << a << " " << b;

    return 0;
}