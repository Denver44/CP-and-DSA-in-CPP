#include <iostream>
using namespace std;

// Both Insertion and creation is done using this fucntion also.

void Insert(int *A, int n)
{
    //  Here n is the index.
    int i = n;
    int temp;
    temp = A[i];

    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

int Delete(int A[], int n)
{ // here n is the size of the array.
    // We can only delete the first element
    // so we take value of last element in var x
    int i, j, x, temp, val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i = 1;
    j = i * 2;
    while (j <= n - 1)
    {
        if (j < n - 1 && A[j + 1] > A[j])
            j = j + 1;
        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    return val;
}
int main()
{
    //  0 - Index is Ignorable.
    int h[] = {0, 10, 20, 30, 25, 5, 40, 35};

    for (int i = 2; i < 8; i++)
    {
        Insert(h, i);
    }
    for (int i = 1; i < 8; i++)
    {
        cout << h[i] << " ";
    }
    cout << endl;
    // This is called heap sort.
    for (int i = 7; i > 1; i--)
    {
        cout << Delete(h, i) << endl;
    }
    for (int i = 1; i < 8; i++)
    {
        cout << h[i] << " ";
    }

    return 0;
}