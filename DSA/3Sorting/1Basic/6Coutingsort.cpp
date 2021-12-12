// Counting  SORT TECHINQUE This Techinque is used when the range between max and min element is small.
// As we have to mkae a freq array so ot will take A lot of Spcae.
// Mainly it is used in making rank list.
// It is Stable Sorting Algorithm.
#include <bits/stdc++.h>
using namespace std;

void countingsort(int arr[], int size, int max, int min)
{
    int range = max - min + 1;
    int *freq = new int[range];
    int *ans = new int[size];
    // Intializing all Values to Zeros.
    for (int i = 0; i < range; i++)
        freq[i] = 0;
    //Freqency array updation
    for (int i = 0; i < size; i++)
        freq[arr[i] - min]++;

    // Perfix Sum
    for (int i = 1; i < range; i++)
    {
        freq[i] += freq[i - 1];
    }
    //Main Job
    for (int i = size - 1; i >= 0; i--)
    {
        int val = arr[i];
        int pos = freq[val - min];
        int index = pos - 1;
        ans[index] = val;
        freq[val - min]--; //! IMPORTANT so that next time it will go to next address
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = ans[i];
    }
  
}

int main()
{

    int arr[15] = {95, 96, 93, 95, 38, 44, 13, 29, 76, 34, 66, 55, 88, 19,19};
    int size = 15;
    int max = *max_element(arr, arr + size);
    int min = *min_element(arr, arr + size);
    cout << max << "   " << min << endl;

    countingsort(arr, size, max, min);

    // Prininng
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
