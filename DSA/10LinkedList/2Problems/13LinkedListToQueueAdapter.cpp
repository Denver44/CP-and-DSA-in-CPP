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

class QueueAdapter
{
    Node *head;
    int size;
    Node *tail;

public:
    QueueAdapter()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void addLast(int data);
    int removefirst();
    int getfirst();
    int SIZE();
};
int QueueAdapter ::SIZE()
{
    return size;
}
int QueueAdapter ::getfirst()
{
    if (size == 0)
    {
        cout << "Queue underflow"
             << endl;
        return -1;
    }
    return head->data;
}

void QueueAdapter ::addLast(int newdata)
{
    Node *newnode = new Node(newdata);
    if (head == nullptr)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    size++;
}

int QueueAdapter ::removefirst()
{
    if (size == 0)
    {
        cout << "Queue underflow"
             << endl;
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
    QueueAdapter list;
    string s;
    int n;
    while (true)
    {
        cin >> s;

        if (s == "add")
        {
            cin >> n;
            list.addLast(n);
        }
        else if (s == "remove")
        {
            int val = list.removefirst();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "peek")
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