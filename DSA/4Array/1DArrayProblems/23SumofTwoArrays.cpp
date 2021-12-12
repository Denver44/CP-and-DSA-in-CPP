#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int *arr1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    int *arr2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int i_size = n1 - 1;
    int j_size = n2 - 1;
    int len = (n1 > n2) ? n1 : n2;
    int *result = new int[len];
    int k = len - 1;
    int carry = 0;
    while (k >= 0)
    {
        int d = carry;
        if (i_size >= 0)
        {
            d += arr1[i_size];
        }
        if (j_size >= 0)
        {
            d += arr2[j_size];
        }
        carry = d / 10;
        d = d % 10;
        result[k] = d;
        j_size--;
        i_size--;
        k--;
    }
    if (carry > 0)
    {
        cout << carry << endl;
    }
    for (int i = 0; i < len; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
    
}