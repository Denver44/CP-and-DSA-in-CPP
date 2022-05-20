#include <iostream>
using namespace std;

// Here we have use inline functions the inline function helps to return a * b; put this return value direct to the calling function.
// but dont use too much inline function for recurssion method and the function which more than one line to execute than dont use inline function.
inline int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;
    return 0;
}
