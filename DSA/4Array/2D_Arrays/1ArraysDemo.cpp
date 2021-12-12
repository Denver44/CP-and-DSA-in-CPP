#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int **array;
    array = new int *[n]; // int *[n] the address of pointer array of size n will be get store in array.

    for (int i = 0; i < n; i++)
    {
        array[i] = new int[m]; // as the address of new int[m] this will get store array[i]
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
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

    return 0;
}

//-------------------------------- USING VECTOR---------------------------//
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

    // Row is array.size();
    // Col is array[0].size();
    return 0;
}