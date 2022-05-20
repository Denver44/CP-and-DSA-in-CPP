#include <iostream>
#include <iomanip>
using namespace std;

void implicitConversion()
{
  // Implicit Conversion
  int x = 10;
  char y = 'A';
  cout << (x + y) << '\n';
  float z = 5.5;
  cout << (x + z) << '\n';
  bool b = z;
  cout << b << '\n';
}
void explicitConversion()
{
  // Explicit Conversion
  int x = 15, y = 2;
  double z1 = x / y;
  cout << z1 << '\n';
  double z2 = double(x) / y;
  cout << z2 << '\n';

  // This is a C++ style of Conversion

  cout << (float)m << endl;   // same here also this are the two ways we can do typecasting of the variable.
  cout << int(n) << endl;     // here the type casting is done b is now a int value not a float any more
  cout << (int)n << endl;     // same here also this are the two ways we can do typecasting of the variable.
  cout << m + (int)n << endl; // here the type casting is done now b is not anymore float value now it is a int. so the output will be 49 not 49.5.

  int sumX = 15, sumY = 30;
  double sumZ = static_cast<double>(x) / y;
  cout << sumZ << endl;
}

void manipulation()
{
  int m = 45;
  float n = 4.5;
  cout << "Total sum : " << m + n << endl;
  cout << fixed << setprecision(2) << m << endl;        // As here it is Int wale we will not 45.00 by setting the precision value
  cout << fixed << setprecision(2) << float(m) << endl; // here the type casting is done a is now a float value not a integer any more thats why we get 45.00
}

int main()
{
  implicitConversion();
  explicitConversion();
  manipulation();
  return 0;
}

/*

Most of primitive types are allowed to convert to each other without any explicit type casting
Some of these conversions cause loss of information

If we have an expression of multiple types, below rules are followed.

bool -> char -> short int -> int -> unsigned int -> long -> long long -> float -> double -> long double.


Use C++ Style of conversion for typecasting don't use C style because it don't check the type before typecasting which can may lead to an error.

*/