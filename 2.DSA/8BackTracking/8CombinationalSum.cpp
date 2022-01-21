#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// For to get output in sorted orted and no duplictes
// First we sort the array then we remove all the duplictes
// Then use target sum subet using Recursion.

// It has minor chnage to target sum subset of recursion
// In that after adding the element we jump to next element or weather we dont add the element we still jump to next element.

// But here in this we add first element and dont jump to next we can use the element for infinte time.
// For second call we remove the first element we inserted in output array and then call to next elelemnt 
// So this way we dont get the duplictes.

void helper(int cursum, int n, int *arr, int sum, vector<int> output, vector<vector<int>> &ans)
{
    if (cursum > sum)
        return;

    if (n == 0)
    {
        if (cursum == sum)
            ans.push_back(output);

        return;
    }

    output.push_back(arr[0]);
    helper(cursum + arr[0], n, arr, sum, output, ans);
    output.pop_back();
    helper(cursum, n - 1, arr + 1, sum, output, ans);
}

vector<vector<int>> combinationSum(vector<int> &arr, int sum)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int *newarr = new int[arr.size()];
    newarr[0] = arr[0];
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] != arr[i])
            newarr[count++] = arr[i];
    }
    int n = count;
    vector<int> output;
    helper(0, n, newarr, sum, output, ans);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ar.push_back(x);
    }
    int sum;
    cin >> sum;
    vector<vector<int>> res = combinationSum(ar, sum);
    if (res.size() == 0)
    {
        cout << "Empty";
        return 0;
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i].size() > 0)
        {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
}