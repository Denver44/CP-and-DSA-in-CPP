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
    void RemoveDuplicates();
    void removefirst();
    int getfirst();
    int getlast();
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

void LinkedList ::RemoveDuplicates()
{
    LinkedList l1; // create a new list
    while (this->size > 0)
    {
        int val = this->getfirst();
        this->removefirst();
        if (l1.size == 0 || l1.getlast() != val)
            l1.addLast(val);
    }

    this->head = l1.head;
    this->tail = l1.tail;
    this->size = l1.size;
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
    l1.RemoveDuplicates();
    l1.display();

    return 0;
}
