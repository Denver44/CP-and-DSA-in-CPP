#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
};

struct Node *top = NULL;

void push(char x)
{

    struct Node *t;
    t = new struct Node;

    if (t == NULL)
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {

        t->data = x;
        t->next = top;
        top = t;
    }
}
void pop()
{

    if (top == NULL)
    {
        cout << "stack is Empty" << endl;
    }
    else
    {
        struct Node *temp = top;
        top = top->next;
        cout << "The Deleted Item is " << temp->data << endl;
        delete temp;
    }
}

void display()
{
    struct Node *temp;
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int isBalance(char *exp)
{

    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '{')
        {
            push(exp[i]);
        }
        else if (exp[i] == '}')
        {
            if (top == NULL)
            {
                return 0;
            }
            pop();
        }
    }

    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char exp[] = "((a+b)*(c+d))";

    int valid = isBalance(exp);
    if (valid == 1)
    {
        cout << "Perfect Parenthesis Matching" << endl;
    }
    else
    {
        cout << "Perfect Parenthesis Matching" << endl;
    }

    return 0;
}