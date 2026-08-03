#include <iostream>
using namespace std;

class Product
{
private:
    int productId;
    string productName;
    float price;

public:
    // Parameterized Constructor
    Product(int id, string name, float p)
    {
        productId = id;
        productName = name;
        price = p;
    }

    void display()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 55000);
    Product p2(102, "Mouse", 1200);

    p1.display();
    p2.display();

    return 0;
}