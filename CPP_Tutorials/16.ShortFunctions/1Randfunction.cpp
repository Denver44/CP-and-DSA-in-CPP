
// rand function example without using srand() function
// #include <iostream>
// #include <cstdlib> // this library needed for generating diffrent number.
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 10; i++)
//     {
//         cout << "The Random number genrated by rand() function is " << rand() << endl;
//         As here we dont have use the srand() function so it will generate the same number as many time we execute this loop.
//          srand() function is needed so that the rand function genrete different number as the second changes.
//     }

//     return 0;
// }

//  rand function example with using srand() function

#include <iostream>
#include <ctime>   // this library needed for generating diffrent number as the time chnages and this for time date fucntion library..
#include <cstdlib> // this library needed for generating diffrent number.
using namespace std;

int main()
{
    srand(time(0)); // as here we have initialize it with srand(time(0)) so it will generate diffrent every time.

    cout << "The Random number genrated by rand() function is " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << " " << 1 + rand() % 3; // as we have use %3 so it will generate number from 0 1 and 2 then it will add 1 to it.
    }
    cout << endl;
    srand(1); // it will generate the same number everytime so we use time(0) so that it generate everytime different number.
    for (int i = 0; i < 10; i++)
    {
        cout << " " << rand() % 100;
    }

    return 0;
}
