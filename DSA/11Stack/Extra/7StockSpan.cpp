#include <iostream>
using namespace std;

#include <stack>
int *stockSpan(int *price, int size)
{

  stack<int> st;
  int *arr = new int[size];
  arr[0] = 1;
  st.push(0);
  for (int i = 1; i < size; i++)
  {
    while (st.size() > 0 && price[st.top()] < price[i])
    {
      st.pop();
    }
    if (st.empty())
    {
      st.push(i);
      arr[i] = i + 1;
    }
    else
    {
      arr[i] = i - st.top();
      st.push(i);
    }
  }

  return arr;
}
int main()
{
  int size;
  cin >> size;

  int *input = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> input[i];
  }

  int *output = stockSpan(input, size);
  for (int i = 0; i < size; i++)
  {
    cout << output[i] << " ";
  }

  cout << "\n";

  delete[] input;
  delete[] output;
}