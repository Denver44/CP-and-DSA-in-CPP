#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class StackAdapter
{
    Node *head;
    int size;
    Node *tail;

public:
    StackAdapter()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void addFirst(int data);
    int removefirst();
    int getfirst();
    int SIZE();
};
int StackAdapter ::SIZE()
{
    return size;
}
int StackAdapter ::getfirst()
{
    if (size == 0)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    return head->data;
}

void StackAdapter ::addFirst(int newdata)
{
    Node *newnode = new Node(newdata);
    if (head == nullptr)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    size++;
}

int StackAdapter ::removefirst()
{
    if (size == 0)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    if (head == tail)
    {
        int data = head->data;
        head = nullptr;
        tail = nullptr;
        size = 0;
        return data;
    }
    else
    {
        int data = head->data;
        head = head->next;
        size--;
        return data;
    }
}

int main()
{
    StackAdapter list;
    string s;
    int n;
    while (true)
    {
        cin >> s;

        if (s == "push")
        {
            cin >> n;
            list.addFirst(n);
        }
        else if (s == "pop")
        {
            int val = list.removefirst();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "top")
        {
            int val = list.getfirst();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "size")
        {
            cout << list.SIZE() << endl;
        }
        else if (s == "quit")
        {
            break;
        }
    }

    return 0;
}