#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your name \n";
    getline(cin, name);
    // cin >> name; Wrong approach, try giving full name
    cout << "Hi " << name << ", \n"
         << "Welcome to GfG";
    return 0;
}

/*
cin : An object of istream
>>  : Extraction operator (Extracts data from user input)
ere the (>>) this is called Extraction  operator means to take whatever is keyboard is putting in the memory.

cin thinks that spaces and tab are line break and it will take the word after the space and tab as other words so for that case use getline function to take a whole words as strings.

getline() to read strings with spaces.

We can chain insertion operator
Wd can take user defined data type also by doing operator overlading


*/