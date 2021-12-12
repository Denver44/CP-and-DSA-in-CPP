#include <bits/stdc++.h>
using namespace std;
int precdenece(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;

    else
        return 2;
}

int operation(int a, int b, char ch)
{
    if (ch == '+')
        return a + b;

    else if (ch == '-')
        return a - b;

    else if (ch == '*')
        return a * b;

    else
        return a / b;
}
int main()
{

    stack<int> operands;   // for (1 to 9)
    stack<char> opertaors; // for brackets and symbols
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == ' ')
        {
            continue;
        }
        else if (ch == '(')
        {
            opertaors.push(ch);
        }
        else if (isdigit(ch))
        {
            operands.push(ch - '0');
        }
        else if (ch == ')')
        {
            while (opertaors.top() != '(')
            {
                char oprtr = opertaors.top();
                opertaors.pop();
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int ans = operation(a, b, oprtr);
                operands.push(ans);
            }
            opertaors.pop();
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {

            while (opertaors.size() > 0 && opertaors.top() != '(' && precdenece(ch) <= precdenece(opertaors.top())) // div and mul can do for + and - but  + and - canot pop * /
            {
                char oprtr = opertaors.top();
                opertaors.pop();
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int ans = operation(a, b, oprtr);
                operands.push(ans);
            }
            opertaors.push(s[i]);
        }
    }

    while (opertaors.size() != 0)
    {
        char oprtr = opertaors.top();
        opertaors.pop();
        int b = operands.top();
        operands.pop();
        int a = operands.top();
        operands.pop();
        int ans = operation(a, b, oprtr);
        operands.push(ans);
    }
    cout << operands.top();

    return 0;
}