#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> reverseKElements(queue<int> &input, int k)
{

  stack<int> helper, helper2;
  while (!input.empty())
  {
    int a = input.front();
    helper.push(a);
    input.pop();
  }
  while (helper.size() != k)
  {
    helper2.push(helper.top());
    helper.pop();
  }
  while (!helper.empty())
  {
    input.push(helper.top());
    helper.pop();
  }
  while (!helper2.empty())
  {
    input.push(helper2.top());
    helper2.pop();
  }
  return input;
}

int main()
{
  int n, k;
  cin >> n >> k;

  queue<int> q;

  for (int i = 0, temp; i < n; i++)
  {
    cin >> temp;
    q.push(temp);
  }

  queue<int> ans = reverseKElements(q, k);

  while (!ans.empty())
  {
    cout << ans.front() << " ";
    ans.pop();
  }
}