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
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << size << endl;
        cout << tail->data << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    LinkedList list;
    string s;
    int n;
    while (true)
    {
        cin >> s >> n;
        if (s == "quit")
        {
            break;
        }

        list.addLast(n);
    }
    list.display();

    return 0;
}
