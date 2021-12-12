#include <bits/stdc++.h>
using namespace std;
// For the Largest area Historgram
// we have to find lowest point towards rght side amd lowest side from right side.
// then take diff of right - left - 1 and we will get width.
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
    int *rb = new int[n];
    st.push(n - 1);
    rb[n - 1] = n;
    // --------------------------------------- We are use Next smaller element that  u.
    for (int i = n - 2; i >= 0; i--)
    {

        while (st.size() > 0 && arr[i] <= arr[st.top()]) // if u less than me i m not going to pop but if u are graeter than i will pop u.
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            rb[i] = n;
        }
        else
        {
            rb[i] = st.top();
        }
        st.push(i);
    }
    stack<int> st1;
    int *lb = new int[n];
    st1.push(0);
    lb[0] = -1;
    for (int i = 1; i < n; i++)
    {

        while (st1.size() > 0 && arr[i] <= arr[st1.top()])
        {
            st1.pop();
        }
        if (st1.size() == 0)
        {
            lb[i] = -1;
        }
        else
        {
            lb[i] = st1.top();
        }
        st1.push(i);
    }

    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int width = rb[i] - lb[i] - 1; // as index start from 0 thats why we subtarct 1 also.
        // cout << rb[i] << " " << lb[i] << " this for n " << i + 1 << endl;

        int area = arr[i] * width;
        // cout << width << " " << area << " this for n " << i + 1 << endl;
        if (area > maxArea)
        {
            maxArea = area;
        }
    }
    cout << maxArea << endl;
    return 0;
}
