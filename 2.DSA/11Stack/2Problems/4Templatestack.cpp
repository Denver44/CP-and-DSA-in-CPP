#include <iostream>
using namespace std;
const int MAX = 10;
template <class T>

class stack
{
private:
    T arr[MAX];
    int top;

public:
    stack();
    void pushdata(T);
    void popdata();
    void displaydata();
    bool stackempty();
    bool stackfull();
    T count();
    T peek();
    void change(int, T);
};
template <class T>
void stack<T>::change(int pos, T newval)
{

    arr[pos - 1] = newval;
}
template <class T>
T stack<T>::peek()
{
    return arr[top];
}
template <class T>
T stack<T>::count()
{
    return top + 1;
}

template <class T>
bool stack<T>::stackempty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
bool stack<T>::stackfull()
{
    if (top == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
stack<T>::stack()
{
    arr[10] = {0};
    top = -1;
}
template <class T>
void stack<T>::pushdata(T val)
{
    if (stackfull())
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        ++top;
        arr[top] = val;
    }
}
template <class T>
void stack<T>::popdata()
{
    if (stackempty())
    {
        cout << "Stack is Already empty" << endl;
    }
    else
    {
        cout << "The element removed from the stack is " << arr[top] << endl;
        arr[top] = 0;
        top--;
    }
}
template <class T>
void stack<T>::displaydata()
{
    cout << "STACK ITEMS :- ";
    for (int i = top; i >= 0; i--)
    {
        cout << "  " << arr[i];
    }
    cout << endl;
}
int main()
{
    stack<float> s1;
    s1.pushdata(3.14);
    s1.pushdata(1.44);
    s1.pushdata(1.73);
    s1.pushdata(6.28);
    s1.displaydata();
    // cout << " Total number of element in the stack is " << s1.count() << endl;
    s1.popdata();
    s1.popdata();
    // s1.popdata();
    // s1.popdata();
    // s1.popdata();
    s1.displaydata();
    // cout << " Peek value on the stack is " << s1.peek() << endl;
    // s1.change(3, 9.16);
    // s1.displaydata();

    return 0;
}