// Serialization
// • Serialization is a process of string and retrieving state of an object
// • Class must have a default constructor
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    Student() {}
    Student(string n, int r, string b)
    {
        name = n;
        roll = r;
        branch = b;
    }
    friend ofstream &operator<<(ofstream &ofs, Student s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
    friend ostream &operator<<(ostream &os, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student s)
{
    ofs << s.name << " " << s.roll << " " << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}
ostream &operator<<(ostream &os, Student &s)
{
    os << "Name " << s.name << endl;
    os << "Roll " << s.roll << endl;
    os << "Branch " << s.branch << endl;
    return os;
}
int main()
{
    ofstream ofs("Test.txt");
    Student s1("John", 10, "CS");
    Student s2("Denver", 11, "CS");
    ofs << s1;
    ofs << s2;
    ofs.close();
    ifstream ifs("Test.txt");
    Student s3, s4;
    ifs >> s3;
    ifs >> s4;
    cout << s3;
    cout << s4;
}