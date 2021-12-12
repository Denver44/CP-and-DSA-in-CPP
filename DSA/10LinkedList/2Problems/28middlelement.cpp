#include <iostream>
using namespace std;
// this is a user defined datatype
// its name is node
// it takes two vaalue
//1 integer type value
// 2 adrress of another node
struct Node
{
    int data;
    Node *next;
};

// to dispaly the linked list.
void display(Node *print)
{
    // here we have send the address of head and take that address in a print name pointer of node type.
    Node *temp = print;
    // we have created a temp node ppinter which have the address of the head.

    if (temp != NULL)
    {
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next; // this help to move forward;
        }
    }
    cout << endl;
}
void middleelemnt(Node *first)
{

    Node *fastptr = first;
    Node *slowptr = first;

    if (first != NULL)
    {
        while (fastptr != NULL && fastptr->next != NULL)
        {
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
        }
        cout << "Middle element " << slowptr->data << endl;
    }
}
int main()
{

    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;

    display(head);
    middleelemnt(head);

    return 0;
}