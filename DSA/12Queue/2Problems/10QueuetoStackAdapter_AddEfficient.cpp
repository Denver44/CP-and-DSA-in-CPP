#include <bits/stdc++.h>
using namespace std;

class QueuetoStack
{
private:
    queue<int> mainQueue;
    queue<int> helperQ;

public:
    void pushdata(int);
    int popdata();
    int peek();
    int size();
};

int QueuetoStack::size()
{
    return mainQueue.size();
}

int QueuetoStack::peek()
{
    if (mainQueue.empty())
    {
        cout << "Stack underflow  ";
        return -1;
    }

    else
    {

        while (mainQueue.size() > 1)
        {
            helperQ.push(mainQueue.front());
            mainQueue.pop();
        }
        int val = mainQueue.front();
        mainQueue.pop();
        helperQ.push(val);
        while (helperQ.size() > 0)
        {
            mainQueue.push(helperQ.front());
            helperQ.pop();
        }
        return val;
    }
}

void QueuetoStack::pushdata(int val)
{

    mainQueue.push(val);
}

int QueuetoStack::popdata()
{

    if (mainQueue.empty())
    {
        cout << "Oueue underflow  ";
        return -1;
    }
    else
    {

        while (mainQueue.size() > 1)
        {
            helperQ.push(mainQueue.front());
            mainQueue.pop();
        }
        int val = mainQueue.front();
        mainQueue.pop();
        while (helperQ.size() > 0)
        {
            mainQueue.push(helperQ.front());
            helperQ.pop();
        }
        return val;
    }
}
int main()
{
    QueuetoStack s1;

    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(5);
    s1.pushdata(8);
    s1.pushdata(2);
    s1.pushdata(4);
    s1.pushdata(11);
    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    cout << s1.peek() << endl;
    cout << s1.size() << endl;
    cout << s1.popdata() << endl;

    return 0;
}
