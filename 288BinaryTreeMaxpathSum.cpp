#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

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
    int pathsum(TreeNode *root, int &result)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int left = pathsum(root->left, result);
        int right = pathsum(root->right, result);

        int max_straight = max(max(left, right) + root->val, root->val);
        int max_case = max(max_straight, left + right + root->val);
        result = max(result, max_case);

        return max_straight;
    }
    int maxPathSum(TreeNode *root)
    {
        int result = INT32_MIN;
        pathsum(root, result);
        return result;
    }
};
int main()
{
}