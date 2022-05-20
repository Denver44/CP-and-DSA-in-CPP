#include <iostream>
using namespace std;
class Node
{
private:
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{

public:
    Node *head;
    int size;
    Node *tail;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void display();
    void addLast(int data);
    void kReverse(int k);
    void removefirst();
    int getfirst();
    int getlast();
    void addFirst(int data);
    int getsize();
    void FoldLinkedList(Node *);
    void Helper(Node *, int);
};
int LinkedList ::getsize()
{
    return size;
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
int LinkedList ::getlast()
{
    if (size == 0)
    {
        cout << "List is empty" << endl;
        return -1;
    }
    return tail->data;
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

Node *fleft;
void LinkedList::Helper(Node *right, int floor)
{
    if (right == nullptr)
    {
        return;
    }

    Helper(right->next, floor + 1);
    if (floor > size / 2) // as we want to do this for only half of size.
    {
        Node *temp = fleft->next;
        fleft->next = right;
        right->next = temp;
        fleft = temp;
    }
    else if (floor == size / 2) 
    {
        tail = right;
        tail->next = nullptr;
    }
}

void LinkedList::FoldLinkedList(Node *node)
{
    fleft = node;
    Helper(node, 0);
}

int main()
{

    LinkedList l1;
    int n1;
    cin >> n1;
    while (n1--)
    {
        int a;
        cin >> a;
        l1.addLast(a);
    }
    l1.display();
    l1.FoldLinkedList(l1.head);
    l1.display();
    int a, b;
    cin >> a >> b;
    l1.addFirst(a);
    l1.addLast(b);
    l1.display();

    return 0;
}
