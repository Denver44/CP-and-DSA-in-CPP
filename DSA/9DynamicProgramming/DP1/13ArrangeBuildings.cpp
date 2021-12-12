#include <iostream>
using namespace std;
// Include exclude Group.

// Same Fibonacci Series
// if we one Plot then it can be end at Building and Space.
// if we have two  plot then we can end Building to which the space of last plot and we can aatcha space with boht buliding and space also.

int ArrangeBuildings(int n)
{

    int end_with_Buildings = 1; // this will have legimate ways that no two building are consecutives.
    int end_with_Space = 1;     // we can make two consecutives space but not two building
    int new_with_space;

    for (int i = 2; i <= n; i++)
    {
        new_with_space = end_with_Buildings + end_with_Space;
        end_with_Buildings = end_with_Space;
        end_with_Space = new_with_space;
    }
    //  we can place the building total square(endwithbuildiding + endwithspace )

    return (end_with_Buildings + end_with_Space) * (end_with_Buildings + end_with_Space);
}

int main()
{
    int n = 6;
    cout << ArrangeBuildings(n) << endl;

    return 0;
}