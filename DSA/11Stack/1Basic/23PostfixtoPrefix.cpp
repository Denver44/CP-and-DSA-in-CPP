#include <iostream>
#include <stack>
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
            s.push(postfix[i] + op2 + op1);
        }
    }
    return s.top();
}

int main()
{
    string postfix, prefix;
    cout << "Enter the Postfix Expression" << endl;
    cin >> postfix;
    cout << "POSTFIX EXPRESSION " << postfix << endl;
    prefix = PostfixtoPrefix(postfix);
    cout << "PREFIX EXPRESSION " << prefix << endl;

    return 0;
}
