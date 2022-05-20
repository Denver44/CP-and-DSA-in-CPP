
#include <iostream>
#include <fstream>
using namespace std;

// ios::in for reading data when using fstream.
int main()
{
    ifstream ob3("2.txt");
    char ch;

    while (!ob3.eof())
    {
        ob3.get(ch);
        cout << ch;
    }
    ob3.close();
    return 0;
}
