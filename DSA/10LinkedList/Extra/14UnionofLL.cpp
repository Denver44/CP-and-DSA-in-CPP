#include <bits/stdc++.h>
using namespace std;

template <typename T>
class ListNode
{
public:
  T data;
  ListNode<T> *next;
  ListNode<T>(T data)
  {
    this->data = data;
    next = NULL;
  }
};

ListNode<int> *unionOf2LL(ListNode<int> *head1, ListNode<int> *head2)
{
  map<int, int> map1, map2;
  ListNode<int> *temp1 = head1, *temp2 = head2, *newhead = NULL, *newtail = NULL;
  while (temp1)
  {
    map1[temp1->data]++;
    temp1 = temp1->next;
  }
  while (temp2)
  {
    map2[temp2->data]++;
    temp2 = temp2->next;
  }

  for (auto i : map2)
  {
    if (map1.find(i.first) == map1.end())
    {
      map1[i.first] = i.second;
    }
    else if (map1[i.first] < i.second)
      map1[i.first] = i.second;
  }
  for (auto i : map1)
  {
    for (int j = 0; j < i.second; j++)
    {
      if (newhead == NULL)
      {
        ListNode<int> *node1 = new ListNode<int>(i.first);
        newhead = node1;
        newtail = node1;
      }
      else
      {
        ListNode<int> *node2 = new ListNode<int>(i.first);
        newtail->next = node2;
        newtail = node2;
      }
    }
  }
  return newhead;
}

ListNode<int> *createlist()
{
  ListNode<int> *head = NULL;
  ListNode<int> *rear = NULL;
  int data;
  cin >> data;
  while (data != -1)
  {
    ListNode<int> *newnode = new ListNode<int>(data);
    if (head == NULL)
    {
      head = newnode;
      rear = head;
    }
    else
    {
      rear->next = newnode;
      rear = rear->next;
    }
    cin >> data;
  }
  return head;
}

void print(ListNode<int> *head)
{
  while (head != NULL)
  {
    cout << head->data << endl;
    head = head->next;
  }
}

int main()
{
  ListNode<int> *head1 = createlist();
  ListNode<int> *head, *head2 = createlist();
  head = unionOf2LL(head1, head2);
  print(head);
}
