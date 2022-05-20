#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Thus, it takes O(N) time complexity in worst case, where N is the total number of elements present in between the range.

void countOnVector()
{
    vector<int> v{10, 18, 30, 10, 12, 45};
    int res = count(v.begin(), v.end(), 10);
    cout << res << '\n';
}

void countOnArray()
{
    int arr[] = {3, 2, 1, 3, 3, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    cout << "Number of times 3 appears : " << count(arr, arr + n, 3) << endl;
}

int main()
{
    countOnVector();
    countOnArray();

    return 0;
}
