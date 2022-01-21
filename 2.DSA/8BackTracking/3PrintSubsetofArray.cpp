#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

// Subset Has Two Option I will Come Or NOT.
void helper(int n, int input[], string psf)
{
    if (n == 0)
    {
        cout << psf << endl;
        return;
    }
    helper(n - 1, input + 1, psf); // NOT GOING
    helper(n - 1, input + 1, psf + to_string(input[0]) + " "); // GOING
}

void printSubsetsOfArray(int input[], int size)
{
    helper(size, input, "");
}

void solve()
{
    int n;
    cin >> n;
    int *inputarray = new int[n];
    int i;
    loop(i, 0, n)
    {
        cin >> inputarray[i];
    }
    printSubsetsOfArray(inputarray, n);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}