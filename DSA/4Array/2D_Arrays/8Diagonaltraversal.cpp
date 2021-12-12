
#include <bits/stdc++.h>

using namespace std;

// As we have to print the upper digonal part
// 00 01 02
// 10 11 12
// 20 21 22

// Answer
// 00
// 11
// 22
// 01
// 12
// 02

// watch the gap total gap is n-1;
//  and i alawys start from 0
// and we have to print j till n-1
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
    for (int gap = 0; gap < n; gap++)
    {
        for (int i = 0, j = gap; j < n; i++, j++)
        {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
}