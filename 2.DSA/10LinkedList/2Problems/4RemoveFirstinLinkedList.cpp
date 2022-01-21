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

class LinkedList
{
    Node *head;
    int size;
    Node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void display();
    void addLast(int data);
    void removefirst();
    int SIZE();
};

int LinkedList ::SIZE()
{
    return size;
}

void LinkedList ::addLast(int newdata)
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
void LinkedList ::removefirst()
{
    if (size == 0)
    {
        cout << "List is empty" << endl;
    }
    if (head == tail)
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    else
    {
        head = head->next;
        size--;
    }
}
void LinkedList::display()
{
    Node *temp = head;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}

int main()
{
    LinkedList list;
    string s;
    int n;
    while (true)
    {
        cin >> s;
        if (s == "addLast")
        {
            cin >> n;
            list.addLast(n);
        }
        else if (s == "removeFirst")
        {
            list.removefirst();
        }
        else if (s == "display")
        {
            list.display();
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
