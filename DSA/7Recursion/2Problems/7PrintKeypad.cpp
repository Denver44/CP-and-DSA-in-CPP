#include <bits/stdc++.h>
using namespace std;
// using a Single for Loop we can Print the Keypad letter for different number.
void print(string q, string ans)
{

    map<char, string> phone;
    phone['2'] = "abc";
    phone['3'] = "def";
    phone['4'] = "ghi";
    phone['5'] = "jkl";
    phone['6'] = "mno";
    phone['7'] = "pqrs";
    phone['8'] = "tuv";
    phone['9'] = "wxyz";

    if (q.empty())
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < phone[q[0]].size(); i++)
    {
        print(q.substr(1), ans + phone[q[0]][i]);
    }
}

int main()
{
    print("23", "");

    return 0;
}