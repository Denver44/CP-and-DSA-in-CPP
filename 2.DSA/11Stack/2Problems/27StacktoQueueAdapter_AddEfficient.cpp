#include <bits/stdc++.h>
using namespace std;

class StacktoQueue
{
private:
    stack<int> mainstack;
    stack<int> helper;

public:
    void pushdata(int);
    int popdata();
    int peek();
    int size();
};

int StacktoQueue::size()
{
    return mainstack.size();
}

int StacktoQueue::peek()
{
    if (mainstack.empty())
    {
        cout << "Oueue underflow " ;
        return -1;
    }
    while (mainstack.size() > 1)
    {
        helper.push(mainstack.top());
        mainstack.pop();
    }
    int val = mainstack.top();
    mainstack.pop();
    helper.push(val);
    while (helper.size() > 0)
    {
        mainstack.push(helper.top());
        helper.pop();
    }
    return val;
}

void StacktoQueue::pushdata(int val)
{
    mainstack.push(val);
}

int StacktoQueue::popdata()
{
    if (mainstack.empty())
    {
        cout << "Oueue underflow "  ;
        return -1;
    }
    while (mainstack.size() > 1)
    {
        helper.push(mainstack.top());
        mainstack.pop();
    }
    int val = mainstack.top();
    mainstack.pop();
    while (helper.size() > 0)
    {
        mainstack.push(helper.top());
        helper.pop();
    }
    return val;
}
int main()
{
    StacktoQueue s1;

    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(30);
    s1.pushdata(40);
    s1.pushdata(50);
    cout << s1.popdata() << endl;
    cout << s1.popdata() << endl;
    s1.pushdata(60);
    s1.pushdata(70);
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;
    cout << s1.peek() << endl;
    cout << s1.popdata() << endl;

    return 0;
}
