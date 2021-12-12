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
public:
    Node *head;
    int size;
    Node *tail;
    Node *getAt(int);
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void display();
    void addLast(int data);
    static void MergeTwoSortedList(Node *h1, Node *h2);
};

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
// In this we create a new Linked list By Merging Two Linked List and Creating New One.
void LinkedList::MergeTwoSortedList(Node *h1, Node *h2)
{
    Node *one = h1;
    Node *two = h2;

    LinkedList l1;

    while (one && two)
    {
        if (one->data <= two->data)
        {
            l1.addLast(one->data);
            one = one->next;
        }
        else
        {

            l1.addLast(two->data);
            two = two->next;
        }
    }
    while (one != nullptr)
    {
        l1.addLast(one->data);
        one = one->next;
    }
    while (two != nullptr)
    {
        l1.addLast(two->data);
        two = two->next;
    }
    l1.display();
}

int main()
{
    LinkedList l1;
    LinkedList l2;
    int n1, n2;
    cin >> n1;
    while (n1--)
    {
        int a;
        cin >> a;
        l1.addLast(a);
    }
    cin >> n2;
    while (n2--)
    {
        int a;
        cin >> a;
        l2.addLast(a);
    }

    LinkedList::MergeTwoSortedList(l1.head, l2.head);
    l1.display();
    l2.display();

    return 0;
}
