#include <iostream>
#include <vector>
using namespace std;

// In this if the stock prices like keep on decreasing order then no need to buy stock so at that time max profit will be 0.
// if i bought stock today and its prices get increas buy today then only i sholud buy otherwise skip it,
// on last day i cant bu so total lenght is n -1 ;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int max_profit = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (prices[i] < prices[i + 1])
            {
                max_profit = max_profit + (prices[i + 1] - prices[i]);
            }
        }
        return max_profit;
    }
};

int main()
{

    return 0;
}