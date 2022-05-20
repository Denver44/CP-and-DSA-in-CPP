#include <iostream>
using namespace std;

int compiledFine()
{
    int *ptr = 0;
    return 0;
} // Compile Fine

int compileError()
{
    int *ptr = 10;
    return 0;
} // Compile Error : cannot convert int to int*

int main()
{
    compiledFine();
    compileError();
    return 0;
}