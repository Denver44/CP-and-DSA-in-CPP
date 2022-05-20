#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

/*

There are two types of System :-

Little Endian the little end written first means last byte is put first
BIG Endian its vice-versa.
*/

void charConcept()
{
    char c = 'A';
    char *cptr = &c;
    cout << c << endl;
    cout << cptr << endl;
    cout << *cptr << endl;
}

void solve()
{
    int i = 65;
    cout << "The i is " << i << endl;

    // Implicit typecasting to character, means  65 turn to A.
    char c = i;
    cout << "The c is " << c << endl;

    int *iptr = &i;

    // Explicit typecasting the int pointer to char Pointer.
    char *cptr = (char *)iptr;

    cout << "The iptr will give " << iptr << endl;
    cout << "The cptr will give " << cptr << endl;

    // NOTE: Both are same for char Pointer cout dont print address it print direct the values.
    cout << "The *cptr will give " << *cptr << endl;
    cout << "The *(cptr + 1) will give " << *(cptr + 1) << endl;
    cout << "The *(cptr + 2) will give " << *(cptr + 2) << endl;
    cout << "The *(cptr + 3) will give " << *(cptr + 3) << endl;

    // Due to little endian system 65 iss written in lowest byte and it will get print first and thats why we get A on *cptr.
    //  *(cptr + 1)  *(cptr + 2) or  *(cptr + 3) this will give null.
}

void solve2()
{
    char c = 'A';
    cout << "The c is " << c << endl;

    /*
    1. When you are taking the address of b, you get char *. operator<< interprets that as a C string, and tries to print a character sequence instead of its address.
    2. The address of char is being treated as a nul-terminated string and is displaying the contents of that address, which is probably undefined, but in this case an empty string. If you cast the pointers to void *, you will get the results you desire.
    */
    cout << "The Address of c is in C   WAY : " << (void *)&c << endl;
    cout << "The Address of c is in CPP WAY : " << static_cast<void *>(&c) << endl; // This a more better it is CPP way of typecasting

    char *cptr = &c;

    cout << "The cptr will give " << cptr << endl; // It will print it don't find a null character
    cout << "The *cptr will give " << *cptr << endl;
}

int main()
{
    // charConcept();
    // solve();
    solve2();

    return 0;
}
