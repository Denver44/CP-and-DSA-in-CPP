#include <bits/stdc++.h>
using namespace std;

void basicOfBitSet()
{

    // We can make bitset of any size 10^6 100 and many more.
    bitset<32> bitOne(5);
    cout << bitOne << endl;
    bitset<64> bitTwo(5);
    cout << bitTwo << endl;
}

void OnAndOffbit()
{
    // Now setting a bit On or off
    bitset<8> b(8);
    cout << b << endl;
    b[0] = 1;
    b[3] = 0;
    b.set(7);
    cout << b << endl;
    b.set(6);
    cout << b << endl;
}

void bitLogic()
{
    bitset<8> b1(8);
    bitset<8> b2(8);
    cout << (b1 & b2) << endl;
    cout << (b1 | b2) << endl;
    cout << (b1 ^ b2) << endl;
    cout << (b1 == b2) << endl;
}

void bitFunction()
{

    bitset<8> b1(8);
    cout << b1.count() << endl;
    cout << b1.flip() << endl;

    bitset<32> b3("1010"); // we can also pass a astring
    cout << b3 << endl;

    cout << !b3.none() << endl; // we have to !b3.none()  to check is there any bit set if it then return 1.
    bitset<32> b4("10");
}

int main()
{
    basicOfBitSet();
    OnAndOffbit();
    bitLogic();
    bitFunction();
    return 0;
}