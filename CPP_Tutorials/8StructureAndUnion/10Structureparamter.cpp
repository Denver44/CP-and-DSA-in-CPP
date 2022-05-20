#include <iostream>
using namespace std;

//******************************* BY VALUE AS A PARAMETER*************************************************//
struct rectangle
{
    int length;
    int breadth;
};
int area(struct rectangle temp)
{
    return (temp.length * temp.breadth);
}

int main()
{
    struct rectangle r = {2, 10};

    cout << "the area of the reactangle is " << area(r) << endl;

    return 0;
}

//********************************** BY ADDRESS AS A PARAMETER***********************************************//

// struct rectangle
// {
//     int length;
//     int breadth;
// };
// int area(struct rectangle *temp)
// {
//     temp->length = 5;
//     return (temp->length * temp->breadth);
// }

// int main()
// {
//     struct rectangle r = {2, 10};

//     cout << "the area of the reactangle is " << area(&r) << endl;
//     cout << r.length;
//     return 0;
// }

//********************************* ARRAY IN STRCUTURE CAN BE SEND BY VALUE*************************
// ****** AS ARRAY IS ONLY SEND BY ADDRESS BUT IN STRUCT WE CAN SEND THAT ARAY BY VALUE ALSO *******************************//

struct rectangle
{
    int arr[5];
    int size;
};
void fun(struct rectangle array)
{

    for (int i = 0; i < array.size; i++)
    {
        cout << array.arr[i] << " ";
    }
}

int main()
{
    struct rectangle a = {{1, 20, 3, 40, 5}, 5};

    fun(a);

    return 0;
}