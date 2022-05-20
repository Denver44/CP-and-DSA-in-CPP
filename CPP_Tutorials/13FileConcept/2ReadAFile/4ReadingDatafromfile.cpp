
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream ob3("2.txt");

    string word;
    while (getline(ob3, word))
    {
        cout << word;
    }

    ob3.close();
    return 0;
}
