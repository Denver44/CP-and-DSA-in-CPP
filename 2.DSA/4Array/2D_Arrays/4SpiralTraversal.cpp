
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> array(n, vector<int>(m));

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int minrow = 0;
    int mincol = 0;
    int maxrow = n - 1;
    int maxcol = m - 1;
    int tot = n * m;
    int count = 0;

    while (count != tot)
    {

        for (int i = minrow; i <= maxrow && count < tot; i++)
        {
            cout << array[i][mincol] << endl;
            count++;
        }
        mincol++;
        for (int i = mincol; i <= maxcol && count < tot; i++)
        {
            cout << array[maxrow][i] << endl;
            count++;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow && count < tot; i--)
        {
            cout << array[i][maxcol] << endl;
            count++;
        }
        maxcol--;
        for (int i = maxcol; i >= mincol && count < tot; i--)
        {
            cout << array[minrow][i] << endl;
            count++;
        }
        minrow++;
    }
    return 0;
}