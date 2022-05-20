#include <iostream>
using namespace std;

/*
What is the need to template ?
Here we have created two method which do the same job just the data type is different
*/

// The declartion is simple just write first (template keyword) then angular bracket then write class or typename after then give the name X Y any kind then just define function as usual we do.

template <class X>
X big(X a, X b) // Here first X is return type then two X is for data type.
{
    if (a > b)
        return a;
    else
        return b;
}

// You can use as many typename or class for diffrent data type it will find its form by the calling function, as here Y is double so we will get the double in return.
template <typename X, typename Y>
Y sum(X a, Y b)
{
    return a + b;
}

template <typename T>
T arrMax(T arr[], int n)
{
    T res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}

int main()
{
    int arr1[] = {10, 40, 3};
    cout << arrMax<int>(arr1, 3) << endl;

    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax<float>(arr2, 4) << endl;

    int a = 4, b = 5;
    cout << "Big Template For int " << big<int>(4, 3) << endl;
    cout << "Big Template For double " << big<double>(4.5, 3.5) << endl;
    cout << "Big Template For Float " << big(4.5f, 3.5f) << endl; // Compile can automatically guess the datatype also, but this is not good practice.
    cout << "Sum Template " << sum<int, float>(4, 14.5) << endl;
    cout << "Sum Template " << sum<int, double>(4, 14.5) << endl;

    return 0;
}
