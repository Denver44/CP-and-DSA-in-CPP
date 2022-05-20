#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 9, int c = 8) // default argument.
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData()
    {
        cout << "The value of data1 is " << data1 << ", for data 2 is " << data2 << " and for data 3 " << data3 << endl;
    }
};

int main()
{
    Simple s(12, 13);
    s.printData();
    return 0;
}
