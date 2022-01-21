#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    long long int n;
    cin >> n;

    double arr[13] = {0};

    for (int i = 1; i < 13; i++)
    {
        arr[i] = pow(10, i);
    }
    for (int i = 2; i < 13; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            arr[i] = arr[i] - arr[j];
        }
    }
    arr[1] = 9;
    long long int count = 0;
    for (int i = 1; i < 13; i++)
    {
        if (n - arr[i] >= 0)
        {
            count = count + arr[i] * i;
            n = n - arr[i];
        }
        else
        {
            count = count + n * i;
            break;
        }
    }
    cout << count << endl;

    return 0;
}