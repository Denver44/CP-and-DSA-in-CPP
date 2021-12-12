#include <bits/stdc++.h>
#define pp pair<Node *, Node *>
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

// --------------- BEST APPROACH--------------
Node *reverseLinkedListRec(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *newHead = reverseLinkedListRec(head->next);
  Node *tail = head->next;
  tail->next = head;
  head->next = NULL;
  return newHead;
}

// ---------------- USING PAIR----------------

pp helper(Node *head)
{

  if (head == NULL || head->next == NULL)
    return {head, head};

  pp smallAns = helper(head->next);
  smallAns.second->next = head;
  head->next = NULL;
  return {smallAns.first, head};
}
Node *reverseLinkedListRec(Node *head)
{

  return helper(head).first;
}
// ----------------- O(N^2)
Node *reverseLinkedListRec(Node *head)
{

  if (head == NULL || head->next == NULL)
    return head;

  Node *smallAns = reverseLinkedListRec(head->next);
  Node *temp = smallAns;
  while (temp->next)
  {
    temp = temp->next;
  }
  temp->next = head;
  head->next = NULL;
  return smallAns;
}

Node *reverse(Node *p, Node *q, Node *&head)
{
  if (p != NULL)
  {
    reverse(p->next, p, head);
    p->next = q;
  }
  else
  {
    head = q;
  }
}
Node *reverseLinkedListRec(Node *head)
{
  Node *newHead = NULL;
  reverse(head, NULL, newHead);
  return newHead;
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
    head = reverseLinkedListRec(head);
    print(head);
  }

  return 0;
}