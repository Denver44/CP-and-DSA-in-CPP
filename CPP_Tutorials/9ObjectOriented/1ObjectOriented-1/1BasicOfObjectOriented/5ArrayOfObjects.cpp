#include <iostream>
#include <string> // this header file for the string and it is a different from string.h.

using namespace std;
class employee
{
private:
    int id;
    int salary;
    string s; // string s is a function.

public:
    void setId()
    {
        cout << "Enter your id number please" << endl;
        cin >> id;
        cout << "Enter your Name number please" << endl;
        cin >> s;
    }
    void printdata()
    {
        salary = 12000; // we can fix anybody value but always in a function u cannot  assign from main function as the data are private member .
        cout << "the employee name is " << s << " and id number is " << id << " salary is " << salary << endl;
    }
};

int main()
{

    employee info[4]; //[ ARRAY of OBJECTS.]

    for (int i = 0; i < 4; i++)
    {
        info[i].setId();
    }
    for (int i = 0; i < 4; i++)
    {
        info[i].printdata();
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Address of all members " << &info[i] << " size of all members " << sizeof info[i] << endl;
    }

    return 0;
}