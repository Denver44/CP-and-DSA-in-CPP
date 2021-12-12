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

int helper(Node *head)
{
  if (head == nullptr)
  {
    return 0;
  }
  return 1 + helper(head->next);
}

int length(Node *head)
{
  Node *temp = head;
  return helper(temp);
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
    cout << length(head) << "\n";
  }
}