#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void intToString()
{
    int n = 12345;
    ostringstream str1; // this help us to make a charcater sequence word to a string
    str1 << n;
    cout << "typeof str1 " << str1.str() << endl;
    string s = str1.str(); // .str() is function which make the character sequence in array.
    cout << "S " << s << endl;
}

void getlineFunction()
{

    string s;
    cin >> s; // We can take only one word.
    cout << s << endl;

    // STRING GETLINE FUNCTION
    getline(cin, s); // We can take all sentence
    cout << s << endl;

    // EXTRACTING A STRING
    stringstream str(s);
    string word;
    while (str >> word)
        cout << word << " ";
}

void iteratorOnString()
{
    // We can use iterator on string
    string str = "welcome";
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
        cout << "Char : " << *it << endl;
}

int main()
{
    intToString();
    getlineFunction();
    iteratorOnString();
    return 0;
}