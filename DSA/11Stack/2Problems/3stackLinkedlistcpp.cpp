#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class stack
{
private:
    Node *top;
    int tot;

public:
    stack()
    {
        top = NULL;
        tot = 0;
    }
    void Push(int x);
    void pop();
    void Display();
    void stackTop();
    void search(int index);
    void isEmpty();
    int count();
};
int stack::count()
{
    return tot;
}
void stack::stackTop()
{
    if (top != NULL)
    {
        cout << "The data at the top is " << top->data << endl;
    }
    else
    {
        cout << "Empty Stack" << endl;
    }
}
void stack::search(int pos)
{
    struct Node *temp = top;
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }

    else
    {

        if ((pos - 1) < count())
        {
            int x = pos - 1;
            while (x != 0)
            {
                temp = temp->next;
                x--;
            }
            cout << "The Data at Index " << pos << " is " << temp->data << endl;
        }
    }
}
void stack::isEmpty()
{

    if (top == NULL)
    {
        cout << "Empty Stack" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }
}

void stack::Push(int x)
{
    Node *t = new Node();

    if (t == NULL)
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
        tot++;
    }
}
void stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "The Deleted Data from the stack is " << top->data << endl;
        top = top->next;
        tot--;
    }
}
void stack::Display()
{

    Node *temp = top;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    stack s1;
    s1.isEmpty();
    s1.Push(10);
    s1.Push(11);
    s1.Push(12);
    s1.Push(13);
    s1.isEmpty();
    s1.search(1);
    s1.search(2);
    s1.search(3);
    s1.search(4);
    s1.search(5);
    s1.stackTop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.Display();

    return 0;
}