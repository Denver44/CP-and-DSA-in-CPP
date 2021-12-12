#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
    if(m == 0 || n==0)
        return 0;
	int ans = INT32_MIN;
    vector<vector<int>> dp(n,vector<int>(m));

 
    for(int i = 0; i<n;i++)
    {
        if(arr[i][0] == 0){
         ans =1;   
            dp[i][0] = 1;
        }
        else
            dp[i][0] = 0;
    }
    for(int i = 0; i<m;i++)
    {
        if(arr[0][i] == 0){
                  ans =1;   
   
            dp[0][i] = 1;
        }
        else
            dp[0][i] = 0;
    }

    for(int i = 1; i<n;i++)
    {
        for(int j = 1; j<m;j++)
        {
            
            if(arr[i][j] == 1)
                dp[i][j] = 0;
            else
            {
            	dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                ans = max(ans,dp[i][j]);
            }
                
        }
    }

    return ans;


}

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];
	
	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}