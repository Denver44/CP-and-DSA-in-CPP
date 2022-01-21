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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        vector<vector<int>> res;
        int i = 0;

        TreeNode *p;
        if (root == NULL)
        {
            return res;
        }

        s1.push(root);
        vector<int> b;
        vector<int> a;
        bool flag1 = false;
        bool flag2 = false;

        while (!s1.empty() || !s2.empty())
        {
            while (!s1.empty())
            {
                p = s1.top();
                s1.pop();
                a.push_back(p->val);

                if (p->left)
                {
                    s2.push(p->left);
                }
                if (p->right)
                {
                    s2.push(p->right);
                }
                flag1 = true;
            }
            if (s1.empty() && flag1 == true)
            {
                res.push_back(a);
                flag1 = false;
                a.clear();
            }

            while (!s2.empty())
            {
                p = s2.top();
                s2.pop();
                b.push_back(p->val);

                if (p->right)
                {
                    s1.push(p->right);
                }
                if (p->left)
                {
                    s1.push(p->left);
                }
                flag2 = true;
            }
            if (s2.empty() && flag2 == true)
            {
                res.push_back(b);
                flag2 = false;
                b.clear();
            }
        }

        return res;
    }
};

int main()
{

    return 0;
}