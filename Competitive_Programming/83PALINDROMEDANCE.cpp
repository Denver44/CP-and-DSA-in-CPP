#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// // As we have to make palindrome that rightmost has same color as the leftmost.
// // We have to finf min cost.
// // 0-> White Suit.
// // 1-> Black Suit.

// //The director liked the idea,
// //  and she wants to buy suits so that the color of the leftmost dancer's suit is the same as the color of the rightmost dancer's suit
// //  the 2nd left is the same as 2nd right, and so on.

void solve()
{
    long n, cost_black, cost_white;
    cin >> n >> cost_white >> cost_black;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tot_cost = 0;
    int i = 0;
    int j = n - 1;
    bool flag = true;
    while (i < j)
    {
        if ((arr[i] == 1 && arr[j] == 0) || (arr[i] == 0 && arr[j] == 1)) // no swapping can be done so break this  and also we cannot buy already they are bought..
        {
            tot_cost = -1;
            flag = false;
            break;
        }
        else if ((arr[i] == 0 && arr[j] == 0) || (arr[i] == 1 && arr[j] == 1)) // when everything is normal
        {
            i++;
            j--;
        }

        else if (arr[i] == 2 && arr[j] == 1 || arr[i] == 2 && arr[j] == 0 || arr[i] == 0 && arr[j] == 2 || arr[i] == 1 && arr[j] == 2) // if 2 is given
        {
            if (arr[i] == 2)
            {
                arr[i] = arr[j];
                if (arr[j] == 0)
                {
                    tot_cost += cost_white;
                }
                else
                {
                    tot_cost += cost_black;
                }
            }
            else if (arr[j] == 2)
            {
                arr[j] = arr[i];
                if (arr[i] == 0)
                {
                    tot_cost += cost_white;
                }
                else
                {
                    tot_cost += cost_black;
                }
            }
            i++;
            j--;
        }
        else if (arr[i] == 2 && arr[j] == 2)
        {
            tot_cost += 2 * min(cost_black, cost_white);
            i++;
            j--;
        }
    }

    if (n % 2 != 0 && flag == true && arr[n / 2] == 2)
    {
        tot_cost += min(cost_black, cost_white);
    }

    cout << tot_cost << endl;
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