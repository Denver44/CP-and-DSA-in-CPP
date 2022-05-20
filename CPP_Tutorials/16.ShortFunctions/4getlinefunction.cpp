#include <iostream>
#include <string>
using namespace std;

int main()
{

    // When we have to take a line then use cin.getline(var_name,size,delimeter);
    // here the delimeter is optional by default it is '\n' as soon as it get new line it end.
    // we can set the delimeter manually like we put 'o' so as soon as while inserting it encounter o it will not read further.
    char s[100];
    cin.getline(s, 100);
    cout << s;

    string s;
    getline(cin, s);
    cout << s;
    cout << s.length();
    // return 0;
}
