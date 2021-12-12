#include <iostream>
using namespace std;

// Eg if we have given string like a
// then it will have only a 1 and ab and abc will be 0
// now for ab
// a = 1 and ab =  1;
// now for abca
// a
// aa
//  a so total a+ type is 3.
// so formula is 2*last time value of a +1
//  2*ab +a;
// 2^abc + ab

void subsequence(string s)
{
    int a = 0;
    int ab = 0;
    int abc = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'a')
        {
            a = 2 * a + 1;
        }
        else if (s[i] == 'b')
        {
            ab = 2 * ab + a;
        }
        else
        {
            abc = 2 * abc + ab;
        }
    }
    cout << abc << endl;
}

int main()
{

    subsequence("abcabc");

    return 0;
}