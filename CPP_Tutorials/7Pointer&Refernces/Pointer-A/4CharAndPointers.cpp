#include <iostream>
using namespace std;

void importantConcept()
{
    // PREFER THIS
    char str[] = "abcde"; // Here if abcde goes to a temp variable then it get fill in str array from temp variable with null character.
    cout << str << endl;

    char *pstr = "abcde"; // Here pstr is pointing that temp variable which is not good so we should always make char array

    cout << pstr << endl;
}

int main()
{
    int a[] = {1, 2, 3};
    char b[] = "abc";

    // Cout works differently of int array and char array.
    cout << a << endl; // Here it will print base address of array a.
    cout << b << endl; // Here it will print the string literal of char array b. which is abc.

    char *pc = &b[0];
    cout << pc << endl;

    char c1 = 'a';
    char *pc1 = &c1;

    cout << c1 << endl;  // Here it will print only one Char
    cout << pc1 << endl; // Here the pointer will continue print till it didn't find '\0'; because cout is written in that way.

    importantConcept();
    return 0;
}