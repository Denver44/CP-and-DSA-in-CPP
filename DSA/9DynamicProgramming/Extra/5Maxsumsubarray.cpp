#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int findSum(int arr[], int n)
{
  int currentbest = arr[0], alltimebest = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (currentbest + arr[i] >= arr[i])
      currentbest += arr[i];
    else
      currentbest = arr[i];

    alltimebest = max(currentbest, alltimebest);
  }
  return alltimebest;
}
