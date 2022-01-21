#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void printPattern(int n)
{
    int size = (2 * n - 1);
    vector<vector<int>> arr(size + 1, vector<int>(size + 1));
    int start = 1;
    int end = size;

    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end) // this block is not necessary
                {
                    arr[i][j] = n;
                }
            }
        }
        --n;
        start++;
        end--;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
