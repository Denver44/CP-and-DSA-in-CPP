#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> res;
        vector<vector<int>> mainres;
        if (root == nullptr)
        {
            return mainres;
        }
        queue<TreeNode *> q1;
        q1.push(root);
        while (q1.size() > 0)
        {
            int count = q1.size();
            for (int i = 0; i < count; i++)
            {
                res.push_back(q1.front()->val);

                if (q1.front()->left != nullptr)
                {
                    q1.push(q1.front()->left);
                }
                if (q1.front()->right != nullptr)
                {
                    q1.push(q1.front()->right);
                }

                q1.pop();
            }
            mainres.push_back(res);
            res.clear();
        }

        return mainres;
    }
};

int main()
{

    return 0;
}