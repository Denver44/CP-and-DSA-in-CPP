#include <iostream>
#include <vector>
using namespace std;

// First Buy then sell
// Here Infinite Transaction is Applicable.

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        }

        int buy_date = 0;
        int sell_date = 0;
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] >= prices[i - 1])
            {
                sell_date++;
            }
            else
            {
                profit += prices[sell_date] - prices[buy_date];
                sell_date = buy_date = i;
            }
        }
        profit += prices[sell_date] - prices[buy_date]; // this is for the last day as profit keeps on increasing and last day will be left according to our condition.

        return profit;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        prices.push_back(a);
    }

    Solution s1;
    s1.maxProfit(prices);

    return 0;
}