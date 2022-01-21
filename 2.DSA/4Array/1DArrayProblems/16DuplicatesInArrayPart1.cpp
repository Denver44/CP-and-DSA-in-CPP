#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 6, 8, 8, 12, 15, 15, 15, 18, 20};
    int last_duplictae = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1] && last_duplictae != arr[i])
        {
            cout << arr[i] << endl;
            last_duplictae = arr[i];
        }
    }

    return 0;
}