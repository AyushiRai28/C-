#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter Customer ID: ";
        cin >> id;

        cout << "Enter Customer Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Customer ID   : " << id << endl;
        cout << "Customer Name : " << name << endl;
    }
};

// Derived Class
class Customer : public Person
{
public:
    void getCustomer()
    {
        getData();
    }

    void displayCustomer()
    {
        display();
    }
};

class Product
{
private:
    int productId;
    string productName;
    float price;

public:
    void getProduct()
    {
        cout << "\nEnter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct()
    {
        cout << "\nProduct ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
    }
};

class Order
{
private:
    int orderId;
    int quantity;

public:
    void getOrder()
    {
        cout << "\nEnter Order ID: ";
        cin >> orderId;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayOrder()
    {
        cout << "\nOrder ID : " << orderId << endl;
        cout << "Quantity : " << quantity << endl;
    }
};

int main()
{
    Customer c1;
    Product p1;
    Order o1;

    cout << "Enter Customer Details\n";
    c1.getCustomer();

    p1.getProduct();

    o1.getOrder();

    cout << "\n----- Customer Details -----\n";
    c1.displayCustomer();

    cout << "\n----- Product Details -----\n";
    p1.displayProduct();

    cout << "\n----- Order Details -----\n";
    o1.displayOrder();

    return 0;
}