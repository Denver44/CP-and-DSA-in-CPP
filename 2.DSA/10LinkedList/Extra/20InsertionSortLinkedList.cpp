//insertion sort iterative
#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

node *insertion_sort_LinkedList_itr(node *head)
{
  node *newHead = head, *prev = NULL, *curr = head, *start = head;
  while (curr->next)
  {
    if (curr->data > curr->next->data)
    {
      while (start->data < curr->next->data)
      {
        prev = start;
        start = start->next;
      }
      if (prev == NULL)
      {
        node *temp = curr->next;
        curr->next = curr->next->next;
        temp->next = newHead;
        newHead = temp;
      }
      else
      {
        node *temp = prev->next;
        prev->next = curr->next;
        curr->next = curr->next->next;
        prev->next->next = temp;
      }
    }
    else
    {
      curr = curr->next;
    }
    start = newHead;
    prev = NULL;
  }
  return newHead;
}

node *takeinput()
{
  int data;
  cin >> data;
  node *head = NULL, *tail = NULL;
  while (data != -1)
  {
    node *newnode = new node(data);
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
void print(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  node *head = takeinput();
  head = insertion_sort_LinkedList_itr(head);
  print(head);
}
