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
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    append(&arr, 11);
    append(&arr, 12);
    append(&arr, 13);
    insert(&arr, 1, 20);
    display(arr);

    return 0;
}
