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
    int arr[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    int lowest = min(arr, 11);
    int max_value = max(arr, 11);
    int *hash = new int[max_value+1];
    for (int i = 0; i < max_value; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < 11; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = lowest; i <= max_value; i++)
    {
        if (hash[i] == 0)
        {
            cout << "The missing Element in the Array " << i << endl;
        }
    }

    delete[] hash;
    

        return 0;
}