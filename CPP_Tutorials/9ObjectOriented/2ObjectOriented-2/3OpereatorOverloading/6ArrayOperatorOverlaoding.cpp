#include <iostream>
using namespace std;
const int SIZE = 5;
class Array
{
private:
    int arr[SIZE];

public:
    void printdata()
    {
        cout << "The array data member are" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";
        }
    }
    int &operator[](int pos)
    {

        if (pos >= 0 && pos <= SIZE - 1)
        {
            return arr[pos];
        }
        else
        {
            cout << "Out of range" << endl;
            exit(0);
        }
    }
};

int main()
{
    Array a1;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> a1[i];
    }
    a1.printdata();
    return 0;
}