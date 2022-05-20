// --------------------------------- STRING FUNCTION -----------------------------------------------
#include <iostream>
#include <string>
using namespace std;

/*
1. assign()
2. append()
3. insert()
4. replace()
5. erase()
6. find()
7. rfind()
8. compare()
9. size()

*/

int main()
{

    // Assign Function
    string s1;
    s1.assign("hello");
    cout << s1 << endl;

    // ---2nd  Way---
    s1 = "Hello";
    cout << s1 << endl;

    // Append Function
    string s2 = "Hello";
    s2.append("World");

    // ---2nd  Way---
    s2 += "World";
    cout << s2 << endl;

    // Insert Function
    string s3 = "Hello";
    s3.insert(2, " Man "); // at index2 Man will be added HE Man llo
    cout << s3 << endl;

    // Replace Function
    string s4 = "Hello WORLD ";
    s4.replace(2, 3, "MAN"); // 2 is index and 3 is length so llo is replace by MAN here.
    cout << s4 << endl;

    // Erase Function
    string s5 = "String5";
    cout << s5 << endl;
    s5.erase(); // everything will be erase in string s5.
    cout << s5 << endl;

    // Find Functions
    string s6 = "Hello denver rio tokyo";
    int i = s6.find("denver");  // it will find the position of string if not found then -1 will be answer.
    cout << i << endl;          // It will return the pos.
    int x = s6.rfind("denver"); // it will find the position of string in reverse order if not found then -1 will be answer.
    cout << x << endl;

    // Compare Functions
    string s7 = "denver";
    string s8 = "Denver";
    int comp = s7.compare(s8);
    cout << comp << endl;

    // Size Functions
    int j = s7.size();
    cout << j << endl;


    return 0;
}
