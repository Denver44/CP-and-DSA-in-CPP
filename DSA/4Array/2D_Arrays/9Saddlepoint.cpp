
#include <bits/stdc++.h>

using namespace std;

// SADDLE POINT
// saddle point means its value should be less in row-wise but its value should be highest in row wise.
// there is only one saddle point in a matrix.
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

    for (int i = 0; i < n; i++)
    {
        int svj = 0; // this is column so everytime for every row we start it from o col.
        for (int j = 1; j < n; j++)
        {
            if (array[i][j] < array[i][svj])
            {
                svj = j; //smallest value j.
            }
        }

        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (array[k][svj] > array[i][svj])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << array[i][svj];
            return 0;
        }
    }
    cout << "Invalid input";

    return 0;
}