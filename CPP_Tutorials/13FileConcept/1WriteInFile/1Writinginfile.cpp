#include <fstream>
#include <iostream>
using namespace std;
/*
fstream can do both.
ofstream -> for writing file specially.
ifstream -> for reading the file content .
*/
int main()
{
    ofstream ob1("./data/1Write.txt");
    ob1 << "Don't be a loser." << endl;
    ob1.close(); // Must close a file after your Job Done
    return 0;
}
