#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int limit = pow(2, n);

    for (int i = 0; i < limit; i++)
    {
        string str = "";
        int temp = i;
        for (int j = n - 1; j >= 0; j--) // as we have three elemmnst in array so in three bits we want.
        {
            int r = temp % 2;
            temp = temp / 2;
            if (r == 0)
            {
                str = "-\t" + str;
            }
            else
            {
                str = to_string(arr1[j]) + "\t" + str;
            }
        }
        cout << str << endl;
    }

    return 0;
}
// ------------------------------------- USING BITS-----------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int limit = pow(2, n);

    for (int i = 0; i < limit; i++)
    {
        string str = "";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // we are checking of the ith bit set or not.
            {
                str += to_string(arr1[j]) + "\t";
            }
            else
            {
                str += "-\t";
            }
        }
        cout << str << endl;
    }

    return 0;
}

// as for eg 1 when i is 1 we are doing   left shift 1<<0 to check 0 bit is set or not.
// 1 & 1 is 1 so  the bit is set.
// so for i = 2,3,4 upto 7.
// and as we have 3 element so upto 3 bit only 0,1,2 only.
