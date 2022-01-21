#include <iostream>
#include <vector>
using namespace std;

//  7n/8 =  8n-8/n;

//  as we know if left shift any number it gets mutliply by 2
//  1<<1 it becomes 2
//   2 << 2 it means 8;
// Opposite if we use right side it will divide by 2.
// so using these two propties we divide any number or multiply any number without using multplcation and divide sign.

int main()
{
    long long int n;
    cin >> n;

    long long int val = ((n << 3) - n);
    cout << (val >> 3) << endl;

    return 0;
}