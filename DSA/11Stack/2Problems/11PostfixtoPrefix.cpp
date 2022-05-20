#include <bits/stdc++.h>
#include <string>
using namespace std;
string PostfixtoPrefix(string postfix)
{

    stack<string> s;
    for (int i = 0; i < postfix.length(); i++)
    {
        if ((postfix[i] >= 'a' && postfix[i] <= 'z') || (postfix[i] >= 'A' && postfix[i] <= 'Z'))
        {
            string op(1, postfix[i]);
            s.push(op);
        }
        else
        {

            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = (postfix[i] + op2 + op1);
            s.push(temp);
        }
    }

    return s.top();
}

int main()
{
    string postfix, prefix;
    cout << "Enter the POSTFIX Expression" << endl;
    getline(cin, postfix);
    cout << "POSTFIX EXPRESSION " << postfix << endl;
    prefix = PostfixtoPrefix(postfix);
    cout << "PREFIX EXPRESSION " << prefix << endl;

    return 0;
}
