#include <iostream>
using namespace std;

int glo = 6; // glo is global variable and its hold value 6.
extern int x;
extern int y;
void sum()
{
    int a;
    cout << glo << endl; // here we will get the global value as there is no local variable name of glo
}

int main()
{
    int y = 89;
    int glo = 9;
    // glo=78;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15; //  another way to declare the variable in single line only.
    float pi = 3.14;
    char c = 'd';         // declarting a char type value and char value must in (' ') Single quote.
    bool is_true = false; // this declartion of boolean value the boolean will give only two output 1(true) or 0(false).
    sum();
    cout << "Hey Buddy \nHere the value of a is  " << a << " & The value of b is " << b << endl;
    cout << "glo value is " << glo << "  boolean variable status " << is_true << endl;
    cout << "The value of pi is: " << pi << endl;
    cout << "The Character of c hold character is :- " << c << endl;
    cout << "The value of X is  " << x << endl;
    cout << "The value of Y is  " << y << endl;
    return 0;
}

int x = 5500;

/*
1. Functions, loops and Conditional Statements create a nwe inner scope.
2. The outer Scope variables are accessible in inner scope but vice versa is not true.
3. We can create a new scope by using a pair of curly brackets.
4. If we don't initialize a global variable it value wll be (0) by compiler nut this is not for local variable we will get a grabage value in response.
5. The precedence of local variable is higher than global variable.
6. When we defined extern variable then we have to initialize it with value.

*/