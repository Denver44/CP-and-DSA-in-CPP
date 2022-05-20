#include <bits/stdc++.h>
using namespace std;

int minCount(int n)
{
	int *dp = new int[n+1];    
    for(int i = 0; i <= n ;i++)
    {
        dp[i] = i;
    }
    
     for(int i = 4; i <= n ;i++)
    {
         for(int j = 2; j<= sqrt(i) ; j++)
         {
             dp[i] = min(dp[i] , 1+ dp[i -(j*j)]);
         }
    }
    return dp[n];
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}

#include<bits/stdc++.h>
using namespace std;

long base(int freq[], int n, int fact[])
{
    long b = 1;
    for(int i = 0; i<10; i++)
    {
        if(freq[i] > 0)
        {
            b *= fact[freq[i]];
        }
    }
    return b;
}

long count(int a[], int n, int fact[], int freq[])
{
    if(n == 0 || n == 1)
        return 0;
    long ans = 0;

    for(int i = a[0]+1; i<10; i++)
    {
        if(freq[i] > 0)
        {
            ans += (fact[n-1]/base(freq, n, fact))*freq[i];
        }
    }
    freq[a[0]]--;
    ans += count(a+1, --n, fact, freq);
    return ans;
}

long numberOfNumbersWithDuplicates(long num){
	// Write your code here
    int size = 0;
    int arr[20];
    while(num != 0)
    {
        int x = num%10;
        num = num/10;
        arr[size] = x;
        size++;
    }
    
    int freq[10] = {0};
    int *fact = new int[size+1];
    fact[0] = 1;
    reverse(arr, arr+size);
    for(int i = 0; i<size;i++)
    {
        fact[i+1] = (i+1)*fact[i];
        freq[arr[i]]++;
    }
    
    return count(arr, size, fact, freq);
    

}

// -----------------------------

#include <bits/stdc++.h>
using namespace std;

long base(int *freq, int *fact, int size)
{
    long b = 1;

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            b *= fact[freq[i]];
        }
    }
    return b;
}
long helper(int size, int *arr, int *fact, int *freq)
{
    if (size == 1 || size == 0)
        return 0;

    long ans = 0;
    for (int i = arr[0] + 1; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            ans += (fact[size - 1] / base(freq, fact, size)) * freq[i];
        }
    }
    freq[arr[0]]--;
    ans += helper(size - 1, arr + 1, fact, freq);
    return ans;
}
long numberOfNumbersWithDuplicates(long num)
{
    string s = to_string(num);
    int size = s.size();
    int *arr = new int[size];
    int n = size - 1;
    while (num != 0)
    {
        int rem = num % 10;
        arr[n--] = rem;
        num /= 10;
    }
    int *fact = new int[size + 1];
    int freq[10] = {0};
    fact[0] = 1;
    for (int i = 0; i < size; i++)
    {
        fact[i + 1] = (i + 1) * fact[i];
        freq[arr[i]]++;
    }
    return helper(size, arr, fact, freq);
}


//-----------
#include<bits/stdc++.h>
using namespace std;

// 15 20 12 3 
void helper(int a[], int n, vector<vector<int>> &vs, vector<int> psf)
{
    if(n == 0)
    {
        vs.push_back(psf);
        return ;
    }
    vector<int> inc_v(psf);
    inc_v.push_back(a[0]);
    helper(a+1, --n, vs, psf);
    helper(a+1, --n, vs, inc_v);
        
}
int subset(int input[], int n, int output[][20]) {
    // Write your code here
    vector<vector<int>> vs;
    vector<int> psf;
    helper(input, n, vs, psf);
    for(int i = 0; i<vs.size(); i++)
    {
        for(int j = 0; j<vs[i].size(); j++)
        {
            cout<<vs[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}