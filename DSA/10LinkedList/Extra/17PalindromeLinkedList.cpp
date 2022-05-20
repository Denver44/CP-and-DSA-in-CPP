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

bool isPalindrome(Node *head)
{
  if (head == NULL || head->next == NULL)
    return true;

  Node *secondptr, *fastptr = head, *slowptr = head;
  while (1)
  {
    fastptr = fastptr->next->next;
    if (fastptr == nullptr) // EVEN LENGHTH
    {
      secondptr = slowptr->next;
      break;
    }
    if (fastptr->next == nullptr) // ODD LENGHTH
    {
      secondptr = slowptr->next->next;
      break;
    }
    slowptr = slowptr->next;
  }

  Node *r = NULL, *q = NULL;
  while (secondptr)
  {
    r = q;
    q = secondptr;
    secondptr = secondptr->next;
    q->next = r;
  }
  secondptr = q;

  while (secondptr != NULL && head != NULL)
  {
    if (secondptr->data != head->data)
      return false;
    secondptr = secondptr->next;
    head = head->next;
  }
  return true;
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

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    Node *head = takeinput();
    bool ans = isPalindrome(head);

    if (ans)
      cout << "true";
    else
      cout << "false";

    cout << endl;
  }

  return 0;
}