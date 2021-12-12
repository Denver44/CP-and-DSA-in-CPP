

#include <bits/stdc++.h>
using namespace std;
// If a string start from 0 then it is Invalid.

void print(string ques, string ans)
{

    if (ques.empty())
    {
        cout << ans << endl;
        return;
    }

    char ch = ques.at(0);
    string roq = ques.substr(1);
    if (ch == '0')
    {
        return;
    }
    else
    {
        string s = "";
        s += (ch - '1') + 'a';
        print(roq, ans + s);
    }
    if (ques.size() >= 2)
    {

        string ch12 = ques.substr(0, 2);
        string roq12 = ques.substr(2);

        int ch12v = stoi(ch12);
        if (ch12v <= 26)
        {
            string s = "";
            s += ('a' + ch12v - 1);
            print(roq12, ans + s);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    print(s, "");
    return 0;
}
