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

Node *helper(Node *head, int i, int j)
{
  int start = i - 1, end = j - 1;
  Node *temp1 = head, *temp2 = head;
  while (start > 0)
  {
    temp1 = temp1->next;
    start--;
  }
  while (end > 0)
  {
    temp2 = temp2->next;
    end--;
  }

  Node *prev1 = temp1->next;
  Node *prev2 = temp2->next;
  Node *curr1 = temp1->next->next;
  Node *curr2 = temp2->next->next;

  if (i == 0 && abs(i - j) == 1)
  {
    Node *prev1 = temp1;
    Node *curr1 = temp1->next;
    temp1->next = curr2;
    curr1->next = prev1;
    return curr1;
  }
  else if (i == 0 && j > 1)
  {
    Node *prev1 = temp1;
    Node *curr1 = temp1->next;

    prev2->next = curr1;
    prev1->next = curr2;
    temp2->next = prev1;
    prev1->next = curr2;
    return prev2;
  }
  else if (abs(i - j) == 1)
  {
    temp1->next = curr1;
    temp2->next = curr2;
    temp1->next->next = prev1;
  }
  else
  {
    temp2->next = prev1;
    temp1->next = prev2;
    temp1->next->next = curr1;
    temp2->next->next = curr2;
  }
  return head;
}

Node *swapNodes(Node *head, int i, int j)
{
  if (i > j)
    swap(i, j);
  return helper(head, i, j);
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
    int i, j;
    Node *head = takeinput();
    cin >> i;
    cin >> j;
    head = swapNodes(head, i, j);
    print(head);
  }
  return 0;
}