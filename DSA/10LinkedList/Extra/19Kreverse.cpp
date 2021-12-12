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
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL)
  {
    Node *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }

  return prev;
}

Node *kReverse(Node *head, int k)
{
  //Write your code here
  if (head == NULL || head->next == NULL || k == 0 || k == 1)
  {
    return head;
  }
  Node *curr = head;
  Node *temp = head;
  Node *prev = NULL;

  int count = 0;
  Node *temphead = head;
  while (count <= k - 1 && curr != NULL)
  {
    curr = curr->next;
    count++;
  }

  if (curr == NULL)
  {
    return reverse(temphead);
  }

  temp = curr->next;
  curr->next = NULL;
  Node *newhead = reverse(temphead);
  Node *finalhead = newhead;
  Node *end = newhead;
  while (end->next != NULL)
  {
    end = end->next;
  }
  prev = end;

  while (temp != NULL)
  {
    count = 0;
    temphead = temp;
    while (count != k - 1 && curr != NULL)
    {
      curr = curr->next;
    }

    if (curr == NULL)
    {
      end->next = reverse(temphead);
      break;
    }

    temp = curr->next;
    curr->next = NULL;
    newhead = reverse(temphead);
    end->next = newhead;
    while (end->next != NULL)
    {
      end = end->next;
    }
    prev = end;
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
  int t;
  cin >> t;

  while (t--)
  {
    Node *head = takeinput();
    int k;
    cin >> k;
    head = kReverse(head, k);
    print(head);
  }

  return 0;
}