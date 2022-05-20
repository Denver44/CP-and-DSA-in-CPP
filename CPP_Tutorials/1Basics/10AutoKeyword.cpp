#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    auto a = 5;
    auto b = 10.5;
    cout << a << " " << b << "\n";
    cout << typeid(a).name() << " " << typeid(b).name();
    return 0;
}

/*
Advantages of auto

1. No Conversion happens when auto is used
float x  = 3.4 ; Double literal converted to float.
auto y  = 3.4 ; Type of y is double.

2. If a function return auto , its return type can be change without worrying about the prototype change.

3. Can be very helpful for lengthy types, especially STL vector<int> :: iterator i;
 can br replace with auto i;

4. Lambda expression

*/