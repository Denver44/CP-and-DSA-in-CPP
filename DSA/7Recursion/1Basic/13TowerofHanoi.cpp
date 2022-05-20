#include <iostream>
using namespace std;

void TOH(int n, char a, char b, char c)
{
    if (n == 0) // as if the number of disk will be zero then no need to move any diska from a to b or a to c just return.
    {
        return;
    }

    TOH(n - 1, a, c, b);
    cout << " Move " << n <<" disk from " << a << " to " << b << endl;
    TOH(n - 1, c, b, a);
}

int main()
{
    TOH(2, 'A', 'B', 'C'); // this is my fucntion which has three disk. first disk size 1 2 disk size 2 and 3rd one is 3.

    return 0;
} 