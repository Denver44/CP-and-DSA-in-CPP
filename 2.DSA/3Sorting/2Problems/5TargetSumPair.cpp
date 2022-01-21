#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int target;
    cin >> target;
    sort(arr.begin(), arr.end());

    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            cout << arr[i] << ", " << arr[j] << endl;
            i++;
            j--;
        }
    }

    return 0;
}
