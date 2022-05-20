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
    void AddLinkedlist(Node *, int, Node *, int);
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
LinkedList res;

int AddLinkedlistHelper(Node *node1, int l1size, Node *node2, int l2size)
{
    if (node1 == nullptr && node2 == nullptr) // as we tracverse both linkelist so carry will be zero.
    {
        return 0;
    }
    int data = 0;
    if (l1size > l2size) // if l1size is greate means l1 has 999 and l2 has 42 then we go l1.next and size-1
    {
        int oc = AddLinkedlistHelper(node1->next, l1size - 1, node2, l2size);
        data = node1->data + oc;
    }
    else if (l2size > l1size) // vice-versa of above
    {
        int oc = AddLinkedlistHelper(node1, l1size, node2->next, l2size - 1);
        data = node2->data + oc;
    }
    else // if boh are same. then add both datas and reduce soie by -1
    {
        int oc = AddLinkedlistHelper(node1->next, l1size - 1, node2->next, l2size - 1);
        data = node1->data + node2->data + oc;
    }
    int a = data % 10; // as we have to put single element so we are uisng modulo .
    res.addFirst(a);
    a = data / 10;
    return a;
}

void LinkedList::AddLinkedlist(Node *node1, int l1size, Node *node2, int l2size)
{

    int oc = AddLinkedlistHelper(node1, l1size, node2, l2size);
    if (oc != 0)
    {
        res.addFirst(oc);
    }
    this->head = res.head;
    this->tail = res.tail;
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
    LinkedList l2;
    int n2;
    cin >> n2;
    while (n2--)
    {
        int a;
        cin >> a;
        l2.addLast(a);
    }
    l1.display();
    l2.display();
    LinkedList l3;
    l3.AddLinkedlist(l1.head, l1.size, l2.head, l2.size);
    l3.display();
    int a, b;
    cin >> a >> b;
    l3.addFirst(a);
    l3.addLast(b);
    l3.display();

    return 0;
}
