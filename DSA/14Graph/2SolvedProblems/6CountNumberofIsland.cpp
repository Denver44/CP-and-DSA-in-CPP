#include <bits/stdc++.h>
using namespace std;

void island(vector<vector<int>> arr, int i, int j, vector<vector<bool>> &visited)
{
    if (i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size() || arr[i][j] == 1 || visited[i][j] == true)
    {
        return;
    }

    visited[i][j] = true;
    island(arr, i - 1, j, visited); // top
    island(arr, i, j + 1, visited); // left
    island(arr, i, j - 1, visited); // right
    island(arr, i + 1, j, visited); // down
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    int count = 0; // this count actually helps to count the number of island.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (arr[i][j] == 0 && visited[i][j] == false)
            {
                island(arr, i, j, visited);
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
