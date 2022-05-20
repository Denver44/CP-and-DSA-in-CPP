#include <iostream>
using namespace std;

struct S1
{
    char c1;
    double d1;
    char c2;
};

struct S2
{
    char c1;
    char c2;
    double d1;
};

struct S3
{
    double d1;
    char c1;
    char c2;
};

int main()
{
    cout << sizeof(S1) << ' '
         << sizeof(S2) << ' '
         << sizeof(S3);
    return 0;
}
/*
 The size is totally dependent on the type of Compiler and arch of computer we used.
 This padding and alignment actually helps to read the data in right way.
 The padding and alignment will be according to the size of the highest data type in structure.
 Always first put datatype in increasing order of their size like first char, int , double
 */
