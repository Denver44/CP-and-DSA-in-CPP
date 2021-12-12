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

int lenghtofLL(Node *head)
{
  int i = 0;
  while (head)
  {
    head = head->next;
    i++;
  }
  return i;
}
Node *bubbleSort(Node *head)
{
  Node *temp = head, *traversal = head, *newhead = head;
  int length = lenghtofLL(temp);
  Node *prev = NULL;
  Node *curr = head;

  for (int i = 0; i < length - 1; i++)
  {
    while (curr->next != NULL)
    {
      if (curr->data > curr->next->data && prev == NULL) // this means head Change.
      {
        Node *helper = curr->next;
        curr->next = helper->next;
        helper->next = curr;
        newhead = helper;
        prev = helper;
      }
      else if (curr->data > curr->next->data)
      {
        prev->next = curr->next;
        curr->next = curr->next->next;
        prev->next->next = curr;
        prev = prev->next;
      }
      else
      {
        prev = curr;
        curr = curr->next;
      }
    }
    prev = NULL;
    curr = newhead;
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
  Node *head = takeinput();
  head = bubbleSort(head);
  print(head);
}