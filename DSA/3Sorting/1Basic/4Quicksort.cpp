#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

int partition(int arr[], int pivot, int l, int h)
{
    int i = l, j = l;

    while (i <= h)
    {
        if (arr[i] > pivot)
        {
            i++;
        }
        else
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
    return j - 1;
}
void quicksort(int arr[], int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int pivot = arr[h];
    int pi = partition(arr, pivot, l, h);

    quicksort(arr, l, pi - 1);
    quicksort(arr, (pi + 1), h);
}

int main()
{

    for (int n = 10; n <= 10000; n *= 10)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }

        chrono::time_point<chrono::system_clock> start, end;
        start = chrono::system_clock::now();
        quicksort(arr, 0, n - 1);
        end = chrono::system_clock::now();
        chrono ::duration<double> elapsed_seconds = end - start;
        time_t end_time = chrono::system_clock::to_time_t(end);
        cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s  for n = " << n << endl;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
        // delete arr;
    }

    return 0;
}