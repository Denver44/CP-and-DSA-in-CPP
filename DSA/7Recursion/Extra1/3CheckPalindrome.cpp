
#include<bits/stdc++.h>
bool helper(char s[]  , int i , int j) {
    
    if( i <=j  && s[i] != s[j])
        return false;
   
    bool x = true;
    if(i< j)
    	x = helper(s,++i,--j);
    return x;
}


bool checkPalindrome(char input[]) {
    
    int len = strlen(input);
    bool y = helper(input,0,--len);
    return y;

}



