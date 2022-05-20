#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

void vectorOfFill()
{
    vector<int> v = {10, 20, 30, 40};
    fill(v.begin(), v.end(), 5); // Fill the vector with 5
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    vector<int> v1 = {10, 20, 30, 40};

    // Fill the vector with 5 skipping the first
    // element and last element
    fill(v1.begin() + 1, v1.end() - 1, 5);

    for (auto x : v1)
        cout << x << " ";
    cout << endl;
}

void arrOfFill()
{
    int arr[] = {10, 20, 30, 40};
    fill(arr, arr + 4, 5); // Fill the complete array with 5

    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}

void FillOnList()
{
    list<int> l = {10, 20, 30, 40};
    fill(l.begin(), l.end(), 5); // Fill the list with 5
    for (auto x : l)
        cout << x << " ";
    cout << endl;
}

void FillOnString()
{
    string s = "geeks";
    fill(s.begin(), s.end(), 'g'); // Fill the string with g
    cout << s << endl;
}
int main()
{
    FillOnList();
    FillOnString();
    vectorOfFill();
    arrOfFill();
    return 0;
}
