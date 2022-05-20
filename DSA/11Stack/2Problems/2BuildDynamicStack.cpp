#include <iostream>
using namespace std;
class stack
{
private:
    int *arr;
    int top;
    int size;

public:
    stack(int n)
    {
        arr = new int[n];
        top = -1;
        size = n;
    }
    void pushdata(int);
    void popdata();
    void displaydata();
    bool stackempty();
    bool stackfull();
    int count();
    int peek();
};

int stack::peek()
{
    return arr[top];
}
int stack ::count()
{
    return top + 1;
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
    if (top == size - 1)
        return true;
    else
        return false;
}

void stack::pushdata(int val)
{
    if (stackfull())
    {
        int newsize = 2 * size;
        int *newarr = new int[newsize];
        for (int i = 0; i < size; i++)
        {
            newarr[i] = arr[i];
        }
        arr = newarr;
        size = newsize;
        delete newarr;
    }
    else
    {
        ++top;
        arr[top] = val;
    }
}
void stack::popdata()
{
    if (stackempty())
    {
        cout << "Stack is Already empty" << endl;
    }
    else
    {
        --top;
    }
}
void stack::displaydata()
{
    for (int i = top; i >= 0; i--)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    stack s1(3);
    s1.pushdata(23);
    s1.pushdata(17);
    s1.pushdata(3);
    s1.pushdata(11);

    s1.displaydata();

    // s1.popdata();
    // s1.displaydata();
    return 0;
}
