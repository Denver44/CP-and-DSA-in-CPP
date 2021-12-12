#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 6, 8, 9, 12, -1, 15, 260, 1,-20};

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Lowest value in the array " << min << endl;
    cout << "Highest value in the array " << max << endl;

    return 0;
}