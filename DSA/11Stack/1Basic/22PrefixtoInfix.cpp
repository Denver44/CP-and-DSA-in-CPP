#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string PrefixtoInfix(string prefix)
{

    stack<string> s;
    for (int i = 0; i < prefix.length(); i++)
    {
        if (prefix[i] >= 'a' && prefix[i] <= 'z' || prefix[i] >= 'A' && prefix[i] <= 'Z')
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
            s.push("(" + op1 + prefix[i] + op2 + ")");
        }
    }
    string finalprefix = s.top();
    reverse(finalprefix.begin(), finalprefix.end());
    return s.top();
}
int main()
{
    string infix, prefix;
    cout << "Enter the PREFIX Expression:" << endl;
    cin >> prefix;
    cout << "PREFIX EXPRESSION " << prefix << endl;
    reverse(prefix.begin(), prefix.end());
    infix = PrefixtoInfix(prefix);
    cout << endl;
    cout << "INFIX EXPRESSION " << infix << endl;

    return 0;
}
