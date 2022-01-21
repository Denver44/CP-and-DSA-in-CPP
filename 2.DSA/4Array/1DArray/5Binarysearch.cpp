#include <iostream>
using namespace std;
struct Array
{

    int a[10];
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
    // int l = 0;
    // int h = arr.length - 1;
    // int mid;

    // while (l <= h)
    // {
    //     mid = (l + h) / 2;
    //     if (arr.a[mid] == value)
    //     {
    //         return (mid + 1);
    //     }
    //     else if (arr.a[mid] < value)
    //     {
    //         l = mid + 1;
    //     }
    //     else
    //     {
    //         h = mid - 1;
    //     }
    // }
    return -1;
}
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 10};

    cout << binarysearch(arr, 2) << endl;
    display(arr);
    cout << endl;

    return 0;
}
