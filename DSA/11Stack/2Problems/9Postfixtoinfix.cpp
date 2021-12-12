#include <bits/stdc++.h>
#include <string>
using namespace std;
string PostfixtoInfix(string postfix)
{
    stack<string> s;
    for (int i = 0; i < postfix.length(); i++)
    {
        if ((postfix[i] >= 'a' && postfix[i] <= 'z') || (postfix[i] >= 'A' && postfix[i] <= 'Z'))
        {
            string op(1, postfix[i]); // op is operand here we have called constructor of class string in stack and then pass two argument . this function acually change the datatype of postfix[i] to proper string and make the copy of it and then paste it to op.
            s.push(op);
        }
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = ("(" + op2 + postfix[i] + op1 + ")");
            s.push(temp);
        }
    }

    return s.top();
}
int main()
{
    string infix, postfix;
    cout << "Enter the POSTFIX Expression:" << endl;
    getline(cin, postfix);
    cout << "POSTFIX EXPRESSION " << postfix << endl;
    infix = PostfixtoInfix(postfix);
    cout << endl;
    cout << "INFIX EXPRESSION " << infix << endl;

    return 0;
}