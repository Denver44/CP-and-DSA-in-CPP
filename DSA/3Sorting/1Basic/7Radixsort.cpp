// RADIX SORT TECHINQUE
// 

#include <bits/stdc++.h>
using namespace std;

void countingsort(int arr[], int size, int exp)
{
    int *ans = new int[size];
    int freq[10] = {0};

    for (int i = 0; i < size; i++)
        freq[arr[i] / exp % 10]++;

    // Perfix Sum
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }
    //Main Job
    for (int i = size - 1; i >= 0; i--)
    {
        int idx = freq[(arr[i] / exp) % 10] - 1;
        ans[idx] = arr[i];
        freq[(arr[i] / exp) % 10]--; //! IMPORTANT so that next time it will go to next address
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = ans[i];
    }
}

void Radixsort(int arr[], int s)
{
    int max = *max_element(arr, arr + s);
    int exp = 1;
    while (exp <= max)
    {
        countingsort(arr, s, exp);
        exp *= 10;
    }
}
int main()
{

    int arr[15] = {9, 60, 3, 50, 300, 4, 3, 9, 6, 4, 6, 5, 8, 9, 9};
    int size = 15;

    Radixsort(arr, size);

    // Prininng
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
