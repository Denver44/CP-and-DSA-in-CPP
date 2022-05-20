#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void reverseVector()
{
    vector<int> v = {10, 20, 30}; // The sample vector
    reverse(v.begin(), v.end());  // Performing reverse operation from begin to end
    for (int x : v)               // Displaying the sequence
        cout << x << " ";
}

void reverseVector2()
{

    vector<int> v = {10, 20, 30, 40, 50}; // The sample vector
    reverse(v.begin() + 1, v.end());      // Performing reverse operation from begin+1 to end
    for (int x : v)                       // Displaying the sequence
        cout << x << " ";
}

void reversArray()
{

    int arr[] = {10, 20, 30, 40, 50}; // The sample array

    reverse(arr, arr + 5); // Performing reverse operation // from [0 to 5)
    for (int x : arr)      // Displaying the sequence
        cout << x << " ";
}

void reverseString()
{
    string s = "geeks";          // The sample string
    reverse(s.begin(), s.end()); // Performing reverse operation on the string
    cout << s;                   // Displaying the string
}

int main()
{
    reversArray();
    reverseString();
    reverseVector();
    reverseVector2();
    return 0;
}