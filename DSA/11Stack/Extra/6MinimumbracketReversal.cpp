#include <iostream>
#include <stack>
#include <string>
using namespace std;

int countBracketReversals(string input)
{
  int size = input.size();

  if (size % 2 == 1)
    return -1;

  stack<char> st;
  int ans = 0;

  for (int i = 0; i < size; i++)
  {
    if (input[i] == '{')
      st.push('{');
    else if (st.size() > 0 && input[i] == '}' && st.top() == '{')
      st.pop();
    else if ((st.empty() && input[i] == '}') || (st.top() == '}' && input[i] == '}'))
      st.push('}');
  }

  while (st.size() > 0)
  {
    char a = st.top();
    st.pop();
    char b = st.top();
    st.pop();
    if (a == b)
    {
      ans += 1;
    }
    else
    {
      ans += 2;
    }
  }

  if (st.size() > 0)
    return -1;
  else
    return ans;
}
int main()
{
  string input;
  cin >> input;
  cout << countBracketReversals(input);
}