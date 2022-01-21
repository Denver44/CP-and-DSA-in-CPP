#include <bits/stdc++.h>
using namespace std;
//  as we have to find a targetsum subest and in subset we know there is two choice
// 1. Either come  // 2. or not come
void TargetSumSubsets(int *arr, int idx, string set, int sos, int tar)
{

    if (idx == 5) 
    {
        if (sos == tar)
        {
            cout << set << endl;
        }

        return;
    }

    TargetSumSubsets(arr, idx + 1, set + to_string(arr[idx]) + ", ", sos + arr[idx], tar);
    TargetSumSubsets(arr, idx + 1, set, sos, tar);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    TargetSumSubsets(arr, 0, "", 0, 70);

    return 0;
}
