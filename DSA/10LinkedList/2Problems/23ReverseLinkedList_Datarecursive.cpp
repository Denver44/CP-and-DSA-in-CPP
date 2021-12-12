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
    int getsize();
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

Node *rleft;  // a pointer
void Helper(Node *node, int floor, int size)
{
    if (node == nullptr)
    {
        return;
    }
// node->next works as B_pointer.
    Helper(node->next, floor + 1, size);
    if (floor >= size / 2)
    {
        int data = node->data;
        node->data = rleft->data;
        rleft->data = data;
        rleft = rleft->next;
    }
}

void LinkedList::Rdisplay(Node *node)
{
    rleft = node;
    Helper(node, 0, size);
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
