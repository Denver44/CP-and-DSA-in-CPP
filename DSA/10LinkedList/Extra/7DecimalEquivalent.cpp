#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Node
{
public:
  T data;
  Node *next;

  Node(T data)
  {
    next = NULL;
    this->data = data;
  }

  ~Node()
  {
    if (next != NULL)
    {
      delete next;
    }
  }
};

int decimal(Node<int> *head)
{

  stack<int> st;
  while (head)
  {
    st.push(head->data);
    head = head->next;
  }
  int ans = 0, i = 0, size = st.size();
  while (size--)
  {
    ans += (pow(2, i++) * st.top());
    st.pop();
  }

  return ans;
}

Node<int> *takeLLInput()
{
  int data;
  cin >> data;
  Node<int> *head = NULL, *tail = NULL;
  while (data != -1)
  {
    Node<int> *newnode = new Node<int>(data);
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

void printLL(Node<int> *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{

  Node<int> *head1 = takeLLInput();

  cout << decimal(head1) << endl;

  delete head1;
}
