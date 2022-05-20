//Write a function AlternatingSplit() that takes one list and divides up its nodes to make two smaller lists a and b.
//The sublists should be made from alternating elements in the original list.
//nodes should be in the reverse order of which they occurred in the source list
#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
  T data;
  Node *next;

  Node(T data)
  {
    next = NULL;
    //(*this).data = data;
    this->data = data;
  }

  ~Node()
  {
    if (next != NULL)
    {
      delete next;
    }
  }
};
Node<int> *Reverse(Node<int> *head)
{
  Node<int> *r = NULL, *q = NULL;
  while (head)
  {
    r = q;
    q = head;
    head = head->next;
    q->next = r;
  }
  return q;
}

void AlternatingSplit(Node<int> *head)
{

  Node<int> *head1 = NULL, *head2 = NULL, *head1tail = NULL, *head2tail = NULL, *temp = head;
  int x = 1;
  while (temp)
  {
    if (x == 1)
    {
      if (head1 == NULL)
      {
        head1 = temp;
        head1tail = temp;
        temp = temp->next;
        head1tail->next = NULL;
      }
      else
      {
        head1tail->next = temp;
        head1tail = temp;
        temp = temp->next;
        head1tail->next = NULL;
      }
    }
    else
    {
      if (head2 == NULL)
      {
        head2 = temp;
        head2tail = temp;
        temp = temp->next;
        head2tail->next = NULL;
      }
      else
      {
        head2tail->next = temp;
        head2tail = temp;
        temp = temp->next;
        head2tail->next = NULL;
      }
    }
    x ^= 1;
  }

  Node<int> *first = Reverse(head1);
  Node<int> *second = Reverse(head2);
  while (first)
  {
    cout << first->data << " ";
    first = first->next;
  }
  cout << endl;
  while (second)
  {
    cout << second->data << " ";
    second = second->next;
  }
}
Node<int> *takeLLInput()
{
  int data;
  cin >> data;
  Node<int> *head = NULL, *tail = NULL;
  while (data != -1)
  {
    Node<int> *newnode = new Node<int>(data);
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

void printLL(Node<int> *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  Node<int> *head = takeLLInput();

  AlternatingSplit(head);
}
