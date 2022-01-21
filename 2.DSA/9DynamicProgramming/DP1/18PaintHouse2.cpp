#include <bits/stdc++.h>
using namespace std;

// Include Exclude
// Least and Secondleast for m-colors.

int main()
{
    int n, color;
    cin >> n >> color;
    vector<vector<int>> arr(n, vector<int>(color));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < color; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<long>> dp(n, vector<long>(color));
    // this actually helps us and time saving.
    int least = INT32_MAX;
    int secondleast = INT32_MAX;

    for (int j = 0; j < color; j++)
    {
        dp[0][j] = arr[0][j];

        if (arr[0][j] <= least)
        {
            secondleast = least; // so now the secondleast will take lest value
            least = arr[0][j];   // and least will take new least value
        }
        else if (arr[0][j] <= secondleast) // if the number is bigger than least but smaller than secondleast.
            secondleast = arr[0][j];       // UPDATE it.
    }

    for (int i = 1; i < n; i++)
    {
        int nleast = INT32_MAX;       // new least
        int nsecondleast = INT32_MAX; // new secondleast.
        for (int j = 0; j < color; j++)
        {
            if (least == dp[i - 1][j])
            {
                dp[i][j] = arr[i][j] + secondleast;
            }
            else
            {
                dp[i][j] = arr[i][j] + least;
            }
            if (dp[i][j] <= nleast) // we are making the new least and new second least.
            {
                nleast = dp[i][j];
                nsecondleast = nleast;
            }
            else if (dp[i][j] <= nsecondleast)
            {
                nsecondleast = dp[i][j];
            }
        }

        least = nleast;
        secondleast = nsecondleast;
    }

    long min = INT32_MAX;
    for (int k = 0; k < color; k++)
    {
        if (dp[n - 1][k] < min)
            min = dp[n - 1][k];
    }
    cout << min;

    return 0;
}

/*
4
6
1 5 7 2 1 4
5 8 4 3 6 1
3 2 9 7 2 3
1 2 4 9 1 7
5
*/