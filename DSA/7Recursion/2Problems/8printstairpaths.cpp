#include <bits/stdc++.h>
using namespace std;
// Here we have to print stairs path and we can take 3 steps at most.
// As we can take Three steps 1 , 2 or 3 so we use a loop for the options.
// if we are on Zero stair that means its a valid path. else not a valid path.

void print(int n, string ans)
{
    // Journey finished but correct way.
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    // means journey Finish but not matter
    if (n < 0)
    {
        return;
    }

    for (int i = 1; i <= 3; i++)
    {
        print(n - i, ans + to_string(i));
    }
}

int main()
{
    print(3, "");

    return 0;
}