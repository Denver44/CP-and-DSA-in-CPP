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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
  if (head1 == NULL)
    return head2;
  if (head2 == NULL)
    return head1;
  Node *head = NULL, *tail = NULL;

  if (head1->data <= head2->data)
  {
    head = head1;
    head1 = head1->next;
    tail = head;
    tail->next = NULL;
  }
  else
  {
    head = head2;
    head2 = head2->next;
    tail = head;
    tail->next = NULL;
  }

  while (head1 && head2)
  {
    if (head1->data <= head2->data)
    {
      tail->next = head1;
      tail = head1;
      head1 = head1->next;
      tail->next = NULL;
    }
    else
    {
      tail->next = head2;
      tail = head2;
      head2 = head2->next;
      tail->next = NULL;
    }
  }
  while (head1)
  {
    tail->next = head1;
    tail = head1;
    head1 = head1->next;
    tail->next = NULL;
  }
  while (head2)
  {
    tail->next = head2;
    tail = head2;
    head2 = head2->next;
    tail->next = NULL;
  }
  return head;
}

Node *split(Node *head)
{
  Node *temp, *fastptr = head, *slowptr = head;
  while (fastptr && fastptr->next)
  {
    temp = slowptr;
    slowptr = slowptr->next;
    fastptr = fastptr->next->next;
  }
  if (temp)
  {
    temp->next = NULL;
  }
  return slowptr;
}

Node *mergeSort(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  Node *p1 = head;
  Node *p2 = split(head);

  Node *newhead = mergeTwoSortedLinkedLists(mergeSort(p1), mergeSort(p2));
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
  int t;
  cin >> t;

  while (t--)
  {
    Node *head = takeinput();
    head = mergeSort(head);
    print(head);
  }

  return 0;
}