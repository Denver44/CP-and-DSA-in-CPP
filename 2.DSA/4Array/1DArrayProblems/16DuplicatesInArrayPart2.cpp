#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 6, 8, 8, 12, 15, 15, 15, 18, 20};
    int size = 10;
    int j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i])
            {
                j++;
            }
            cout << "Total " << (j - i) << " Dupliactes of " << arr[i] << " has been found" << endl;
            i = j - 1;
        }
    }

    return 0;
}