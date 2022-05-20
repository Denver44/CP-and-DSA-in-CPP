
#include <iostream>

using namespace std;
int main()
{

    //------------   DO WHILE LOOP -------------------
    // Syntax:
    // do // here in the do while the loop will be executed for (atleast one time) .It will print whatever is written in do.
    // {
    //     C++ statements;
    // }while(condition);

    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    //-------------  MULTIPLICATION TABLE EXAMPLE USING DO - WHILE LOOP --------------------

    int n;
    int a = 1;
    cout << " The multiplication table of 6 is " << endl;

    do
    {
        n = 6 * a;
        a++;
        cout << n << endl;
    } while (n != 60); // as the value of n get increase above the 60 the condition will false and then loop will be not executed.

    return 0;
}
