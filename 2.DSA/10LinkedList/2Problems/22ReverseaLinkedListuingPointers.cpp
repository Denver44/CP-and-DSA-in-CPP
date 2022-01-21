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
    void Rdisplay(Node *);
    void addLast(int data);
    void kReverse(int k);
    void removefirst();
    int getfirst();
    int getlast();
    void addFirst(int data);
};
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

void Helper(Node *node, Node *tail)
{
    if (node == nullptr)
    {
        return;
    }

    Helper(node->next, tail);
    if (node == tail)
    {
        // nothing to do
    }
    else
    {
        node->next->next = node;
    }
}

void LinkedList::Rdisplay(Node *node)
{
    Helper(node, tail);
    head->next = nullptr;
    // Node *h = head;
    // Node *t = tail;
    // head = t;
    // tail = h;
    swap(head, tail);
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
    l1.Rdisplay(l1.head);
    int a, b;
    cin >> a >> b;
    l1.addFirst(b);
    l1.addLast(a);
    l1.display();

    return 0;
}
