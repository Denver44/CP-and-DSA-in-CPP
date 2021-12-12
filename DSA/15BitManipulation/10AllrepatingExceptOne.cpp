#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xxor = 0;
    for (int i = 0; i < n; i++)
    {
        xxor = xxor ^ arr[i];
    }
    cout << xxor << endl;

    return 0;
}