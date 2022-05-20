#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Here the cards 143 red one and 563 Blue the 1 and 5 is on same one cards
// So thats why we cannot sort.
// So just count the number which has bigger integer value red or blue and so that wins.
void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "EQUAL" << endl;
        return;
    }
    int red1 = 0, blue1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
            red1++;
        else if (s1[i] > s2[i])
            blue1++;
    }
    if (red1 > blue1)
        cout << "RED" << endl;
    else if (blue1 > red1)
        cout << "BLUE" << endl;
    else
        cout << "EQUAL" << endl;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
}
