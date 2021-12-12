#include <iostream>
using namespace std;
// This is Basic Recursion.
// Here the Fun2 call itself untill x is Greater than Zero.
// Time Complexity For Tail Recursion : O(n)
// Space Complexity For Tail Recursion : O(n) Becuase It take the Space in the call stack. As it will be going to be call for N times so the Space Complexity will be O(N).
void fun2(int x)
{
    // This is Called Head recursion at return time it print the Value of X.
    //  If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head
    if (x > 0)
    {
        fun2(x - 1);
        printf("%d ", x);
    }
}
// Recursion function
void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);

        // This is Called Tail recursion at return time it print the Value of X. and it doesnt have to do any task at return time.
        fun(n - 1);
    }
}

int main()
{
    int x = 3;
    fun2(x);
    fun(x);
    return 0;
}