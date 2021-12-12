#include <iostream>
using namespace std;
// Here the number is starting from one so we found the missing number easily.
int natural(int n)
{

    if (n > 0)
    {
        return natural(n - 1) + n;
    }

    return 0;
}

int main()
{
    
    int arr[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};

    int n = arr[10];
    int arrsum = 0;
    int sum = natural(n);

    for (int i = 0; i < 11; i++)
    {
        arrsum = arrsum + arr[i];
    }

    cout << "The missing element is " << (sum - arrsum);
    return 0;
}
