#include <iostream>
using namespace std;

#include <queue>
class Stack
{
  queue<int> q1, q2;
  int size;

public:
  Stack()
  {
    size = 0;
  }
  int getSize()
  {
    return size;
  }
  bool isEmpty()
  {
    return size == 0;
  }

  void push(int element)
  {
    if (q1.empty() && q2.empty())
    {
      q1.push(element);
    }
    else if (!q1.empty() && q2.empty())
    {
      q1.push(element);
    }
    else
    {
      q2.push(element);
    }
    size++;
  }

  int pop()
  {
    if (size == 0)
      return -1;

    int a = 0;
    if (q2.empty())
    {
      while (q1.size() > 1)
      {
        q2.push(q1.front());
        q1.pop();
      }
      a = q1.front();
      q1.pop();
    }
    else
    {
      while (q2.size() > 1)
      {
        q1.push(q2.front());
        q2.pop();
      }
      a = q2.front();
      q2.pop();
    }
    size--;
    return a;
  }

  int top()
  {
    if (size == 0)
      return -1;
    int a = 0;
    if (q2.empty())
    {
      while (q1.size() > 1)
      {
        q2.push(q1.front());
        q1.pop();
      }
      a = q1.front();
      q2.push(a);
      q1.pop();
    }
    else
    {
      while (q2.size() > 1)
      {
        q1.push(q2.front());
        q2.pop();
      }
      a = q2.front();
      q1.push(a);
      q2.pop();
    }
    return a;
  }
};
int main()
{
  Stack st;

  int q;
  cin >> q;

  while (q--)
  {
    int choice, input;
    cin >> choice;
    switch (choice)
    {
    case 1:
      cin >> input;
      st.push(input);
      break;
    case 2:
      cout << st.pop() << "\n";
      break;
    case 3:
      cout << st.top() << "\n";
      break;
    case 4:
      cout << st.getSize() << "\n";
      break;
    default:
      cout << ((st.isEmpty()) ? "true\n" : "false\n");
      break;
    }
  }
}