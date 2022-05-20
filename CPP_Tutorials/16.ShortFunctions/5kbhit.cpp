#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    while (!kbhit())
    {
        cout << "You havent press any key" << endl;
    }

    return 0;
}

// It will run untill we dont press any key.
// as we press any non zero value it will get 0 by not opetor so condition fail and loop stop.