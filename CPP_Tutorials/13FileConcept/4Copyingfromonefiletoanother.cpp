#include <fstream>
using namespace std;

//  COPYING DATA FROM ONE FILE TO ANOTHER
int main()
{
    fstream ob1("tempFile.txt", ios::out); // here first we have created a files main.txt and we used the out mode to write the data in the file.
    ob1 << "We are making a copy files" << endl;
    ob1 << "lets do it" << endl;
    ob1 << "We did it" << endl;
    ob1.close();                        // here we have close the file main txt.
    ifstream ob2("main.txt", ios::in);  // here first we open the file main.txt by using mode in and using ifstream.
    ofstream ob3("copy.txt", ios::out); // after then we created a file copy.txt in out mode and then we insert the data in it form main.txt
    char ch;
    while (!ob2.eof())
    {
        ob2.get(ch); // here the data is stored in ch.
        ob3 << ch;   // then we write the data in ch.
    }

    ob2.close(); // both the file is close as we have to close the file it is mandatory.
    ob3.close();
    return 0;
}