#include <iostream>
using namespace std;

int main()
{

    // Syntax:
    // while(condition)  //use this loop when u dont know the exact number if time u want to execute.
    //     C++ statements;
    
    //----------------------Printing 1 to 40 using while loop-----------------------------------
    int i = 1;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }

    //---------------- EXAMPLE OF INFINITE WHILE LOOP -------------
    // int i = 1;
    // while (true) //[9] here the while loop will be infinite as the condition is never failing.
    //     cout << i++ << endl;

    return 0;
}
