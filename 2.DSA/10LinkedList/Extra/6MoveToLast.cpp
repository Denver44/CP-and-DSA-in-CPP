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

Node<int> *lastNodefunc(Node<int> *head)
{
  while (head->next)
  {
    head = head->next;
  }
  return head;
}

Node<int> *func(Node<int> *head, int n)
{
  Node<int> *temp = head;
  Node<int> *lastNode = lastNodefunc(temp);
  Node<int> *newhead = NULL, *newTail = NULL, *stop = lastNode;
  while (temp && temp != stop)
  {
    if (temp->data == n)
    {
      if (newhead == NULL)
      {
        lastNode->next = temp;
        lastNode = temp;
        temp = temp->next;
        lastNode->next = NULL;
      }
      else
      {
        newTail->next = temp->next;
        lastNode->next = temp;
        lastNode = temp;
        temp = temp->next;
        lastNode->next = NULL;
      }
    }
    else
    {
      if (newhead == NULL)
      {
        newhead = temp;
      }
      newTail = temp;
      temp = temp->next;
    }
  }

  if (newhead == NULL)
    return head;

  return newhead;
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

  Node<int> *head1 = takeLLInput();
  int n;
  cin >> n;
  printLL(func(head1, n));
  delete head1;
}
