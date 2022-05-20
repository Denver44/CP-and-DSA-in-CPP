#include <iostream>
using namespace std;

struct S1
{
    char c1;
    double d1;
    char c2;
} __attribute__((packed));

struct S2
{
    char c1;
    char c2;
    double d1;
} __attribute__((packed));

struct S3
{
    double d1;
    char c1;
    char c2;
} __attribute__((packed));
// Now it will be acquire only space what the size of datatype is.

int main()
{
    cout << sizeof(S1) << ' '
         << sizeof(S2) << ' '
         << sizeof(S3) << endl;

    S3 s;
    s.d1 = 5010;
    s.c1 = 'D';
    s.c2 = 'u';
    cout << s.d1 << " " << s.c1 << " " << s.c2 << endl;
    return 0;
}
