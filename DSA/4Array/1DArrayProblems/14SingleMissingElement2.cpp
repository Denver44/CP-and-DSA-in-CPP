#include <iostream>
using namespace std;

int main()
{
    cout << "Random Started but the difference is must be smae to use this formula" << endl;
    int arr[11] = {6, 7, 8, 9, 155, 11, 13, 14, 15, 16, 17};
    int i = 0;
    int l = arr[0];
    int diff = l - i;

    for (; i < 11; i++)
    {
        if (arr[i] - i != diff)
        {
            break;
        }
    }

    cout << "The missing element is " << (i + l);
    return 0;
}