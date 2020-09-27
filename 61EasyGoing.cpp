#include <iostream>
#include <algorithm>
using namespace std;

void bubblesort(int *arr, int SIZE)
{

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bubblesort(arr, n);
        int x = abs(n - m);
        int max = 0;
        int min = 0;

        for (int i = 0; i < x; i++)
        {
            min = min + arr[i];
        }
        for (int i = n - 1; i >= n - x; i--)
        {
            max = max + arr[i];
        }

        cout << max - min << endl;
    }

    return 0;
}


