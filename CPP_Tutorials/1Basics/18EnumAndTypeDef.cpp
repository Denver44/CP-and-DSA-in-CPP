//---------- ENUM AND TYPEDEF -------------------
#include <iostream>
using namespace std;
// Why we use enum : it is used to define group of constant in one name.
// Eg week or months for this purpose we use enum.
// If we initialize the first value like here mon = 1 then after mon every variable will be +1 tue (2), wed (3).
// By default the first variable value is 0. (Remove the value of mon and check it.)
enum day
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

typedef float marks;
typedef int roll;

// The main purpose here is that now we don't need to write float for declaring a float value now we can use marks instead of float this typedef but we can use float also both option is available either u use float or marks same for int and roll.

int main()
{
    cout << mon << " " << tue << " " << wed << " " << thu << " " << fri << " " << sat << " " << sun << endl;
    day day1 = mon, day2 = tue;
    cout << day1 << " " << day2 << endl;

    marks m1 = 10.50, m2 = 89.57, m3 = 56.56;
    roll r1 = 14, r2 = 15, r3 = 24;
    cout << m1 << " " << m2 << " " << m3 << endl;
    cout << r1 << " " << r2 << " " << r3 << endl;

    float f1 = 0.556;
    cout << "The value of f1 is " << f1 << endl;

    return 0;
}

/*
1. typedef is limited to giving symbolic names to types only, whereas #define can be used to define an alias for values as well, e.g., you can define 1 as ONE, 3.14 as PI, etc.
2. typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.
3. #define should not be terminated with a semicolon, but typedef should be terminated with semicolon.
4. #define will just copy-paste the definition values at the point of use, while typedef is the actual definition of a new type.
5. typedef follows the scope rule which means if a new type is defined in a scope (inside a function), then the new type name will only be visible till the scope is there. In case of #define, when preprocessor encounters #define, it replaces all the occurrences, after that (No scope rule is followed).
 */