#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// UPPER BOUND ALWAYS GIVES THE NEXT IMMEDIATE NUMBER OF WHAT WE SEARCH.
void basic()
{
    int a[] = {1, 4, 4, 4, 5, 6, 9, 19};
    int size = sizeof(a) / sizeof(a[0]);

    int index11 = upper_bound(a, a + size, 4) - a;
    int index21 = upper_bound(a, a + size, 1) - a;
    int *index3 = upper_bound(a, a + size, 101);
    cout << "Total Size Of tha array is " << size << endl;
    cout << a[index11] << endl;
    cout << a[index21] << endl;

    if (index3 == (a + size))
        cout << "Not Found" << endl;
    else
        cout << *index3 << endl;

    vector<int> arr = {1, 1, 1, 3, 4};
    auto itr = upper_bound(arr.begin(), arr.end(), 1);
    if (itr == arr.end())
        cout << "Not Found" << endl;
    else
        cout << *itr << endl;
}
void UpperBoundQuestion()
{
    // It will always give you next immediate big element to it.
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Total Size Of tha array is " << size << endl;

    int index = upper_bound(a, a + size, 4) - a;
    if (index - 1 >= 0 && a[index - 1] == 4)
        cout << index - 1 << endl;
    else
        cout << -1 << endl;

    index = upper_bound(a, a + size, 6) - a;
    if (index - 1 >= 0 && a[index - 1] == 6)
        cout << index - 1 << endl;
    else
        cout << -1 << endl;

    index = upper_bound(a, a + size, 10) - a;
    if (index - 1 >= 0 && a[index - 1] == 10)
        cout << index - 1 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    basic();
    UpperBoundQuestion();
    return 0;
}
