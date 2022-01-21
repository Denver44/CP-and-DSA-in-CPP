#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <math.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int tot = 0;
    int findTiltans(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int ls = findTiltans(root->left);
        int rs = findTiltans(root->right);

        int localtilt = abs(ls - rs);

        tot += localtilt;
        int totsum = ls + rs + root->val;
        return totsum;
    }

    int findTilt(TreeNode *root)
    {
        findTiltans(root);
        return tot;
    }
};
int main()
{

    return 0;
}