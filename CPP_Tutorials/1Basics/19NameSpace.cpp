// -------------- WHY TO USE USE NAMESPACE STD -----------------------------

/*
----------------------------------- PROBLEM--------------------------------------------------
#include <iostream>
using namespace std; // writing everytime std like below it is not helpful thats why we declare namespace std above;

A program to demonstrate need of namespace
int main()
{
  int value;
  value = 0;
  double value; // Error here
  value = 0.0;
  This program will give your error because we cannot use one variable name for two other purpose but we can solve this problem with help of namespace std.
}

*/

// ----------------------------------- SOLUTION --------------------------------------------------

// Here we can see that more than one variables are being used without reporting any error, That is because they are declared in the  different namespaces and scopes.

#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first
{
  int val = 500;
}

// Global variable
int val = 100;

int main()
{
  int val = 200; // Local variable
  // These variables can be accessed from outside the namespace using the scope operator (::)
  cout << "Here the value of val will be " << first::val << " because we want the val value from first scope " << endl;
  cout << "Here the value of val will be " << ::val << " because it is in Global scope " << '\n';
  cout << "Here the value of val will be " << val << " because it is in local scope " << '\n';
  return 0;
}