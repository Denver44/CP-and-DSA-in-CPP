
#include <bits/stdc++.h>
using namespace std;

int postfixEvaluation(string s)
{
  int len = s.size();
  stack<int> st;
  int a, b, res;

  for (int i = 0; i < len; i++)
  {

    if (s[i] >= '0' && s[i] <= '9')
    {
      st.push(s[i] - '0');
    }
    else
    {

      b = st.top();
      st.pop();
      a = st.top();
      st.pop();

      switch (s[i])
      {
      case '+':
        res = a + b;
        st.push(res);
        break;
      case '-':
        res = a - b;
        st.push(res);
        break;
      case '*':
        res = a * b;
        st.push(res);
        break;
      case '/':
        res = a / b;
        st.push(res);
        break;
      }
    }
  }
  return st.top();
}

int precdence(char c)
{
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

void evaluatePostfix(char exp[])
{
  int len = strlen(exp);
  stack<char> s;
  string postfix = "";
  for (int i = 0; i < len; i++)
  {
    if (exp[i] >= '0' && exp[i] <= '9')
    {
      postfix += exp[i];
    }
    else if (exp[i] == '(')
    {
      s.push(exp[i]);
    }
    else if (exp[i] == ')')
    {
      while (s.top() != '(')
      {
        char temp = s.top();
        postfix += temp;
        s.pop();
      }
      s.pop();
    }
    else
    {
      if (s.empty())
        s.push(exp[i]);

      else
      {
        if (precdence(exp[i]) > precdence(s.top()))
        {
          s.push(exp[i]);
        }
        else if (precdence(exp[i]) == precdence(s.top()) && exp[i] == '^')
        {
          s.push(exp[i]);
        }
        else
        {
          while (!s.empty() && (precdence(exp[i]) <= precdence(s.top())))
          {
            char temp = s.top();
            s.pop();
            postfix += temp;
          }
          s.push(exp[i]);
        }
      }
    }
  }

  while (!s.empty())
  {

    postfix += s.top();
    s.pop();
  }

  cout << postfix << endl;
  cout << postfixEvaluation(postfix) << endl;
}

//Driver program to test above functions
int main()
{
  char exp[1000];
  cin >> exp;
  evaluatePostfix(exp);
  return 0;
}
