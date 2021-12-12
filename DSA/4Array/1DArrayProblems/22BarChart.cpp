#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
        if (a > max)
        {
            max = a;
        }
    }

    // we used the technquie and taken the out the max height
    // and then we compare woth our array
    for (int height = max; height >= 1; height--)
    {
        for (int i = 0; i < n; i++)
        {

            if (arr[i] >= height)
            {
                cout << "*\t";
            }
            else
            {

                cout << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}