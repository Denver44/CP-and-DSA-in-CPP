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

void LinkedList ::kReverse(int k)
{
    LinkedList prev;
    while (this->size > 0)
    {
        LinkedList curr;
        if (this->size > k)
        {
            for (int i = 0; i < k; i++)
            {
                int val = this->getfirst();
                this->removefirst();
                curr.addFirst(val);
            }
        }
        else
        {
            int size = this->size;
            for (int i = 0; i < size; i++)
            {
                int val = this->getfirst();
                this->removefirst();
                curr.addLast(val);
            }
        }
        if (prev.head == nullptr)
        {
            prev = curr;
        }
        else
        {
            prev.tail->next = curr.head;
            prev.tail = curr.tail;
            prev.size += curr.size;
        }
    }
    this->head = prev.head;
    this->tail = prev.tail;
    this->size = prev.size;
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
    int n;
    cin >> n;
    l1.kReverse(n);
    l1.display();

    return 0;
}


// ---------------

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

Node *kReverse(Node *head, int k)
{
    //Write your code here
    if (head == NULL || head->next == NULL || k == 0 || k == 1)
    {
        return head;
    }
    Node *curr = head, *temp = head, *prev = NULL;

    int count = 0;
    Node *temphead = head;
    while (count <= k - 1 && curr != NULL)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        return reverse(temphead);
    }

    temp = curr->next;
    curr->next = NULL;
    Node *newhead = reverse(temphead);
    cout << newhead->data << endl;
    Node *finalhead = newhead;
    Node *end = newhead;
    while (end->next != NULL)
    {
        end = end->next;
    }
    prev = end;

    while (temp != NULL)
    {
        count = 0;
        temphead = temp;
        while (count != k - 1 && curr != NULL)
        {
            curr = curr->next;
        }

        if (curr == NULL)
        {
            end->next = reverse(temphead);
            break;
        }

        temp = curr->next;
        curr->next = NULL;
        newhead = reverse(temphead);
        end->next = newhead;
        while (end->next != NULL)
        {
            end = end->next;
        }
        prev = end;
    }

    return newhead;
}