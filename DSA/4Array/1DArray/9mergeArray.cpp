#include <iostream>
using namespace std;
struct Array
{

    int a[20];
    int size;
    int length;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

void append(struct Array *arr, int value)
{
    if (arr->length != arr->size)
    {
        arr->a[arr->length] = value;
        arr->length++;
    }
}

void insert(struct Array *arr, int pos, int value)
{
    if (pos <= arr->length && pos >= 0)
    {
        for (int i = arr->length; i > pos; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[pos] = value;
        arr->length++;
    }
}
int Delete(struct Array *arr, int pos)
{
    int x = 0;
    if (pos < arr->length && pos >= 0)
    {
        x = arr->a[pos];
        for (int i = pos; i < arr->length - 1; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->length--;
    }

    return x;
}
void change(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearsearch(struct Array *arr, int value)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->a[i] == value)
        {
            if (i != 0)
            {
                change(&arr->a[i], &arr->a[i - 1]);
            }

            return (i + 1);
        }
    }
    return -1;
}

int binarysearch(struct Array arr, int value)
{
    int left = 0;
    int right = arr.length - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr.a[mid] == value)
        {
            return (mid + 1);
        }
        else if (arr.a[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int get(struct Array a, int index)
{
    if (index >= 0 && index < a.length)
    {
        return a.a[index];
    }
    return -1;
}

void set(struct Array *arr, int index, int value)
{

    if (index >= 0 && index < arr->length)
    {
        arr->a[index] = value;
    }
}
int min(struct Array arr)
{
    int min;
    min = arr.a[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] < min)
        {
            min = arr.a[i];
        }
    }

    return min;
}
int max(struct Array arr)
{
    int max;
    max = arr.a[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] > max)
        {
            max = arr.a[i];
        }
    }

    return max;
}
int sum(struct Array arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.a[i];
    }

    return sum;
}
float avg(struct Array arr)
{

    return (float)sum(arr) / arr.length;
}
void reverse(struct Array *arr)
{
    int i = 0;
    int p = arr->length - 1;
    // int temp;

    // while (i < p)
    // {
    //     temp = arr->a[i];
    //     arr->a[i] = arr->a[p];
    //     arr->a[p] = temp;
    //     i++;
    //     p--;
    // }
    while (i < p)
    {
        change(&arr->a[i], &arr->a[p]);
        i++;
        p--;
    }
}
void leftshift(struct Array *arr, int n)
{

    while (n--)
    {
        for (int i = 0; i < arr->length; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->a[arr->length - 1] = 0;
    }
}
void leftrotate(struct Array *arr, int n)
{
    while (n--)
    {
        int leftmost = arr->a[0];
        for (int i = 0; i < arr->length; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->a[arr->length - 1] = leftmost;
    }
}
void rightshift(struct Array *arr, int n)
{

    while (n--)
    {
        for (int i = arr->length - 1; i > 0; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[0] = 0;
    }
}
void rightrotate(struct Array *arr, int n)
{

    while (n--)
    {
        int rightmost = arr->a[arr->length - 1];

        for (int i = arr->length - 1; i > 0; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[0] = rightmost;
    }
}

void Insertastsorted(struct Array *arr, int newvalue)
{
    if (arr->length != arr->size)
    {
        int i = arr->length - 1;
        while (i >= 0 && arr->a[i] > newvalue)
        {
            arr->a[i + 1] = arr->a[i];
            i--;
        }
        arr->a[i + 1] = newvalue;
        arr->length++;
    }
}
int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {

        if (arr.a[i] > arr.a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void Rearrange(struct Array *arr)
{
    int i = 0;
    int p = arr->length - 1;

    while (i < p)
    {
        while (arr->a[i] < 0)
        {
            i++;
        }
        while (arr->a[p] >= 0)
        {
            p--;
        }
        if (i < p)
        {
            change(&arr->a[i], &arr->a[p]);
        }
    }
}

struct Array *merge(struct Array *arr1, struct Array *arr2)
{

    struct Array *arr3 = new struct Array;
    int i, j, k;
    i = j = k = 0;

    while (i < arr1->length && j < arr2->length)
    {
        

        if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i++];
        }
        else
        {
            arr3->a[k++] = arr2->a[j++];
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->a[k++] = arr1->a[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->a[k++] = arr2->a[j];
    }

    arr3->length = arr1->length + arr2->length;
    arr3->size = 20;
    return arr3;
}
int main()
{

    struct Array arr1 = {{2, 6, 10, 15, 25, 40}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20, 27}, 10, 6};
    struct Array *arr3;

    arr3 = merge(&arr1, &arr2);

    display(*arr3);

    return 0;
}
