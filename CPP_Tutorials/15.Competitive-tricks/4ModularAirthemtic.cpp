#include <iostream>
using namespace std;

#define MI 1000000007

int main()

{

    int fact[101];
    fact[0] = 1;
    for (int i = 1; i < 101; i++)
    {
        fact[i] = (1ll * i * fact[i - 1]) % MI;
    }

    cout << fact[100];  // this value of 100 factorial

    //--------------------------------2--------------------------------------

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }

    //-------------------------3------------------
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
