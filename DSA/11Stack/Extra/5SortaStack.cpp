#include <bits/stdc++.h>
using namespace std;
void insertAtRightPlace(stack<int> &s, int a)
{
  if (s.empty() || s.top() > a)
  {
    s.push(a);
    return;
  }

  int b = s.top();
  s.pop();
  insertAtRightPlace(s, a);
  s.push(b);
}

void sortStack(stack<int> &s)
{
  if (s.empty())
  {
    return;
  }

  int a = s.top();
  s.pop();
  sortStack(s);
  insertAtRightPlace(s, a);
}

int main()
{
  stack<int> input;
  int size, value;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> value;
    input.push(value);
  }
  sortStack(input);
  while (!input.empty())
  {
    cout << input.top() << " ";
    input.pop();
  }
  cout << endl;
}
