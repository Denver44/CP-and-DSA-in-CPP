#include <bits/stdc++.h>
#include <chrono>
#include <ctime>
using namespace std;
// Bubble sort is like as we drop a heavy thing in water it goes deep down.
// Same manner the highest value goes down.

//1. The Highest Value get sort first in Bubble sort.
//2. Soretd vaule are sotred on right side.
//3. NOTE YOU WILL GET THE HIGHEST ELELMENT AFTER ONE PASS AT THE END OF THE ARRAY
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubblesort(int *arr, int size)
{
    bool flag; //4. This flag improve the sorting if one pass there is no swap it means the list is already sorted.

    for (int i = 1; i <= size - 1; i++) //5. This loop is for Traversal only. if size is 5 then only 4 traversal.
    {
        flag = false;
        for (int j = 0; j < size - i; j++) //6. This loop is used to compare j and j+1.
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true; // This make the Sorting Function Optimized.
                swap(&arr[j], &arr[j + 1]);
            }
        }
        if (flag == false)
        {
            break; //7. means for one whole traversal every memebr is it in place so thats mean everyone is sorted to each other next. so need to further traversal.
        }
    }
}

int main()
{

    for (int n = 10; n <= 1000000; n *= 10)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }

        chrono::time_point<chrono::system_clock> start, end;
        start = chrono::system_clock::now();
        Bubblesort(arr, n);
        end = chrono::system_clock::now();
        chrono ::duration<double> elapsed_seconds = end - start;
        time_t end_time = chrono::system_clock::to_time_t(end);
        cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s  for n = " << n << endl;
    }

    return 0;
}