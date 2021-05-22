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
//  In order Traversal we kept the record of the address in stack.
// so that we can pop that element and go to the right side of it easily.

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v1;
        stack<TreeNode *> st;

        while (root != NULL || !st.empty())
        {
            if (root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                v1.push_back(root->val); // data inserting.
                root = root->right;
            }
        }

        return v1;
    }
};
int main()
{

    return 0;
}