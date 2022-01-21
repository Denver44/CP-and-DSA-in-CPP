#include <iostream>

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

using namespace std;
void printIthNode(Node *head, int i)
{
  int len = 0;
  bool found = false;
  Node *temp = head;
  while (temp && found == false)
  {
    if (len == i)
    {

      cout << temp->data << endl;
      found = true;
    }
    temp = temp->next;
    len++;
  }
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

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    printIthNode(head, pos);
    cout << endl;
  }
  return 0;
}