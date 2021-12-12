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

Node *reverse(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *newhead = reverse(head->next);
  Node *tail = head->next;
  tail->next = head;
  head->next = NULL;
  return newhead;
}
Node *NextLargeNumber(Node *head)
{

  Node *newhead = reverse(head), *tail = NULL;
  Node *temp = newhead;
  int carry = 0, i = 1, newdata;
  while (temp)
  {
    if (i)
    {
      newdata = temp->data + (i--) + carry;
    }
    else
    {
      newdata = temp->data + carry;
    }
    carry = newdata / 10;
    temp->data = newdata % 10;
    tail = temp;
    temp = temp->next;
  }

  if (carry > 0)
  {
    Node *newNode = new Node(carry);
    tail->next = newNode;
  }

  return reverse(newhead);
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

  head = NextLargeNumber(head);
  print(head);
  return 0;
}
