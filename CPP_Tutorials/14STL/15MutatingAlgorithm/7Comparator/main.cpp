#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return a > b; // here we have written a>b then it return true so in descending order.
}

int main()
{

    vector<int> v3{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};

    sort(v3.begin(), v3.end(), comp);

    for (auto num : v3)
    {
        cout << num << " ";
    }
    return 0;
}