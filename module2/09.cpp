#include <iostream>
using namespace std;

class Book
{
private:
    int bookId;
    string bookName;

public:
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void display()
    {
        cout << "Book ID   : " << bookId << endl;
        cout << "Book Name : " << bookName << endl;
    }
};

class Library
{
private:
    Book books[3];     // Container class

public:
    void getBooks()
    {
        for(int i = 0; i < 3; i++)
        {
            cout << "\nEnter Details of Book " << i + 1 << endl;
            books[i].getData();
        }
    }

    void displayBooks()
    {
        cout << "\n----- Book Details -----" << endl;

        for(int i = 0; i < 3; i++)
        {
            cout << "\nBook " << i + 1 << endl;
            books[i].display();
        }
    }
};

int main()
{
    Library l;

    l.getBooks();
    l.displayBooks();

    return 0;
}