#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void basic()
{

    int a[] = {1, 9, 19};
    int b[] = {1, 9, 19};
    int size = sizeof(a) / sizeof(a[0]);

    if (is_permutation(a, a + size, b))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    vector<int> arr1 = {1, 3, 4};
    vector<int> arr2 = {1, 3, 4};
    vector<int> arr3 = {2, 3, 4};

    if (is_permutation(arr1.begin(), arr1.end(), arr2.begin()))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    if (is_permutation(arr1.begin(), arr1.end(), arr3.begin()))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    basic();
    return 0;
}
