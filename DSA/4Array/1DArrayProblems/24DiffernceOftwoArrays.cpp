#include <bits/stdc++.h>
using namespace std;
// here the array2 will always be grate than array1.
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
    int len = n2;
    int *result = new int[len];
    int i_size = n1 - 1;
    int j_size = n2 - 1;
    int k = len - 1;
    int carry = 0;
    while (k >= 0)
    {
        int d = 0;
        int a1_val = (i_size >= 0) ? arr1[i_size] : 0;
        if (arr2[j_size] + carry >= a1_val)
        {
            d = arr2[j_size] + carry - a1_val;
            carry = 0;
        }
        else
        {
            d = arr2[j_size] + carry + 10 - a1_val;
            carry = -1;
        }
        result[k] = d;
        j_size--;
        i_size--;
        k--;
    }
    int idx = 0;
    while (idx < len)
    {
        if (result[idx] == 0)
        {
            idx++;
        }
        else
        {
            break;
        }
    }
    while (idx < len)
    {
        cout << result[idx] << endl;
        idx++;
    }

    return 0;
}