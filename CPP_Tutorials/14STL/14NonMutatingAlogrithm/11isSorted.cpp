#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    is_sorted(arr.begin(), arr.end()) ? cout << "Sorted" << endl : cout << "Not Sorted" << endl;
    return 0;
}