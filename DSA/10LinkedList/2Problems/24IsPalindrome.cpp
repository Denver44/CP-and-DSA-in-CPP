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
    void PalindromeChecker(Node *);
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

Node *rleft;
bool Helper(Node *node)
{
    if (node == nullptr)
    {
        return true;
    }
    bool res = Helper(node->next);

    if (res == false)
    {
        return false;
    }
    else if (node->data != rleft->data)
    {
        return false;
    }
    else
    {
        rleft = rleft->next;
        return true;
    }
}

// ----------------------- TWO WAYS---------------------------//
// Node *rleft;
// bool flag = true;
// void Helper2(Node *node)
// {
//     if (node == nullptr)
//     {
//         return;
//     }
//     Helper2(node->next);

//     if (node->data != rleft->data)
//     {
//         flag = false;
//         return;
//     }
//     else
//     {
//         rleft = rleft->next;
//     }
// }
void LinkedList::PalindromeChecker(Node *node)
{
    rleft = node;
    bool res = Helper(node);
    (res == 0) ? cout << "false" : cout << "true";

    // -----------------------
    // rleft = node;
    // Helper2(node);
    // (flag == 0) ? cout << "false" : cout << "true";
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
    l1.PalindromeChecker(l1.head);

    return 0;
}
