#include <iostream>
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
    int BinarySearch(int value);
    void Set(int index, int value);
    int Min();
    int Max();
    int SumOfArray();
    float AverageOfArray();
    void ReverseArray();
    void LeftShift(int n);
    void LeftRotate(int n);
    void RightShift(int n);
    void RightRotate(int n);
    void Insertastsorted(int newvalue);
    int isSorted();
    void Rearrange();
};

void Array::Display()
{
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
void Array::Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Array::BinarySearch(int value)
{
    int left = 0;
    int right = length - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == value)
        {
            return (mid + 1);
        }
        else if (a[mid] < value)
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

void Array::Set(int index, int value)
{

    if (index >= 0 && index < length)
    {
        a[index] = value;
    }
}
int Array::Min()
{
    int min;
    min = a[0];

    for (int i = 1; i < length; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}
int Array::Max()
{
    int max;
    max = a[0];

    for (int i = 1; i < length; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}
int Array::SumOfArray()
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}
float Array::AverageOfArray()
{

    return (float)SumOfArray() / length;
}
void Array::ReverseArray()
{
    int i = 0;
    int p = length - 1;

    while (i < p)
    {
        Swap(&a[i], &a[p]);
        i++;
        p--;
    }
}
void Array::LeftShift(int n)
{

    while (n--)
    {
        for (int i = 0; i < length; i++)
        {
            a[i] = a[i + 1];
        }
        a[length - 1] = 0;
    }
}
void Array::LeftRotate(int n)
{
    while (n--)
    {
        int leftmost = a[0];
        for (int i = 0; i < length; i++)
        {
            a[i] = a[i + 1];
        }
        a[length - 1] = leftmost;
    }
}
void Array::RightShift(int n)
{

    while (n--)
    {
        for (int i = length - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = 0;
    }
}
void Array::RightRotate(int n)
{

    while (n--)
    {
        int rightmost = a[length - 1];

        for (int i = length - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = rightmost;
    }
}

void Array::Insertastsorted(int newvalue)
{
    if (length != size)
    {
        int i = length - 1;
        while (i >= 0 && a[i] > newvalue)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = newvalue;
        length++;
    }
}
int Array::isSorted()
{
    for (int i = 0; i < length - 1; i++)
    {

        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void Array::Rearrange()
{
    int i = 0;
    int p = length - 1;

    while (i < p)
    {
        while (a[i] < 0)
        {
            i++;
        }
        while (a[p] >= 0)
        {
            p--;
        }
        if (i < p)
        {
            Swap(&a[i], &a[p]);
        }
    }
}

int main()
{

    // Array *arr1;
    int size = 0;
    cout << "Enter the Size of the Array u want" << endl;
    cin >> size;

    // arr1 = new
    Array arr1(size);

    int option, index, value, deltedvalue, elemntfound, lowestvalue;

    do
    {
        cout << "What operation do you want to perform? Selection the option number. Enter 0 to exit." << endl;
        cout << "1 . Insert" << endl;
        cout << "2 . Append" << endl;
        cout << "3 . Delete" << endl;
        cout << "4 . Search" << endl;
        cout << "5 . SetValue" << endl;
        cout << "6 . LowestValueinArray" << endl;
        cout << "7 . HighestValueinArray" << endl;
        cout << "8 . SumOfArray" << endl;
        cout << "9 . AverageOfArray" << endl;
        cout << "10 . Reverse" << endl;
        cout << "11 . LeftShift" << endl;
        cout << "12 . LeftRotate" << endl;
        cout << "13 . RightShift" << endl;
        cout << "14 . RightRotate" << endl;
        cout << "15 . display" << endl;
        cout << "16 . Clear screen" << endl;
        cout << "0 . Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the Index and the value" << endl;
            cin >> index;
            cin >> value;
            arr1.Insert(index, value);
            break;
        case 2:
            cout << "Enter the value to append" << endl;
            cin >> value;
            arr1.Append(value);
            break;

        case 3:
            cout << "Enter the Index which u wantto Delete" << endl;
            cin >> index;
            deltedvalue = arr1.Delete(index);
            cout << "The Delete value is " << deltedvalue << endl;
            break;
        case 4:
            cout << "Enter the Value ur Searching" << endl;
            cin >> value;
            elemntfound = arr1.BinarySearch(value);
            cout << "The Value is at Index " << elemntfound << endl;
            break;
        case 5:
            cout << "Enter the Index and value u want to chnage" << endl;
            cin >> index;
            cin >> value;
            arr1.Set(index, value);
            cout << "The Value is changed Successfully" << endl;
            break;

        case 6:
            lowestvalue = arr1.Min();
            cout << "The LowestValue in the Array " << lowestvalue << endl;
            break;
        case 7:
            cout << "The highestvalue in the Array " << arr1.Max() << endl;
            break;
        case 8:
            cout << "The SumOfArray in the Array " << arr1.SumOfArray() << endl;
            break;
        case 9:
            cout << "The Average Value in the Array " << arr1.AverageOfArray() << endl;
            break;
        case 10:
            arr1.ReverseArray();
            cout << "The Reversed Array " << endl;
            arr1.Display();

            break;
        case 11:
            cout << "Enter the number for which u want to shift Array in Left Side" << endl;
            cin >> index;
            arr1.LeftShift(index);
            arr1.Display();
            break;
        case 12:
            cout << "Enter the number for which u want to Rotate Array in Left Side" << endl;
            cin >> index;
            arr1.LeftRotate(index);
            arr1.Display();
            break;
        case 13:
            cout << "Enter the number for which u want to shift Array in Right Side" << endl;
            cin >> index;
            arr1.RightShift(index);
            arr1.Display();
            break;
        case 14:
            cout << "Enter the number for which u want to Rotate Array in Right Side" << endl;
            cin >> index;
            arr1.RightRotate(index);
            arr1.Display();
            break;
        case 15:
            arr1.Display();
            break;
        case 16:
            system("cls");
            break;
        default:
            cout << "Enter proper Option number " << endl;
        }
    } while (option != 0);
    return 0;
}
