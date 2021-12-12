#include <iostream>
#include <vector>
using namespace std;

// First Buy then sell
// As here we are amintaing the list of least value in min_value.
// And subtracting the daily proce with min_value we will get the profit.
// So as only one Transaction is Applicable here not more than one.

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        }

        int min_value = INT32_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min_value)
            {
                min_value = prices[i];
            }
            profit = max(profit, prices[i] - min_value);
        }

        return profit;
    }
};

int main()
{

    return 0;
}