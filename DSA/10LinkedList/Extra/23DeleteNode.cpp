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

Node *deleteNode(Node *head, int pos)
{

  if (pos == 0)
  {
    head = head->next;
  }
  else
  {
    int len = 0;
    Node *temp = head;
    while (len < pos - 1 && temp->next)
    {
      temp = temp->next;
      len++;
    }
    if (temp->next == NULL)
      return head;
    Node *a = temp->next->next;
    delete temp->next;
    temp->next = a;
  }
  return head;
}
Node *takeinput()
{
  int data;
  cin >> data;
  Node *head = NULL, *tail = NULL;
  while (data != -1)
  {
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
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
  cout << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
  }

  return 0;
}