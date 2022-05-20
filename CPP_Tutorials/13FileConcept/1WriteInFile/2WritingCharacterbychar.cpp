#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ios :: app // means append
// ios :: turnc // to erase earlier data and then write again.

int main()
{
    fstream ob2;
    ob2.open("./data/2Write.txt", ios::app); // app means append
    string s;
    getline(cin, s);
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        ob2.put(s[i]); // The put() function is member of ofstream class. It is used to write singal character into file.
    }
    cout << endl;
    ob2.close();

    return 0;
}