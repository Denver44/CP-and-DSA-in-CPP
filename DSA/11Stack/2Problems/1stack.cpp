#include <iostream>
using namespace std;
const int MAX = 10;

class stack
{
private:
    int arr[MAX];
    int top;

public:
    stack();
    void pushdata(int);
    void popdata();
    void displaydata();
    bool stackempty();
    bool stackfull();
    int count();
    int peek();
    void change(int, int);
    void sortgreater();
    void sortless();
};

void stack::change(int pos, int newval)
{

    arr[pos - 1] = newval;
}
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
    if (top == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

stack ::stack()
{
    arr[10] = {0};
    top = -1;
}
void stack::pushdata(int val)
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
void stack ::sortgreater()
{

    int min;

    for (int i = 0; i < count() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < count(); j++)
        {
            if (arr[j] < arr[min])

            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void stack ::sortless()
{

    int min;

    for (int i = 0; i < count() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < count(); j++)
        {
            if (arr[j] > arr[min])

            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    stack s1;
    s1.pushdata(23);
    s1.pushdata(17);
    s1.pushdata(3);
    s1.pushdata(11);
    s1.displaydata();
    // cout << " Total number of element in the stack is " << s1.count() << endl;
    // s1.popdata();
    // s1.displaydata();
    // cout << " Peek value on the stack is " << s1.peek() << endl;
    // s1.change(3, 35);
    // s1.displaydata();
    cout << "After sorting the stack in descending order " << endl;
    s1.sortgreater();
    s1.displaydata();
    cout << "After sorting the stack in aescending order " << endl;
    s1.sortless();
    s1.displaydata();
    cout << s1.peek() << endl;

    s1.sortgreater();
    s1.popdata();
    s1.displaydata();
    return 0;
}
