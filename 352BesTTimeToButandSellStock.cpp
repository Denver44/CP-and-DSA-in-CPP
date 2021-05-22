#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    // Time Complexity O(N)
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        }

        int maxprofit = 0;
        int minvalue = INT32_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minvalue)
            {
                minvalue = prices[i];
            }
            maxprofit = max(maxprofit, prices[i] - minvalue);
        }

        return maxprofit;
    }
};

int main()
{

    return 0;
}
//************************** O(N2)***************************************//
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         if (prices.size() == 0 || prices.size() == 1)
//         {
//             return 0;
//         }

//         int maxprofit = 0;

//         for (int i = 0; i < prices.size(); i++)
//         {
//             for (int j = i + 1; j < prices.size(); j++)
//             {
//                 if (prices[i] < prices[j])
//                 {
//                     maxprofit = max(maxprofit, prices[j] - prices[i]);
//                 }
//             }
//         }

//         return maxprofit;
//     }
// };

// int main()
// {

//     return 0;
// }