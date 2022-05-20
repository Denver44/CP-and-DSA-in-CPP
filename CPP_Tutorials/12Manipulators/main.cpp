#include <iostream>
#include <iomanip>
using namespace std;

void basicOfManipulators()
{
    int i = 752;
    float a = 425;
    float b = 123.500328f;
    char str[] = "If you have a dream, then make it happen!";

    ios_base ::fmtflags oldflags;
    oldflags = cout.flags();

    cout << "Current flags = " << cout.flags() << endl;

    cout << hex << i << endl;
    cout << showbase << hex << i << endl;
    cout << uppercase << showbase << hex << i << endl;
    cout << dec << i << endl;
    cout << "1234567890" << endl;
    cout << internal << showpos << setw(10) << i << endl;
    cout << i << endl;

    cout << setfill('-');
    cout << "Fill character : " << cout.fill() << endl;
    cout << setw(50) << str << endl;
    cout << left << setw(50) << str << endl;

    cout.precision(6);
    cout << "Precision: " << cout.precision() << endl;
    cout << showpoint << showpos << a << endl;
    cout << fixed << b << endl;
    cout << scientific << b << endl;

    cout << "Current flags = " << cout.flags() << endl;
    cout.flags(oldflags);
    cout << "Current flags = " << cout.flags() << endl;
}

void ioManipulators()
{
    char ch;
    cout << "Enter a character" << endl;
    cin.get(ch); // get is function of the cin object so we have to use dot operator to access this function it will extract one character.
    cout << ch << endl;

    cin.putback(ch); // putback is also function of the object cin of istream class it will insert last character read,back into input stream
    cin.get(ch);
    cout << ch << endl;

    int count = cin.gcount(); // return number of characters read by a call to get(),getline() or read().
    cout << "characters extracted in last get() = " << count << endl;
    cin.putback('Z');
    ch = cin.peek(); // reads one character leaves in it stream.
    cout << ch << endl;
    cin.get(ch);
    cout << ch << endl;

    return 0;
}

int main()
{
    basicOfManipulators();
    ioManipulators();
    return 0;
}