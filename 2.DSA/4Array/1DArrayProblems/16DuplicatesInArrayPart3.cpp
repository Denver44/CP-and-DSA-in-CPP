#include <iostream>
using namespace std;

int max(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int *arr, int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[10] = {3, 6, 8, 8, 12, 15, 15, 15, 20, 20};

    int lowest = min(arr, 10);
    int max_value = max(arr, 10);
    int *hash = new int[max_value+1];
    for (int i = 0; i < max_value; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = lowest; i <= max_value; i++)
    {
        if (hash[i] > 1)
        {
            cout << "Total " << i << " Dupliactes of " << hash[i] << " has been found" << endl;
        }
    }

delete []hash;
   

    return 0;
}