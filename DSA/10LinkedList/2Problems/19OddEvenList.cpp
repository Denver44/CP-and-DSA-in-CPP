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
    void oddEven();
    void removefirst();
    int getfirst();
    int getlast();
    void addFirst(int data);
};
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

void LinkedList ::oddEven()
{
    LinkedList odd;  // create a new list
    LinkedList even; // create a new list
    while (this->size > 0)
    {
        int val = this->getfirst();
        this->removefirst(); // this help us to maintain the space complexity of O(1).
        if (val % 2 == 0)
            even.addLast(val);
        else
            odd.addLast(val);
    }
    if (odd.size > 0 && even.size > 0)
    {
        odd.tail->next = even.head;
        this->head = odd.head;
        this->tail = even.tail;
        this->size = odd.size + even.size;
    }
    else if (odd.size > 0)
    {
        this->head = odd.head;
        this->tail = odd.tail;
        this->size = odd.size;
    }
    else if (even.size > 0)
    {
        this->head = even.head;
        this->tail = even.tail;
        this->size = even.size;
    }
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
    l1.oddEven();
    l1.display();
    int a, b;
    cin >> a >> b;
    l1.addFirst(a);
    l1.addLast(b);
    l1.display();

    return 0;
}
