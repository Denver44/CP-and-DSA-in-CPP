#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int arr[35] = {0};
    for (int i = 1; i < 35; i++)
    {
        arr[i] = i * i;
    }

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;

        while (n != 0)
        {
            int j = 1;
            while (n >= arr[j])
            {
                j++;
            }
            count++;
            n = n - arr[j - 1];
            j = 1;
        }
        cout << count << endl;
    }
    return 0;
}