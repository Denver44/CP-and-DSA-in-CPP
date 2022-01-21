#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// include Exclude type Question
int maxMoneyLooted(int *arr, int n)
{
    int include = 0;
    int exclude = 0;
    for (int i = 0; i < n; i++)
    {
        int newinclude = exclude + arr[i];
        int newexclude = max(include, exclude);
        include = newinclude;
        exclude = newexclude;
    }

    return max(include, exclude)
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxMoneyLooted(arr, n);

    delete[] arr;
}