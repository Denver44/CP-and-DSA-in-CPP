#include <iostream>
#include <iomanip> // input output manipulators

using namespace std;

void defaultFloatPrint()
{
  double x = 1.2300;
  cout << x << '\n';
  double y = 1567.56732;
  cout << y << '\n';
  double z = 1244567.45;
  cout << z << '\n';
  double w = 124456.67;
  cout << w << '\n';
  double u = 123e+2;
  cout << u << '\n';
}
void manipulatingDefaultFloatPrint()
{
  cout << setprecision(4);
  double x = 15.5683, y = 34267.1;
  cout << x << ' ' << y << ' ' << '\n';
  double z = 1.23;
  cout << showpoint << z << '\n';
  cout << showpos << z << '\n';
  cout << uppercase << y << '\n';
}

void fixedAndScientificFloatPrint()
{
  double x = 1.23, y = 1122456.453;
  cout << std::fixed;
  cout << x << "\n"
       << y << "\n";
  cout << std::setprecision(2);
  cout << x << "\n"
       << y << "\n";
  double z = 1.2e+7;
  cout << z;
}

int main()
{

  a = 3;
  int e = 78, c = 1233;
  cout << "The value of a without setw is: " << a << endl;
  cout << "The value of b without setw is: " << e << endl;
  cout << "The value of c without setw is: " << c << endl;

  cout << "the value of a is: " << setw(4) << a << endl;
  cout << "the value of a is: " << setw(8) << e << endl;
  cout << "the value of a is: " << setw(12) << c << endl;

  defaultFloatPrint();
  manipulatingDefaultFloatPrint();
  fixedAndScientificFloatPrint();

  return 0;
}

/*

Default printing format

1. No Trailing Zeros.
2. Precision means total digits (excluding the digits used after e)
3. Default precision value in 6.
4. when Value before decimal point does not fit in 6 digits, powerformat is used. For example 12345678.3 is printed as 1.23457e+06


Fixed
No power (or e)  : 1.5, 4004.5

Scientific
uses 'e' : 1.2e+04, 1.45e+06

In both, precision means digist after the decimal point.
If there are not enough digits, then trailing zeros are shown in both.
Wwe can set back to default using 'defaultfloat' this by default is set.




*/