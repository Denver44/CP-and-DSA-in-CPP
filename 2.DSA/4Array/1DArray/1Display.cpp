#include <iostream>
using namespace std;
// struct Array
// {

//     int a[20];
//     int size;
//     int length;
// };

// void display(struct Array arr)
// {
//     for (int i = 0; i < arr.length; i++)
//     {
//         cout << arr.a[i] << " ";
//     }
// }

// int main()
// {
//     struct Array arr = {{20, 10, 5, 4, 2}, 10, 5};

//     display(arr);

//     return 0;
// }

//***************** HEAP****************************//
struct Array
{

    int *a;
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

int main()
{
    struct Array arr;

    cout << "Enter the Size of the Array u want" << endl;
    cin >> arr.size;

    arr.a = new int[arr.size];

    cout << "How many elements u want to stored in this array" << endl;
    cin >> arr.length;

    for (int i = 0; i < arr.length; i++)
    {
        cout << "Enter the " << (i + 1) << " element" << endl;
        cin >> arr.a[i];
    }

    display(arr);

    return 0;
}