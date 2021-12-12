#include <iostream>
using namespace std;
const int MAX = 10;

class stack
{
private:
    int arr[MAX];
    int top;
    int min_value;

public:
    stack();
    void pushdata(int);
    int popdata();
    int peek();
    int min();
    bool stackempty();
    bool stackfull();
};
stack ::stack()
{
    arr[10] = {0};
    top = -1;
    min_value = 0;
}

int stack::peek()
{
    if (stackempty())
    {
        cout << "Stack is UnderFlow" << endl;
        return -1;
    }
    else
    {
        if (arr[top] >= min_value)

            return arr[top];

        else
            return min_value;
    }
}

int stack::min()
{
    if (stackempty())
    {
        cout << "Stack is UnderFlow" << endl;
        return -1;
    }
    else
    {
        return min_value;
    }
}

bool stack::stackempty()
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
bool stack::stackfull()
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

void stack::pushdata(int val)
{

    if (stackempty())
    {
        arr[++top] = val;
        min_value = val;
    }

    else if (stackfull())
    {
        cout << "Stack is overflow" << endl;
    }
    else if (val >= min_value)
    {
        arr[++top] = val;
    }
    else
    {
        arr[++top] = (val + val - min_value); // storring a fake value.
        min_value = val;
    }
}
int stack::popdata()
{
    if (stackempty())
    {
        cout << "Stack is Already empty" << endl;
        return -1;
    }
    else
    {
        if (arr[top] >= min_value)
        {
            return arr[top--];
        }
        else
        {
            int ov = min_value;
            min_value = ((2 * min_value) - arr[top--]);
            return ov;
        }
    }
}

int main()
{
    stack s1;
    s1.pushdata(10);
    s1.pushdata(20);
    s1.pushdata(5);
    s1.pushdata(8);
    s1.pushdata(2);
    s1.pushdata(4);
    s1.pushdata(11);
    cout << s1.peek() << endl;    //11
    cout << s1.min() << endl;     //2
    cout << s1.popdata() << endl; //11
    cout << s1.peek() << endl;    //4
    cout << s1.min() << endl;     //2
    cout << s1.popdata() << endl; //4
    cout << s1.peek() << endl;    //2
    cout << s1.min() << endl;     //2
    cout << s1.popdata() << endl; //2
    cout << s1.peek() << endl;    //8
    cout << s1.min() << endl;     //5
    cout << s1.popdata() << endl; //8
    cout << s1.peek() << endl;    // 5
    cout << s1.min() << endl;     // 5
    cout << s1.popdata() << endl; // 5
    cout << s1.peek() << endl;    //20
    cout << s1.min() << endl;     //10
    cout << s1.popdata() << endl; //20
    cout << s1.peek() << endl;    //10
    cout << s1.min() << endl;     //10
    cout << s1.popdata() << endl; //10

    return 0;
}
