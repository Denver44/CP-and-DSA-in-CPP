#include <iostream>
using namespace std;

class shop
{
private:
    int itemid[5], itemprice[5];
    int counter;

public:
    void initcounter();
    void purchaseItem();
    void getBill();
};

void shop::initcounter()
{
    counter = 0;
}

void shop::purchaseItem()
{
    cout << "Enter the Id of the item" << endl;
    cin >> itemid[counter]; // here the counter works as a indexing.
    cout << "Enter the price of the item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::getBill()
{
    for (int i = 0; i < counter; i++)
        cout << "The item id is:- " << itemid[i] << " The item price is :- " << itemprice[i] << endl;
}

int main()
{

    shop person1;
    cout << "Due to covid u can only purchase 5 Items" << endl;
    person1.initcounter();
    for (int i = 0; i < 5; i++)
        person1.purchaseItem();

    person1.getBill();

    shop person2;
    cout << "Due to covid u can only purchase 5 Items" << endl;
    person2.initcounter();
    for (int i = 0; i < 5; i++)
        person2.purchaseItem();

    person2.getBill();

    cout << "Address of Person 1 " << &person1 << " Address of Person 2 " << &person2 << endl;
    cout << "Sizeof of Person 1 " << sizeof person1 << " Sizeof of Person 2 " << sizeof person2 << endl;
    return 0;
}
