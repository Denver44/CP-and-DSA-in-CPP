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

Node *skipMdeleteN(Node *head, int M, int N)
{
  if (M == 0)
    return NULL;
  if (N == 0)
    return head;
  Node *temp = head, *tail = head;
  ;
  while (temp)
  {
    int start = M;
    while (start && temp)
    {
      tail = temp;
      temp = temp->next;
      --start;
    }
    tail->next = NULL;
    int delstart = N;
    while (delstart && temp)
    {
      temp = temp->next;
      --delstart;
    }
    tail->next = temp;
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
    int m, n;
    cin >> m >> n;
    head = skipMdeleteN(head, m, n);
    print(head);
  }
  return 0;
}