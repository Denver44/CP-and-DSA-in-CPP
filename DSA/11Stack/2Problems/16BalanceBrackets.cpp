#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> st;
    string expression;
    getline(cin, expression);

    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            st.push(expression[i]);
        }

        else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            if (st.size() == 0)
            {
                cout << "false";
                return 0;
            }

            else if (expression[i] == ')' && st.top() == '(')
            {
                st.pop();
            }

            else if (expression[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (expression[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
        }
    }

    if (st.size() == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}