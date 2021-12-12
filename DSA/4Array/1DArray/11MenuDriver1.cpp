#include <iostream>
using namespace std;
struct Array
{

    int *a;
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
    cout << endl;
}

void Append(struct Array *arr, int value)
{
    if (arr->length != arr->size)
    {
        arr->a[arr->length] = value;
        arr->length++;
    }
}

void Insert(struct Array *arr, int pos, int value)
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
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int BinarySearch(struct Array arr, int value)
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

void Set(struct Array *arr, int index, int value)
{

    if (index >= 0 && index < arr->length)
    {
        arr->a[index] = value;
    }
}
int Min(struct Array arr)
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
int Max(struct Array arr)
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
int SumOfArray(struct Array arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.a[i];
    }

    return sum;
}
float AverageOfArray(struct Array arr)
{

    return (float)SumOfArray(arr) / arr.length;
}
void ReverseArray(struct Array *arr)
{
    int i = 0;
    int p = arr->length - 1;

    while (i < p)
    {
        Swap(&arr->a[i], &arr->a[p]);
        i++;
        p--;
    }
}
void LeftShift(struct Array *arr, int n)
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
void LeftRotate(struct Array *arr, int n)
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
void RightShift(struct Array *arr, int n)
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
void RightRotate(struct Array *arr, int n)
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

int main()
{
    struct Array arr1;
    int size = 0;
    cout << "Enter the Size of the Array u want" << endl;
    cin >> size;

    arr1.a = new int[size];
    arr1.length = 0;
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
            Insert(&arr1, index, value);
            break;
        case 2:
            cout << "Enter the value to append" << endl;
            cin >> value;
            Append(&arr1, value);
            break;

        case 3:
            cout << "Enter the Index which u wantto Delete" << endl;
            cin >> index;
            deltedvalue = Delete(&arr1, index);
            cout << "The Delete value is " << deltedvalue << endl;
            break;
        case 4:
            cout << "Enter the Value ur Searching" << endl;
            cin >> value;
            elemntfound = BinarySearch(arr1, value);
            cout << "The Value is at Index " << elemntfound << endl;
            break;
        case 5:
            cout << "Enter the Index and value u want to chnage" << endl;
            cin >> index;
            cin >> value;
            Set(&arr1, index, value);
            cout << "The Value is changed Successfully" << endl;
            break;

        case 6:
            lowestvalue = Min(arr1);
            cout << "The LowestValue in the Array " << lowestvalue << endl;
            break;
        case 7:
            cout << "The highestvalue in the Array " << Max(arr1) << endl;
            break;
        case 8:
            cout << "The SumOfArray in the Array " << SumOfArray(arr1) << endl;
            break;
        case 9:
            cout << "The Average Value in the Array " << AverageOfArray(arr1) << endl;
            break;
        case 10:
            ReverseArray(&arr1);
            cout << "The Reversed Array " << endl;
            Display(arr1);
            ReverseArray(&arr1);

            break;
        case 11:
            cout << "Enter the number for which u want to shift Array in Left Side" << endl;
            cin >> index;
            LeftShift(&arr1, index);
            Display(arr1);
            break;
        case 12:
            cout << "Enter the number for which u want to Rotate Array in Left Side" << endl;
            cin >> index;
            LeftRotate(&arr1, index);
            Display(arr1);
            break;
        case 13:
            cout << "Enter the number for which u want to shift Array in Right Side" << endl;
            cin >> index;
            RightShift(&arr1, index);
            Display(arr1);
            break;
        case 14:
            cout << "Enter the number for which u want to Rotate Array in Right Side" << endl;
            cin >> index;
            RightRotate(&arr1, index);
            Display(arr1);
            break;

        case 15:

            Display(arr1);
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
