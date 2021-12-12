#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class Linkedlist
{
private:
    Node *head;

public:
    Linkedlist()
    {
        head = NULL;
    }
    Linkedlist(int *arr, int size);
    void Display();
    void Insert(int, int);
    int Delete(int);
    int Length();
};

Linkedlist ::Linkedlist(int *arr, int size)
{
    Node *last, *t;
    int i = 0;

    head = new Node;
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < size; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Linkedlist ::Display()
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void Linkedlist ::Insert(int pos, int value)
{
    Node *Temp = new Node;
    Node *p = head;

    if (pos == 0)
    {
        Temp->data = value;
        Temp->next = head;
        head = Temp;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {

            Temp->data = value;
            Temp->next = p->next;
            p->next = Temp;
        }
    }
}
int Linkedlist ::Delete(int pos)
{
    int x = 0;
    struct Node *q;
    struct Node *p = head;
    if (pos < 1 || pos > Length() || head == NULL)
    {
        return -1;
    }
    if (pos == 1)
    {
        q = head;
        head = head->next;
        x = q->data;
        delete q;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
    return x;
}
int Linkedlist ::Length()
{
    int x = 0;
    Node *p = head;
    while (p != NULL)
    {
        x++;
        p = p->next;
    }
    return x;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    Linkedlist l1(arr, 5);
    l1.Insert(0, 1);
    l1.Insert(1, 2);
    l1.Insert(2, 3);
    l1.Insert(3, 4);
    cout << l1.Length();
    cout << endl;
    cout << l1.Delete(9);
    cout << l1.Delete(9);
    cout << endl;
    l1.Display();

    return 0;
}