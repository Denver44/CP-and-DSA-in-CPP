#include <bits/stdc++.h>
using namespace std;
#define MI 1000000007
// Here we already store the  sum of product of subsests of number in an array.
int main()

{

    static const int N = 100005;
    static int ans[N];
    for (int i = 1; i < N; i++)
    {
        ans[i] = 1;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            ans[j] = (1LL * ans[j] * (i + 1)) % MI;
        }
    }

    for (int i = 1; i < N; i++)
    {
        ans[i] = (ans[i] + MI - 1) % MI;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << ans[i] << " ";
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }

    return 0;
}