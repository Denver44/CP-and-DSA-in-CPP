#include <iostream>
#include <stack>

using namespace std;

class MinStack
{
private:
public:
    stack<int> s1;
    stack<int> s2;
    void push(int x)
    {
        if (s2.empty() || x <= s2.top())
        {
            s2.push(x); // here the top will always have the min value if -3 or -3 two times inseted in s1 we will insert -3 also 2 times in s2..
        }

        s1.push(x);
    }

    void pop()
    {
        if (s1.top() == s2.top()) // if both stack top has same value on top and pop is called the remove the top from both side.
        {
            s2.pop();
        }

        s1.pop();
    }

    int top()
    {
        return s1.top();
    }

    int getMin()
    {
        return s2.top();
    }
};

int main()
{

    return 0;
}