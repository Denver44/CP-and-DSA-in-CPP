#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // fstream ob1("tut48e.txt", ios::out);
    // cout << ob1.tellp() << endl; // IT WILL TELL THE CURRENT POSITION OF THE POINTER IN THE FILE.
    // ob1 << "HELLO WORLD" << endl;
    // cout << ob1.tellp() << endl;
    // ob1.seekp(-7, ios::end);
    // cout << ob1.tellp();
    // ob1 << "INDIA" << endl;
    // ob1.seekp(0, ios::beg);
    // ob1 << "Yeah bro i did it" << endl;
    // ob1.close();

    ifstream ob2("tempFile.txt", ios::in);
    int pos = ob2.tellg();
    cout << pos << endl;

    char ch;
    ob2 >> ch;
    pos = ob2.tellg();
    cout << pos << endl;

    ob2.seekg(6, ios::beg);
    while (!ob2.eof())
    {
        ob2.get(ch);
        cout << ch;
    }
    // cout << ob2.tellg();
    ob2.close();
    return 0;
}