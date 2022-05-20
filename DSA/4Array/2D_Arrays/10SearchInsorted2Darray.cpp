
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> array(n, vector<int>(n));

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            cin >> array[i][j];
        }
    }

    int x;
    cin >> x;
    // this value i and j is the first row and the last value of 1st row. means right top.
    int i = 0;
    int j = array[0].size() - 1;

    while (i < array.size() && j >= 0)
    {
        if (array[i][j] == x)
        {
            cout << i << endl;
            cout << j << endl;
            return 0;
        }
        else if (x < array[i][j])
        {
            j--; // thne go in col and search it
        }
        else
        {
            i++; // then chnage the row and search it.
        }
    }

    cout << "Not Found";

    return 0;
}