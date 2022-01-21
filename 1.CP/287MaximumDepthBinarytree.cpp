#include <iostream>
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
// Maimum depth means height from root to leaf node.
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        int l = 0;
        int r = 0;
        if (root == nullptr)
        {
            return 0;
        }

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);

        if (l > r)
        {
            return l + 1;
        }
        else
        {
            return r + 1;
        }
    }
};

int main()
{

    return 0;
}