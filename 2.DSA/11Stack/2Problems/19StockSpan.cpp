#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    stack<int> st;
    int *span = new int[n];
    int *result = new int[n];
    st.push(0);    // We push the index for first index
    result[0] = 1; // and for first index it values will be 1.

    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[i] > arr[st.top()])
        {
            st.pop(); // if in stack no element are greater than me then got remive.
        }
        if (st.size() == 0)
        {
            result[i] = i + 1; // if stack size == 0 thats means there is no who is graeter than me so answer wlll be i+ 1;
        }
        else
        {
            result[i] = (i - st.top()); // We are Storing Index so top - i
        }
        st.push(i); // We push for the nect elemnt .
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}