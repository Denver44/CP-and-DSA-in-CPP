#include <bits/stdc++.h>
using namespace std;

bool isOpernad(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int postfixEvaluation(string postfix)
{
    stack<int> s;
    int a, b, res;
    int i;
    for (int i = 0; i < postfix.length(); i++)
    {
        if (isOpernad(postfix[i]))
        {

            s.push((int)postfix[i] - 48);
        }
        else
        {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();

            switch (postfix[i])
            {
            case '+':
                res = a + b;
                s.push(res);
                break;

            case '-':
                res = a - b;
                s.push(res);
                break;
            case '*':
                res = a * b;
                s.push(res);
                break;
            case '/':
                res = a / b;
                s.push(res);
                break;
            }
        }
    }

    return s.top();
}

int main()
{
    string postfix_exp;
    int res;
    cout << "Enter the Postfix expression" << endl;
    cin >> postfix_exp;
    // getline(postfix_exp, cin);

    res = postfixEvaluation(postfix_exp);
    cout << "The Result is " << res << endl;
    return 0;
}
