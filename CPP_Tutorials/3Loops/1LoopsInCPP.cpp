#include <iostream>
using namespace std;

int main()
{

    //-------------------------------------------------- FOR LOOP ------------------------------------------------/
    // Syntax:
    // for(initialization; condition; updateion)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //
    //     cout<<i<<endl;
    // }

    // ------------------------------------- USING BREAK IN FOR LOOP--------------------------------------
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i == 2)
    //         break; // the break will break the loop as soon as the above condition get satisfied.
    //     cout << i << " ";
    // }
    // cout << endl;

    // ------------------------------------- USING CONTINUE IN FOR LOOP--------------------------------------

    // for (int i = 1; i <= 10; i++)
    // {

    //     if (i == 2)
    //         continue; // this will help to skip that above iteration as soon it will find it.
    //     cout << i << " ";
    // }

    //----------------------------------------------------------- EXAMPLE OF INFINITE FOR LOOP------------------------------------------/
    // for (int i = 1; 34 <= 40; i++) //[5] here the condition is always true so the loop will be infinite.
    //     cout<<i<<endl;

    return 0;
}

/*
TYPES OF LOOP
There are three types of loops in C++:
1. For loop
2. While Loop
3. do-While Loop
4. for-each loop
/*