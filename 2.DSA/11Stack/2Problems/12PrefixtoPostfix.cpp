#include <bits/stdc++.h>
#include <string>
using namespace std;
string PrefixToPostfix(string prefix)
{

    stack<string> s;
    reverse(prefix.begin(), prefix.end());
    for (int i = 0; i < prefix.length(); i++)
    {
        if ((prefix[i] >= 'a' && prefix[i] <= 'z') || (prefix[i] >= 'A' && prefix[i] <= 'Z'))
        {
            string op(1, prefix[i]);
            s.push(op);
        }
        else
        {

            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = (op1 + op2 + prefix[i]);
            s.push(temp);
        }
    }

    return s.top();
}

int main()
{
    string postfix, prefix;
    cout << "Enter the PREFIX Expression" << endl;
    getline(cin, prefix);
    cout << "PREFIX EXPRESSION " << prefix << endl;
    postfix = PrefixToPostfix(prefix);
    cout << "POSTFIX EXPRESSION " << postfix << endl;

    return 0;
}
