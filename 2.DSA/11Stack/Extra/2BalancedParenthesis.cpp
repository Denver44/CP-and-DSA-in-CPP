#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
  stack<char> st;

  for (int i = 0; i < s.size(); i++)
  {

    if (s[i] == '(')
      st.push('(');
    else
    {
      if (!st.empty() && st.top() == '(')
      {
        st.pop();
      }
      else
      {
        return false;
      }
    }
  }

  if (st.size())
    return false;
  else
    return true;
}

int main()
{
  string input;
  cin >> input;
  cout << ((isBalanced(input)) ? "true" : "false");
}