// ******************************************* BITWISE OPERATORS****************************************//
// 1) & OPERATOR IF BOTH BIT IS TRUE THEN ONLY CONDITON WILL BE TRUE.
// 2) | OPERATOR IF ANYONE IS TRUE THE COMDITION WILL BE TRUE.
// 3) ^ OPERATOR THERE MUST BE ONE TRUE NA FALSE CONDTITON
// 4) ~ OPERATOR  IT IS UNARY OPERATOR IT WILL CHNAGE 1 TO 0 AND 0 TO 1
// 5) << OPERATOR IT WILL SHIFT ONE BIT BY 1 LEFT SIDE AND PUT ZERO IN THAT EMPTY PLACES
// 6) >> OPERATOR IT WILL SHIFT ONE BIT BY 1 RIGHT SIDE AND PUT ZERO IN THAT EMPTY PLACES
#include <iostream>
using namespace std;

int main()
{
    // LEFT SHIFT OPERTAOR (<<)

    int var = 5;
    cout << (var) << endl;
    cout << (var << 1) << endl;
    cout << (var << 2) << endl; // first it will shift it by 1 then again it will shift it by 1 so total 2
    cout << (var << 3) << endl;
    cout << (var << 4) << endl;
    cout << (var << 5) << endl;
    var = 160;
    // RIGHT SHIFT OPERTAOR (>>)

    cout << (var >> 1) << endl;
    cout << (var >> 2) << endl;
    cout << (var >> 3) << endl;
    cout << (var >> 4) << endl;
    cout << (var >> 5) << endl;

    if (1 & 1)
    {
        cout << "I think one of the condition is true thats why it executed" << endl;
    }
    else
    {
        cout << "All condition are false" << endl;
    }
     if (1 | 1)
    {
        cout << "I think one of the condition is true thats why it executed" << endl;
    }
    else
    {
        cout << "All condition are false" << endl;
    }

    return 0;
}