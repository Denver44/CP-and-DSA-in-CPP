#include <iostream>
using namespace std;

//--------------------------------------- CONST ----------------------------------
void str(const char *p) // This is use of const keyword it will make sure that the value doesn't change in the whole program.
{
    cout << p << endl;
}
int main()
{
    char *p = 'D';
    str(p);
    return 0;
}
