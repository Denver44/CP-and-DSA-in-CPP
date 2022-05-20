#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {

        stack<string> s1;

        for (string it : tokens)
        {

            if (it == "-")
            {
                int a = stoi(s1.top());
                s1.pop();
                int b = stoi(s1.top());
                s1.pop();
                s1.push(to_string(b - a));
            }
            else if (it == "+")
            {
                int a = stoi(s1.top());
                s1.pop();
                int b = stoi(s1.top());
                s1.pop();
                s1.push(to_string(b + a));
            }
            else if (it == "*")
            {
                int a = stoi(s1.top());
                s1.pop();
                int b = stoi(s1.top());
                s1.pop();
                s1.push(to_string(b * a));
            }
            else if (it == "/")
            {
                int a = stoi(s1.top());
                s1.pop();
                int b = stoi(s1.top());
                s1.pop();
                s1.push(to_string(b / a));
            }
            else
            {
                s1.push(it);
            }
        }

        return stoi(s1.top());
    }
};

int main()
{

    return 0;
}