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

Node *helper(Node *head, int i)
{
  if (head == NULL)
    return NULL;
  if (i == 0)
  {
    Node *temp = head->next;
    delete head;
    return temp;
  }
  head->next = helper(head->next, i - 1);
  return head;
}

Node *deleteNodeRec(Node *head, int pos)
{
  Node *temp = head;
  return helper(temp, pos);
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
    head = deleteNodeRec(head, pos);
    print(head);
  }

  return 0;
}