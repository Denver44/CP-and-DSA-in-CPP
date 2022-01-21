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

Node *evenAfterOdd(Node *head)
{

  Node *odd = NULL, *even = NULL;
  Node *oddtail = NULL, *eventail = NULL;
  Node *temp = head;
  while (temp)
  {
    if (temp->data % 2 == 1)
    {
      if (odd == NULL)
      {
        odd = temp;
        oddtail = temp;
        temp = temp->next;
        oddtail->next = NULL;
      }
      else
      {
        oddtail->next = temp;
        oddtail = temp;
        temp = temp->next;
        oddtail->next = NULL;
      }
    }
    else
    {

      if (even == NULL)
      {
        even = temp;
        eventail = temp;
        temp = temp->next;
        eventail->next = NULL;
      }
      else
      {
        eventail->next = temp;
        eventail = temp;
        temp = temp->next;
        eventail->next = NULL;
      }
    }
  }

  if (odd == NULL)
    return even;
  else if (even == NULL)
    return odd;
  else
  {
    oddtail->next = even;
    return odd;
  }
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
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Node *head = takeinput();
    head = evenAfterOdd(head);
    print(head);
  }
  return 0;
}