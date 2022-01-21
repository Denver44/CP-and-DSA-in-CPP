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

    for (int col = 0; col < array[0].size(); col++)
    {
        if (col % 2 == 0)
        {
            for (int i = 0; i < array.size(); i++)
            {
                cout << array[i][col] << endl;
            }
        }

        else
        {
            for (int i = array.size() - 1; i >= 0; i--)
            {
                cout << array[i][col] << endl;
            }
        }
    }

    return 0;
}