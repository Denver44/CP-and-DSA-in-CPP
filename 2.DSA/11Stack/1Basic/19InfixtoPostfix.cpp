
#include <iostream>
#include <stack>
using namespace std;
bool isopreator(char c)
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
    else if ((c == '*') || (c == '/'))
    {
        return 2;
    }
    else if ((c == '+') || (c == '-'))
    {
        return 1;
    }
    else
        return -1;
}

string InfixtoPostfix(string infix)
{
    stack<char> s;
    string postfix;

    for (int i = 0; i < infix.length(); i++)
    {

        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((s.top() != '(') && (!s.empty())) // ! this till not empty
            {
                char temp = s.top();
                postfix += temp;
                s.pop();
            }
            if (s.top() == '(')
            {
                s.pop();
            }
        }
        else if (isopreator(infix[i]))
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
                else if (precedence(infix[i]) == precedence(s.top()) && ((infix[i]) == '^'))
                 // this is for the ^  operator as for the ^ opertor the associativity is from right to left. that why this s=case is special only for ^//
                {
                    s.push(infix[i]);
                }

                else
                {
                    while ((!s.empty()) && (precedence(infix[i]) <= precedence(s.top())))
                    {
                        char temp = s.top();
                        postfix += temp;
                        s.pop(); //(!s.empty()) && (precedence(infix[i]) <= precedence(s.top()))
                    }
                    s.push(infix[i]);
                }
            }
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string infix_exp, postfix_exp;
    cout << "Enter a Infix Expression: " << endl;
    cin >> infix_exp;

    cout << "INFIX EXPRESSION: " << infix_exp << endl;
    postfix_exp = InfixtoPostfix(infix_exp);
    cout << "POSTFIX EXPRESSION: " << postfix_exp << endl;

    return 0;
}