#include <bits/stdc++.h>
using namespace std;

/*
 Prev permutation returns a boolena variable means if its prev permutation exist it will return true else false.

 1 2 3 Prev permutation of 123 will be false as 123 is the smallest permutation

 1 2 3 Prev permutation is not exist and it will be false as 1 2 3 prev permutation not exist but for 3 2 1 it will return as 3 1 2 it is prev permutation

*/
void prevPermutation()
{
    vector<int> v = {5, 4, 1, 2, 3};      // The sample Vector
    prev_permutation(v.begin(), v.end()); // Performing prev_permutation  operation
    for (int x : v)                       // Displaying the sequence
        cout << x << " ";
}
void printAllPrevPermutation()
{

    vector<int> arr1{3, 2, 1};
    cout << endl;
    do
    {
        for (auto i : arr1)
            cout << i << " ";
        cout << endl;
    } while (prev_permutation(arr1.begin(), arr1.end()));
}

int main()
{
    prevPermutation();
    printAllPrevPermutation();
    return 0;
}