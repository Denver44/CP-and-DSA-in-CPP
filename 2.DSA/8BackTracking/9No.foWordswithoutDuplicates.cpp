#include <bits/stdc++.h>
using namespace std;
// Here Eg we have Given number is 3124
// and now we have to ge the total no.of words grater than 3124 them here 4 is only grater than 3 so if we put 4 at first and permaute rest 3 then we can get geater than 3214.
// So this is easy to find using freq.
// Now we can get more combinbation of 3124 like 3214 and etc. for that now we use recursion
// We fixed three and we call recurison at arr+1. than we get the comibantaion 124 .
int helper(int n, int *input, int *fact, int *freq)
{
    if (n == 1 || n == 0)
        return 0;

    int ans = 0;
    for (int i = input[0] + 1; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            ans += fact[n - 1];
        }
    }

    freq[input[0]]--;
    ans += helper(n - 1, input + 1, fact, freq);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    int *fact = new int[n + 1];
    int freq[10] = {0};
    fact[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
        fact[i + 1] = (i + 1) * fact[i];
        freq[input[i]]++;
    }
    cout << helper(n, input, fact, freq);
    return 0;
}