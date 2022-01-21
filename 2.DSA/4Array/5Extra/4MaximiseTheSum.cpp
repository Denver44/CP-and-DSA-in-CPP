#include <bits/stdc++.h>
using namespace std;
long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    long maxSum = 0, sum1 = 0, sum2 = 0;
    long aPointer = 0, bPointer = 0;
    while (aPointer < m && bPointer < n)
    {
        if (ar1[aPointer] < ar2[bPointer])
            sum1 += ar1[aPointer++];
        else if (ar2[bPointer] < ar1[aPointer])
            sum2 += ar2[bPointer++];

        else
        {
            sum1 += ar1[aPointer++];
            sum2 += ar2[bPointer++];
            maxSum += max(sum1, sum2);
            sum1 = sum2 = 0;
        }
    }

    while (aPointer < m)
        sum1 += ar1[aPointer++];
    while (bPointer < n)
        sum2 += ar2[bPointer++];
    maxSum += max(sum1, sum2);
    return maxSum;
}

int main()
{
    int *a, *b, m, n, i;
    cin >> m;
    a = new int[m];
    for (i = 0; i < m; i++)
        cin >> a[i];
    cin >> n;
    b = new int[n];
    for (i = 0; i < n; i++)
        cin >> b[i];
    long ans = maxPathSum(a, b, m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}