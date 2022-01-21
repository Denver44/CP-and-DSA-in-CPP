#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
long base(int *freq, int *fact, int size)
{
    long b = 1;

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            b *= fact[freq[i]];
        }
    }
    return b;
}
long helper(int size, int *arr, int *fact, int *freq)
{
    if (size == 1 || size == 0)
        return 0;

    long ans = 0;
    long deno = base(freq, fact, size);
    for (int i = arr[0] + 1; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            ans += fact[size - 1] * freq[i] / deno;
        }
    }
    freq[arr[0]]--;
    ans += helper(size - 1, arr + 1, fact, freq);
    return ans;
}
long numberOfNumbersWithDuplicates(long num)
{
    string s = to_string(num);
    int size = s.size();
    int *arr = new int[size];
    int n = size - 1;
    while (num != 0)
    {
        int rem = num % 10;
        arr[n--] = rem;
        num /= 10;
    }
    int *fact = new int[size + 1];
    int freq[10] = {0};
    fact[0] = 1;
    for (int i = 0; i < size; i++)
    {
        fact[i + 1] = (i + 1) * fact[i];
        freq[arr[i]]++;
    }
    return helper(size, arr, fact, freq);
}

int main()
{
    long n;
    cin >> n;
    cout << numberOfNumbersWithDuplicates(n) << endl;
}
