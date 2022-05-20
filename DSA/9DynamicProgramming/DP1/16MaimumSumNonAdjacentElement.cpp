#include <iostream>
using namespace std;
// Include exclude Group.
int solve(int *arr, int size)
{
    int include[size];
    int exclude[size];
    include[0] = arr[0];
    exclude[0] = 0;

    for (int i = 1; i < size; i++)
    {
        include[i] = exclude[i - 1] + arr[i];
        exclude[i] = max(include[i - 1], exclude[i - 1]);
    }

    int value = max(include[size - 1], exclude[size - 1]);

    return value;
}

int main()
{
    int arr[6] = {5, 10, 10, 100, 5, 6};
    int n = 6;
    cout << "The answer is " << solve(arr, n);
    return 0;
}