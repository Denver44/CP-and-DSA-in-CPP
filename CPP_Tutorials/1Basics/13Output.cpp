#include <iostream>
using namespace std;
int main()
{
    // Printing different data types
    int a = 1;
    float b = 1.1f;
    string s = "string";
    char c = 'c';
    cout << a << " " << b << " " << s << " " << c << endl;

    // Printing Literals and expressions
    cout << 10 << " " << 10 * 2 << endl;
    return 0;
}

/*

Cout : object of ostream
<<   : Insertion operator (insert data into the output)

here the (<<) this is called insertion operator means to insert whatever is write insert on the screen.

endl : it help us to got next line but also it clear the buffer and if we just ahve to go the next line then it is good to use /n it will bve very fast then endl;

We can do operator overlading and print user defined datatypes also with cout .
*/