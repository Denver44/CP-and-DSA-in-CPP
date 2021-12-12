#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

Node *reverseLinkedList(Node *head)
{
  Node *curr = NULL, *prev = NULL;
  while (head)
  {
    prev = curr;
    curr = head;
    head = head->next;
    curr->next = prev;
  }
  return curr;
}
Node *takeinput()
{
  int data;
  cin >> data;
  Node *head = NULL, *tail = NULL;
  while (data != -1)
  {
    Node *newnode = new Node(data);
    if (head == NULL)
    {
      head = newnode;
      tail = newnode;
    }
    else
    {
      tail->next = newnode;
      tail = newnode;
    }
    cin >> data;
  }
  return head;
}

void print(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  cout << "\n";
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    Node *head = takeinput();
    head = reverseLinkedList(head);
    print(head);
  }

  return 0;
}