#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// Here we have to return the possible path
// so from set if we reach to path 0 thats means that path is Valid and Possible


int staircase(int n){

    if(n == 0)
        return 1;
    else if( n <= -1)
        return 0;
    return staircase(n-1) + staircase(n-2) + staircase(n-3);

}