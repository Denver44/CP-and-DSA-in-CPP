#include <iostream>
#include <vector>
#include <stack>
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
    vector<int> preorderTraversal(TreeNode *root)
    {
        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> ans;
        if (root == nullptr)
        {
            return ans;
        }

        ans.push_back(root->val);
        vector<int> ansleft = preorderTraversal(root->left);
        for (int i = 0; i < ansleft.size(); i++)
        {
            ans.push_back(ansleft[i]);
        }

        vector<int> ansright = preorderTraversal(root->right);
        for (int i = 0; i < ansright.size(); i++)
        {
            ans.push_back(ansright[i]);
        }

        return ans;
    }
};
int main()
{

    return 0;
}