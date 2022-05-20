#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void arrayFind()
{
    int arr[6] = {1, 5, 77, 3, -6, 8};

    int *itr1 = find(arr, arr + 6, 5);
    int *itr2 = find(arr, arr + 6, -5);

    if (itr1 == arr + 6)
        cout << "Not Found" << endl;
    else
        cout << "Found " << endl;

    if (itr2 == arr + 6)
        cout << "Not Found" << endl;
    else
        cout << "Found " << endl;
}
void vectorFind()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);

    auto itr1 = find(arr.begin(), arr.end(), 10);

    if (itr1 == arr.end())
        cout << "Not Found" << endl;
    else
        cout << "Found " << endl;
}

int main()
{
    arrayFind();
    vectorFind();
    return 0;
}