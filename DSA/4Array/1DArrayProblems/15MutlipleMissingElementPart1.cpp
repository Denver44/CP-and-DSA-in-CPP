#include <iostream>
using namespace std;
// HERE THE DIFFRENCE CAN BE DIFFRENT
int main()
{
    int arr[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 25};
    int i = 0;
    int diff;
    int l = arr[0];
    diff = l - i;

    for (; i < 11; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "The Missing elements in the arrays is " << (i + diff) << endl;
                diff++;
            }
        }
    }

    return 0;
}