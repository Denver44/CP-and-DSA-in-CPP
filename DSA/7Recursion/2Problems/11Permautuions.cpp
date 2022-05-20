#include <bits/stdc++.h>
using namespace std;

void print(string ques, string ans)
{
    if (ques.empty())
    {
        cout << ans << endl;
    }
    // in loop we take the option we have we have either a,b,c;
    for (int i = 0; i < ques.length(); i++)
    {
        char ch = ques[i];                 // if a comes
        string left = ques.substr(0, i);   // then we have to remove a from abc
        string right = ques.substr(i + 1); // and other part will be bc.
        string tot = right + left;         // then we have added left part and right part
        print(tot, ans + ch);              // updated new ques and also the ans.
    }
}

int main()
{
    print("abc", "");

    return 0;
}
