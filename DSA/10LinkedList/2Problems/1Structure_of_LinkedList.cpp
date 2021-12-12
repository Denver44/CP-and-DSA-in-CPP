#include <iostream>
using namespace std;
//  This is a user defined datatype
//  Its name is node.
//  It takes two value but u can add as many as u can but it will increse the size of Node only.
// 1. integer type value
// 2. adrress of another node
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

//-----------------------------------To dispaly the linked list.
void display(Node *head)
{
    // here we have send the address of head and take that address in a print name pointer of node type.
    Node *temp = head; // we have created a temp node pointer which have the address of the head.

    if (temp != NULL) // if head is null then no need to dipslay anything
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next; // this help to move forward;
        }
    }
    else
    {
        cout << "You have an empty Linked List" << endl;
    }
}
int main()
{

    // Node *head = new Node;
    // cout << head->data << endl;
    // cout << head->next << endl;
    // // as here head is pointer which contain a address of node created in heap. with value data 0 and nextptr as nullptr.

    // Node *first = new Node;
    // Node *second = new Node;
    // Node *third = new Node;
    // Node *fourth = new Node;

    // head->data = 1;

    // head->next = first;

    // first->data = 2;
    // first->next = second;
    // second->data = 3;
    // second->next = third;
    // third->data = 4;
    // third->next = fourth;
    // fourth->data = 5;
    // fourth->next = NULL;
    // display(head);

    // ---------------------------Second way.----------------------------

    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;
    Node *head = first; // here head is pointer which strore the address of the Node name First.
    cout << head->data << endl;
    cout << head->next << endl;
    display(head);

    return 0;
}