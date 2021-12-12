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
    void addFirst(int data);
    void addAtIndex(int idx, int newdata);
    void removeAtIndex(int idx);
    void removefirst();
    void removeLast();
    int getfirst();
    int getat(int);
    int getlast();
    int SIZE();
};
int LinkedList ::SIZE()
{
    return size;
}
int LinkedList ::getfirst()
{
    if (size == 0)
    {
        cout << "List is empty" << endl;
        return -1;
    }
    return head->data;
}
int LinkedList ::getat(int idx)
{
    if (size == 0)
    {
        cout << "List is empty" << endl;
        return -1;
    }
    // index start from zero
    else if (idx >= size || idx < 0)
    {
        cout << "Invalid arguments" << endl;
        return -1;
    }

    Node *temp = head;
    int i = 0;
    while (i != idx)
    {
        temp = temp->next;
        i++;
    }
    return temp->data;
}
int LinkedList ::getlast()
{
    if (size == 0)
    {
        cout << "List is empty" << endl;
        return -1;
    }
    return tail->data;
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
void LinkedList ::addFirst(int newdata)
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
void LinkedList ::addAtIndex(int idx, int newdata)
{
    if (idx < 0 || idx > SIZE())
    {
        cout << "Invalid arguments" << endl;
        return;
    }
    else if (idx == 0)
    {
        addFirst(newdata);
    }
    else if (idx == SIZE())
    {
        addLast(newdata);
    }
    else
    {
        Node *newnode = new Node(newdata);
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
        size++;
    }
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
void LinkedList ::removeLast()
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
        Node *temp = head;
        // as our indexing start from 0.
        for (int i = 0; i < SIZE() - 2; i++)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
        tail = temp;
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

void LinkedList ::removeAtIndex(int idx)
{
    if (idx < 0 || idx >= SIZE())
    {
        cout << "Invalid arguments" << endl;
        return;
    }
    else if (idx == 0)
    {
        removefirst();
    }
    else if (idx == SIZE() - 1)
    {
        removeLast();
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        size--;
    }
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
        else if (s == "removeAt")
        {
            int idx;
            cin >> idx;
            list.removeAtIndex(idx);
        }
        else if (s == "addAt")
        {
            int idx;
            cin >> idx >> n;
            list.addAtIndex(idx, n);
        }
        else if (s == "addFirst")
        {
            cin >> n;
            list.addFirst(n);
        }
        else if (s == "removeFirst")
        {
            list.removefirst();
        }
        else if (s == "removeLast")
        {
            list.removeLast();
        }
        else if (s == "display")
        {
            list.display();
        }
        else if (s == "getFirst")
        {
            int val = list.getfirst();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "getLast")
        {
            int val = list.getlast();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "getAt")
        {
            cin >> n;
            int val = list.getat(n);
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
