#include <iostream>
using namespace std;

template <class X>
class Arraylist
{
private:
    int capacity;
    X *arr_ptr;

public:
    Arraylist(int capacity)
    {
        this->capacity = capacity;
        this->arr_ptr = new X[this->capacity];
    }
    void addElement(int, X);
    void viewdata(int, X &);
    void viewList();
};

template <class X>
void Arraylist<X>::addElement(int index, X data)
{

    if (index >= 0 && index <= capacity - 1)
        arr_ptr[index] = data;
    else
        cout << "Array index is not valid";
}

template <class X>
void Arraylist<X>::viewdata(int index, X &data)
{

    if (index >= 0 && index <= capacity - 1)
        data = arr_ptr[index];
    else
        cout << "Array index is not valid";
}

template <class X>
void Arraylist<X>::viewList()
{
    for (int i = 0; i < capacity; i++)
        cout << i << " : " << arr_ptr[i] << endl;
}

int main()
{
    Arraylist<float> arr(4);
    arr.addElement(0, 0.8);
    arr.addElement(1, 1.1);
    arr.addElement(2, 1.2);
    arr.addElement(3, 12.3);
    arr.viewList();
    return 0;
}
