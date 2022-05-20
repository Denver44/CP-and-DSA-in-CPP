#include <iostream>
#include <string>

using namespace std;

struct book
{
    // private means it is secure and it can only be access through the member function of the struct book object.
private:
    char title[20];
    int pages;
    float price;

public:
    void input() // member function of book
    {
        fflush(stdin);
        cout << "Enter the name of the book" << endl;
        // getline(cin, title);
        cin.get(title, 20);

        cout << "Enter the pages of the book" << endl;
        cin >> pages;
        fflush(stdin);
        cout << "Enter the price of the book" << endl;
        cin >> price;
    }
    void display()
    {
        cout << "The name of the book " << title << " its price is " << price << " and total pages are " << pages << endl;
    }
};

int main()
{
    book b1, b2; // b1 and b2 can be called as object of book.

    // strcpy(b1.title, "C"); // as we cannot access it through main function because title,page and price is now private member, so they can only be used by it member function.
    // b1.pages = 500;
    // b1.price = 560;
    b1.input();
    b2.input();
    b1.display();
    b2.display();
    return 0;
}
