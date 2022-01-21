#include <bits/stdc++.h>
using namespace std;
// We store Index not the value.
// Because Value can be same.
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
    int *result = new int[n];
    st.push(0); // this time we go left to right
    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[i] > arr[st.top()])
        {
            int pos = st.top();
            result[pos] = arr[i];
            st.pop(); // we pop ear;y then push bevause it means we get grater element to ist right.
        }
        st.push(i); // this push is acutlauy for its to check greater value in rights.
    }
    while (st.size() > 0) // After this the index which are in stack that index has no grater value to its right so we have to make it rsult value -1.
    {
        int pos = st.top();

        result[pos] = -1;
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}