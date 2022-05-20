#include <iostream>
#include <cstring>
using namespace std;

int main()
{

  // MEMSET FUNCTION USE THE CSTRING LIBRARAY FOR THIS
  int arr[10] = {0}; // we can only initialize only zero other tha no value we can initialize like this.
  cout << arr[5] << endl;
  int arr1[10] = {10}; // Example we will still get zero .
  cout << arr1[5] << endl;

  // IN DYNAMICALLY ALLOCATED ARRAY WE STILL HAVE THE SAME PROBLEM LIKE ABOVE
  int arr3[5];
  memset(arr3, -1, sizeof(arr3)); // only -1 and 0 can be assign dynamically using this function.
  cout << arr3[5];
  return 0;
}