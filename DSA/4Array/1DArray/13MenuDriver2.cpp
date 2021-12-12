#include <iostream>
#include <cstdlib>
using namespace std;
class Array
{

private:
    int *a;
    int size;
    int length;
    void Swap(int *x, int *y);

public:
    Array()
    {
        size = 10;
        length = 0;
        a = new int[size];
    }
    Array(int SIZE)
    {
        size = SIZE;
        length = 0;
        a = new int[size];
    }
    ~Array()
    {
        delete[] a;
    }

    void Display();
    void Append(int value);
    void Insert(int pos, int value);
    int Delete(int pos);
    Array *merge(Array arr2);
};

void Array::Display()
{
    if (length == 0)
    {
        cout << "Array is empty";
        return;
    }

    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Array::Append(int value)
{
    if (length != size)
    {
        a[length++] = value;
    }
}

void Array::Insert(int pos, int value)
{
    if (pos <= length && pos >= 0)
    {
        for (int i = length; i > pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        length++;
    }
}
int Array::Delete(int pos)
{
    int x = 0;
    if (pos < length && pos >= 0)
    {
        x = a[pos];
        for (int i = pos; i < length - 1; i++)
        {
            a[i] = a[i + 1];
        }
        length--;
    }

    return x;
}
Array *Array::merge(Array arr2)
{

    Array *arr3 = new Array(length + arr2.length);
    int i, j, k;
    i = j = k = 0;

    while (i < length && j < arr2.length)
    {

        if (a[i] < arr2.a[j])
        {
            arr3->a[k++] = a[i++];
        }
        else
        {
            arr3->a[k++] = arr2.a[j++];
        }
    }

    for (; i < length; i++)
    {
        arr3->a[k++] = a[i];
    }
    for (; j < arr2.length; j++)
    {
        arr3->a[k++] = arr2.a[j];
    }

    arr3->length = length + arr2.length;
    return arr3;
}

int main()
{

    Array a;
    Array b;
    a.Insert(0, 1);
    a.Append(3);
    a.Append(5);
    b.Insert(0, 2);
    b.Append(4);
    b.Append(6);
    b.Append(7);
    a.Display();
    b.Display();

    Array *arr3;
    arr3 = a.merge(b);

    arr3->Display();

    return 0;
}
