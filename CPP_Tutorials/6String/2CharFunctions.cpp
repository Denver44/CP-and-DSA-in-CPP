#include <iostream>
// #include <string.h> // this library we use in C
#include <cstring>
using namespace std;

void toCopy()
{
    // 1. To copy one data in another array use Strcpy(target,source) function

    char s1[10] = "Denver";
    char s2[20] = "RIO";

    // This is a wrong way s2 = s1;

    cout << "S1 : " << s1 << endl;
    strcpy(s1, "Tokyo"); // To change the data in the s1 we use strcpy function
    cout << "New S1 is : " << s1 << endl;

    strcpy(s2, s1);
    cout << "New S2 is : " << s2 << endl;

    char input2[100] = "xy";

    cout << "Before copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    strcpy(input1, "hello");

    strncpy(input1, input2, 4);

    cout << "After copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
}

void toCompare()
{
    // 2. This not a way to compare two char array s2 < s1  wrong.
    char s1[10] = "Denver";
    char s2[20] = "RIO";

    // To compare two char array use strcmp function

    int res = strcmp(s1, s2); // If same then 0 otherwise -1 or 1 wll be the answer according ton ascii code.
    cout << "Result of CMP : " << res << endl;
}

void toConcatenate()
{
    char s1[10] = "Denver";
    char s2[20] = "RIO";

    strcpy(s1, strcat(s1, s2)); // Here we are concating s1 and s2 and putting that in s1.
    cout << "New S1 after strcat : " << s1 << endl;
}

void strspnFunction()
{
    char x1[] = "cats";
    char x2[] = "cat";
    int n = strspn(x2, x1); // How many char is same in both array will return
    cout << n;
}

void getLength()
{
    char input[] = "cat";
    int len = strlen(input);
    cout << "Length : " << len << endl;
}

void printAllPrefixes(char input[])
{
    // i represents end index of my prefix
    for (int i = 0; input[i] != '\0'; i++)
    {
        // j represents start index of my prefix
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

int main()
{
    toCopy();
    toCompare();
    toConcatenate();
    strspnFunction();
    getLength();

    char input1[100] = "abcd";
    printAllPrefixes(input1);
    return 0;
}
