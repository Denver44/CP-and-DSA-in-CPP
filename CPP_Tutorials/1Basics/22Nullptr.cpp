
#include <iostream>
using namespace std;

void fun(int x) {}
void fun(int *ptr) {}
int main()
{
    fun(nullptr);
    fun(NULL); // this will throw erro for 1st function.
    return 0;
}
// Compile Error : Ambiguous call because null is a macro which has value 0 so we must use nullptr so it can define that it is for a pointer.