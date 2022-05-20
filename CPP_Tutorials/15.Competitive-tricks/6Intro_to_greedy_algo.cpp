#include <iostream>
using namespace std;

int main()
{

    int n = 5; // number of lily pas
    int arr[] = {3, 2, 3, 5, 4, 3};

    int k = 5; // max jump distance

    int jumps = 0;
    int curr_pos = 0;
    int dist = 0;
    while (curr_pos <= n)
    {
        if (arr[curr_pos] > k)
        {
            // continue;
        }
        else
        {
            jumps++;
            dist = 0;
            while ((curr_pos <= n) && (dist + arr[curr_pos]) <= k)
            {
                dist += arr[curr_pos++];
            }
        }
    }
    cout << jumps << endl;

    return 0;
}