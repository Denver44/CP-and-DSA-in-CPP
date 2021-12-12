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
        if (expression[i] == ' ')
        {
            continue;
        }
        else if (expression[i] == ')')
        {
            if (st.top() == '(') // this means it doesnt have anyting between the closing and openeing that means it is waste barcket.
            {
                cout << "true";
                return 0;
            }
            else
            {

                while (st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else
        {
            st.push(expression[i]);
        }
    }
    cout << "false";

    return 0;
}