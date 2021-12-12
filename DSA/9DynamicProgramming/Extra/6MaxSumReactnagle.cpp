#include <bits/stdc++.h>
using namespace std;

int kadane(int *arr, int n)
{
    int alltimbest = INT32_MIN;
    int currentBest = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentBest + arr[i] >= arr[i])
        {
            currentBest += arr[i];
        }
        else
        {
            currentBest = 0;
            currentBest += arr[i];
        }
        alltimbest = max(alltimbest, currentBest);
    }

    return alltimbest;
}

int main()
{
    int row, col;
    cin >> row >> col;
    int ans = INT32_MIN;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int *runningrow = new int[row];

    for (int left = 0; left < col; ++left)
    {
        for (int i = 0; i < row; ++i)
        {
            runningrow[i] = 0;
        }

        for (int right = left; right < col; right++)
        {
            for (int i = 0; i < row; ++i)
            {
                runningrow[i] += matrix[i][right];
            }

            ans = max(ans, kadane(runningrow, row));
        }
    }

    cout << ans << endl;
    return 0;
}
