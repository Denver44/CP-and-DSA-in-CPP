//***********************************MERGE SORT TECHINQUE**********************************//
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
void merge(int arr[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int *temp = new int[h + 1]; // Temporaray Array.
    int k = l;                  // K is for the Tempoarray Array to put element according to its value at correct  index

    while (i <= m && j <= h)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];

        else
            temp[k++] = arr[j++];
    }

    for (; i <= m; i++)
    {
        temp[k++] = arr[i];
    }

    for (; j <= h; j++)
    {
        temp[k++] = arr[j];
    }
    // filling back in arr from temp.
    for (int i = l; i < h + 1; i++)
    {
        arr[i] = temp[i];
    }

    delete[] temp;
}
void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int m = (left + right) / 2;
        mergesort(arr, left, m);
        mergesort(arr, m + 1, right);
        merge(arr, left, m, right);
    }
}

int main()
{

    for (int n = 10; n <= 100000; n *= 10)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }

        chrono::time_point<chrono::system_clock> start, end;
        start = chrono::system_clock::now();
        mergesort(arr, 0, n - 1);
        end = chrono::system_clock::now();
        chrono ::duration<double> elapsed_seconds = end - start;
        time_t end_time = chrono::system_clock::to_time_t(end);
        cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s  for n = " << n << endl;

        delete[] arr;
        // delete arr;
    }

    return 0;
}