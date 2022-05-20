#include <bits/stdc++.h>
#include <string>
using namespace std;
string PrefixtoInfix(string Prefix)
{
    stack<string> s;

    reverse(Prefix.begin(), Prefix.end());

    for (int i = 0; i < Prefix.length(); i++)
    {
        if (Prefix[i] >= 'a' && Prefix[i] <= 'z' || Prefix[i] >= 'A' && Prefix[i] <= 'Z')
        {
            string op(1, Prefix[i]);
            s.push(op);
        }
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = ("(" + op1 + Prefix[i] + op2 + ")");
            s.push(temp);
        }
    }

    return s.top();
}
int main()
{
    string infix, Prefix;
    cout << "Enter the PREFIX Expression:" << endl;
    getline(cin, Prefix);
    cout << "Prefix EXPRESSION " << Prefix << endl;
    infix = PrefixtoInfix(Prefix);
    cout << endl;
    cout << "INFIX EXPRESSION " << infix << endl;

    return 0;
}