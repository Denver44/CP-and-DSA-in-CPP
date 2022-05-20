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
    int *result = new int[n];
    st.push(n - 1);     // fix for last elment has no grater element for it.
    result[n - 1] = -1; // fix thats why n-1 has value -1.
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && arr[i] > arr[st.top()])
        {
            st.pop(); // as i nedd graeter than me. so every values whihc is less than me get pop.
        }
        if (st.size() == 0) // while doing poping if stack size get zero thats means result is -1 there is no one graeter tha me.
        {
            result[i] = -1;
        }
        else // if there is element thats means u r value is graeter than me so result will be the vlaue of index.
        {
            result[i] = arr[st.top()];
        }

        st.push(i); // we are pusing each index after pop and result assign.
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}