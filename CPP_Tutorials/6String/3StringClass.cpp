#include <iostream>
#include <string> // This lib for string in C++.
using namespace std;

/*
The cstring header provides functions for dealing with C-style strings — null-terminated arrays of characters.
The string header provides the std::string class and related functions and operators.
The headers have similar names, but they're not really related beyond that.
*/

void codingNinjaString()
{
    // Dynamic
    string *sp = new string; // Creating a string in heap.
    *sp = "def";
    cout << sp << endl;
    cout << *sp << endl;

    // S1 is created in stack
    string s1;
    s1 = "Denver";
    cout << s1 << endl;

    string s2("City"); // this way also we can assign it, as string is class so string class has its own constructor
    cout << s2 << endl;

    string s3 = "Spain "; // this is the traditional method
    cout << s3 << endl;

    // Taking a input for a string

    string s5;
    cout << "please input here\n";
    cin >> s5; // here always single word will come for multiword use getline(cin, s5)
    cout << s5;

    // getline(cin, s5);
    cout << s5 << endl;

    string s = "defdef";
    cout << s[0] << endl;
    s[0] = 'a';

    string s2 = s + s1;
    cout << s2 << endl;

    s += s1;

    cout << s1 << endl;
    cout << s << endl;

    cout << s.size() << endl;
    cout << s.substr(3) << endl;
    cout << s.substr(3, 3) << endl;

    cout << s.find("def") << endl;

    // Direct comparision without using strcmp.
    
    if (s1 == s2)
        cout << "same same" << endl;
    else
        cout << "no no" << endl;

    //  here mixed operation can also be done with string
    string s6 = "Hello";
    char str[] = "world";
    string s7 = s6 + str;
    string s8 = s6 + "123";
    string s9 = s6 + 'W';
    cout << s7 << " " << s8 << " " << s9 << endl;
}

int main()
{
    codingNinjaString();
    return 0;
}
