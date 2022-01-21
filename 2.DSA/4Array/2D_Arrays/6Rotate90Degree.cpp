
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // only upper triangle.
        {

            // TRANSPOSE

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}