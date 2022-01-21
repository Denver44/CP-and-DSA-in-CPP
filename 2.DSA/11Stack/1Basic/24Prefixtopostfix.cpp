#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string PrefixtoPostfix(string prefix)
{

    stack<string> s;
    for (int i = prefix.length() - 1; i >= 0; i--)
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
            s.push(op1 + op2 + prefix[i]);
        }
    }

    return s.top();
}

int main()
{
    string postfix, prefix;
    cout << "Enter the PREFIX Expression" << endl;
    cin >> prefix;
    cout << "PREFIX EXPRESSION " << prefix << endl;
    postfix = PrefixtoPostfix(prefix);
    cout << "POSTFIX EXPRESSION " << postfix << endl;

    return 0;
}
