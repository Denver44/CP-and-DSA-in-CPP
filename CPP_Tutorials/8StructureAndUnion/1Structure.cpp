#include <iostream>
#include <string>
using namespace std;

/*
 Structure is used a user defined data types we can store different types of data types in it.
*/

struct book
{
    string title;
    int pages;
    float price;
};

typedef struct employee
{
    int eId;
    char favChar;
    long double salary;
} emp; // here  as we have used typedef function so the name of this datatype is now ep from struct employee.

void forBook();
void forEmployee();
book input();
void display(book const &);

int main()
{
    // forBook();
    forEmployee();

    return 0;
}

book input()
{
    book b;
    fflush(stdin); // This is method when u r taking whole sentence in input as it clear the stored data in buffer memory.
    cout << "Enter the name of the book" << endl;
    getline(cin, b.title);
    cout << "Enter the pages of the book" << endl;
    cin >> b.pages;
    fflush(stdin);
    cout << "Enter the price of the book" << endl;
    cin >> b.price;
    return b;
}

void display(book const &b)
{
    cout << "The name of the book " << b.title << " its price is " << b.price << " and total pages are " << b.pages << endl;
}

void forBook()
{
    book b1, b2;
    b1 = input();
    b2 = input();
    display(b1);
    display(b2);
}
void forEmployee()
{
    emp harry;     // here the type def function is used.
    harry.eId = 1; // here dot operator is used to assign te value
    harry.favChar = 'c';
    harry.salary = 120000;
    cout << "Harry Details is " << harry.eId << " " << harry.favChar << " " << harry.salary << endl;

    struct employee steve = {2, 'd', 5000}; // this is also another way we can assign the value in the structure.
    cout << "Steve Details is " << steve.eId << " " << steve.favChar << " " << steve.salary << endl;

    struct employee bill = {.eId = 3, .favChar = 'm', .salary = 15000}; // Designated Initialization:
    cout << "Bill Details is " << bill.eId << " " << bill.favChar << " " << bill.salary << endl;

    struct employee jonas = {.eId = 4, .favChar = 'j'};
    cout << "Jonas Details is " << jonas.eId << " " << jonas.favChar << " " << jonas.salary << endl;

    cout << "The Size of Struct Employee " << sizeof(emp) << endl;
}
