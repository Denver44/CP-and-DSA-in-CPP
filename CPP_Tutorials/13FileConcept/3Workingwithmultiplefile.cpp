#include <iostream>
#include <fstream>
using namespace std;

// WORKING WITH MULTIPLE FILE
int main()
{
    //  WRITING WITH OFSTREAM
    ofstream ob1("myCountry.txt", ios::out);
    ob1 << "India" << endl;
    ob1 << "USA" << endl;
    ob1 << "UK" << endl;
    ob1 << "IRELAND" << endl;
    ob1.close();

    //  WRITING WITH FSTREAM
    fstream ob2("myCapital.txt", ios::out);

    ob2 << "DELHI" << endl;
    ob2 << "WASHINGTON" << endl;
    ob2 << "LONDON" << endl;
    ob2 << "DUBLIN" << endl;
    ob2.close();

    //  READING WITH OFSTREAM
    ifstream ob3("myCountry.txt", ios::in);
    cout << "COUNTRY NAME :- " << endl;

    char ch;
    while (!ob3.eof())
    {
        ob3.get(ch);
        cout << ch;
    }
    ob3.close();

    //  READING WITH FSTREAM
    fstream ob4("myCapital.txt", ios::in);
    cout << "CAPITAL NAME :- " << endl;
    char ch1;
    while (!ob4.eof())
    {
        ob4.get(ch1);
        cout << ch1;
    }
    ob4.close();

    return 0;
}