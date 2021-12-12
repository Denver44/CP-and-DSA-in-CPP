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

int main()
{
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    append(&arr, 15);
    append(&arr, 12);
    append(&arr, 13);
    insert(&arr, 1, 20);
    // cout << Delete(&arr, 0) << endl;
    // cout << Delete(&arr, 2) << endl;
    // cout << Delete(&arr, 3) << endl;
    display(arr);
    cout << endl;
    cout << linearsearch(&arr, 5) << endl;
    cout << linearsearch(&arr, 5) << endl;
    cout << linearsearch(&arr, 5) << endl;
    cout << linearsearch(&arr, 5) << endl;
    cout << linearsearch(&arr, 5) << endl;
    cout << linearsearch(&arr, 5) << endl;
    // cout << linearsearch(&arr, 20) << endl;
    display(arr);

    return 0;
}
