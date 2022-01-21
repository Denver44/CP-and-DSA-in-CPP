#include <iostream>
#include <stack>
using namespace std;

int isBalance(char *exp)
{

    stack<char> s1;

    int i;
    int a;
    for (i = 0; exp[i] != '\0'; i++)

    {

        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            s1.push(exp[i]);
        }

        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')

        {

            if (s1.empty())

                return 0;

            if (exp[i] == ')' && s1.top() == '(')

                s1.pop();

            if (exp[i] == '}' && s1.top() == '{')

                s1.pop();
            if (exp[i] == ']' && s1.top() == '[')

                s1.pop();
        }
    }

    if (s1.empty())

        return 1;

    else

        return 0;
}

int main()
{
    char exp[] = "((a+b)*(c+d))";

    int valid = isBalance(exp);
    if (valid == 1)
    {
        cout << "Perfect Parenthesis Matching" << endl;
    }
    else
    {
        cout << "Not  a perfect Parenthesis Matching" << endl;
    }

    return 0;
}