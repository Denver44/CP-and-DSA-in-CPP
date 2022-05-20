#include <iostream>
using namespace std;

union Test1
{
    int x;
    float y;
};

union Test2
{
    int x;
    char bin[4];
};

int main()
{
    Test1 t1;
    t1.y = 1.1;
    cout << t1.x << '\n';

    Test2 t2;
    t2.x = 512;
    cout << (int)t2.bin[0] << " " << (int)t2.bin[1] << " "
         << (int)t2.bin[2] << " " << (int)t2.bin[3];
    return 0;
}