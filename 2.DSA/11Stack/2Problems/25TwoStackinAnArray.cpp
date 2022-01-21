#include <iostream>
using namespace std;

class TwoStack
{
private:
    int *arr;
    int top1;
    int top2;
    int n;

public:
    TwoStack(int n);
    void pushdata1(int);
    void pushdata2(int);
    int popdata1();
    int popdata2();
    int peek1();
    int peek2();
    int size1();
    int size2();
};
TwoStack ::TwoStack(int n)
{
    arr = new int[n];
    top1 = -1;
    top2 = n;
    this->n = n;
}
int TwoStack::size1()
{
    return top1 + 1;
}
int TwoStack::size2()
{
    return (n - top2);
}
int TwoStack::peek1()
{
    if (top1 == -1)
    {
        cout << "Stack is UnderFlow ";
        return -1;
    }

    else
        return arr[top1];
}
int TwoStack::peek2()
{
    if (top2 == n)
    {
        cout << "Stack is UnderFlow ";
        return -1;
    }

    else
        return arr[top2];
}

void TwoStack::pushdata1(int val)
{

    if (top2 == top1 + 1)
    {
        cout << "Stack1 is overflow ";
        return;
    }

    arr[++top1] = val;
}
void TwoStack::pushdata2(int val)
{

    if (top2 == top1 + 1)
    {
        cout << "Stack2 is overflow ";
        return;
    }

    arr[--top2] = val;
}
int TwoStack::popdata1()
{
    if (top1 == -1)
    {
        cout << "Stack is Underflow ";
        return -1;
    }
    else
        return arr[top1--];
}
int TwoStack::popdata2()
{
    if (top2 == n)
    {
        cout << "Stack is Underflow ";
        return -1;
    }
    else
        return arr[top2++];
}
int main()
{
    TwoStack s1(5);
    s1.pushdata1(10);
    s1.pushdata1(20);
    s1.pushdata1(60);
    s1.pushdata2(30);
    s1.pushdata2(40);
    cout << "size1 " << s1.size1() << endl;
    cout << "size2 " << s1.size2() << endl;
    cout << "Peek of s1 " << s1.peek1() << endl;
    cout << "Peek of s2 " << s1.peek2() << endl;
    cout << s1.popdata2() << endl;
    cout << s1.popdata2() << endl;
    cout << s1.popdata2() << endl;
    cout << s1.popdata1() << endl;
    cout << s1.popdata1() << endl;
    cout << s1.popdata1() << endl;
    cout << s1.popdata1() << endl;
    cout << s1.popdata1() << endl;
    cout << "size1 " << s1.size1() << endl;
    cout << "size2 " << s1.size2() << endl;
    cout << "Peek of s1 " << s1.peek1() << endl;
    cout << "Peek of s2 " << s1.peek2() << endl;

    return 0;
}
