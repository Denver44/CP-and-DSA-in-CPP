#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int maxx = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                if (lis[j] > maxx)
                {
                    maxx = lis[j];
                }
            }
        }
        lis[i] = 1 + maxx;
    }
    int lds[n];
    lds[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        int maxx = 0;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[i])
            {
                if (lds[j] > maxx)
                {
                    maxx = lds[j];
                }
            }
        }
        lds[i] = 1 + maxx;
    }
    int ovmax = 1;
    for (int j = 0; j < n; j++)
    {
        ovmax = max(((lis[j] + lds[j]) - 1), ovmax);
    }
    cout << ovmax << endl;

    return 0;
}