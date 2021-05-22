#include <iostream>
#include <vector>
using namespace std;
//  We have to find all the possible solutin to reach the last index element.
// thats why we have used reachable.
// eg if from index 2 there si elemnt 5 on it so we can jump to either 1 pos - 2pos --- upto 5pos
// becuase of this we used reachable.
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int reachable = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (reachable < i) // as soon as i get greater than reachable possible point condition fails.
            {
                return false;
            }
            reachable = max(reachable, i + nums[i]);

            if (reachable == nums.size() - 1) // it depends u can put it or not also.
            {
                break;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}
