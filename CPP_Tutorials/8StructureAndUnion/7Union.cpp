#include <iostream>
using namespace std;

/*
union is best for memory management we can mange our memory very easily
we cannot use all the three data types at one time, at one time we can use only one data type.
*/
typedef union money
{
    // here the size of union will be max of the data type which are declare in it as here int and float size is [max 4] and so the union size will 4.
    int price;
    char car;
    float pounds;
} mony;
int main()
{

    mony m1;
    cout << "The size of Union Money is " << sizeof(mony) << endl;
    m1.price = 34;
    m1.car = 'c';
    cout << m1.price << endl;

    return 0;
}
