#include <iostream>
#include <cstring>

using namespace std;

// We can use memset() to set all values as 0 or -1 for integral data types also.
//  It will not work if we use it to set as other values.
// The reason is simple, memset works byte by byte.

void memsetOnString()
{
    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str;
}

void memesetInArray()
{
    int a[5];
    memset(a, 0, sizeof(a)); // value --> 0 & -1
    cout << a[4] << endl;

    int val[9];
    memset(val, -1, sizeof(val));
    for (int i = 0; i < 9; i++)
        cout << val[i] << " ";
    cout << endl;
}

int main()
{
    /*
    int a[10]={0};
    cout<<a[5]<<endl;

    int b[10]={21};  //  !WRONG  This Valid For 0 (zero )
    cout<<b[5]<<endl;
    */
    memesetInArray();
    memsetOnString();
    return 0;
}