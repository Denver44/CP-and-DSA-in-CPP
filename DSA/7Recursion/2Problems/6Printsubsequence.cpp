#include <bits/stdc++.h>
using namespace std;
// Subsequence means it should maintain the order in the string
// I thas Two choice wheather he want to come or not.
void print(string q, string ans)
{
    if (q.empty())
    {
        cout << ans << endl;
        return;
    }

    print(q.substr(1), ans);        // No we dont want
    print(q.substr(1), ans + q[0]); // yes we want the character.
}

int main()
{
    print("abc", "");

    return 0;
}