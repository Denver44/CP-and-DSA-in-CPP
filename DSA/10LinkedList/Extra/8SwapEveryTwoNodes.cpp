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

  ~Node()
  {
    if (next)
      delete next;
  }
};

Node *swapEveryPair(Node *head)
{
  if (head->next == NULL)
    return head;
  Node *temp = head, *newhead = NULL, *tail = NULL;

  while (temp)
  {
    if (temp && temp->next)
    {
      Node *newTemp = temp->next->next;
      if (newhead == NULL)
      {
        newhead = temp->next;
        temp->next->next = temp;
        temp->next = newTemp;
      }
      else
      {
        tail->next = temp->next;
        temp->next->next = temp;
        temp->next = newTemp;
      }

      tail = temp;
      temp = newTemp;
      if (temp && temp->next == NULL)
        break;
    }
  }
  return newhead;
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
  Node *head = takeinput();
  head = swapEveryPair(head);
  print(head);
  delete head;
  return 0;
}
