#include <iostream>
using namespace std;

//  if there is 100 team we have to made and there are 100 people then there will be only one way thats hwy i == j =1.
// if people are less than a team requriement then 0.
// if people are greater than the team the formula
// ek 123 in two teams  3 says to 12 u make  team of 2 then i will get attach to you one by one and other that 12 u got in team of 1 and then i will make my one team so total is 2 team,

void paritionintosubsets(int p, int t)
{
    int dp[t + 1][p + 1];
    for (int i = 0; i <= p; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= t; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            if (j < i)
            {
                dp[i][j] = 0;
            }
            else if (j == i)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = i * dp[i][j - 1] + dp[i - 1][j - 1];
            }
        }
    }
    cout << dp[t][p];
}

int main()
{
    int no_of_peoples;
    int teams;
    cin >> no_of_peoples >> teams;
    paritionintosubsets(no_of_peoples, teams);
    return 0;
}