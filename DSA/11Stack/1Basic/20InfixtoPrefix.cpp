#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
bool isoperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixtoPrefix(stack<char> s, string infix)
{
    string prefix;
    reverse(infix.begin(), infix.end());
    for (int i = 0; i < infix.length(); i++) // this custom code is only for the reversal of the brackets only.
    {
        if (infix[i] == '(')
        {
            infix[i] = ')';
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
        }
    }

    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            prefix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((!s.empty()) && (s.top() != '('))
            {
                char temp = s.top();
                prefix += temp;
                s.pop();
            }
            if (s.top() == '(')
            {
                s.pop();
            }
        }
        else if (isoperator(infix[i]))
        {
            if (s.empty())
            {
                s.push(infix[i]);
            }
            else
            {
                if (precedence(infix[i]) > precedence(s.top()))
                {
                    s.push(infix[i]);
                }
                else if (precedence(infix[i]) == precedence(s.top()) && infix[i] == '^')
                {
                    while (precedence(infix[i]) == precedence(s.top()) && infix[i] == '^')
                    {
                        char temp = s.top();
                        prefix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
                else if (precedence(infix[i]) == precedence(s.top()))
                {
                    s.push(infix[i]);
                }
                else
                {
                    while ((!s.empty()) && precedence(infix[i]) < precedence(s.top()))
                    {
                        char temp = s.top();
                        prefix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }

    while (!s.empty())
    {
        char temp = s.top();
        prefix += temp;
        s.pop();
    }
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main()
{
    string infix_exp, prefix;
    cout << "Enter a Infix Expression" << endl;
    cin >> infix_exp;
    stack<char> stack;
    cout << "INFIX EXPRESSION: " << infix_exp << endl;

    prefix = InfixtoPrefix(stack, infix_exp);
    cout << "PREFIX EXPRESSION: " << prefix << endl;

    return 0;
}