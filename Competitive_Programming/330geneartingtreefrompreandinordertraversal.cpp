#include <iostream>
#include <vector>
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
    TreeNode *helper(int prestart, int instart, int inend, vector<int> inorder, vector<int> preorder)
    {

        if (prestart > preorder.size() - 1 || instart > inend)
        {
            return nullptr;
        }
        TreeNode *node = new TreeNode(preorder[prestart]);
        int inIndex = 0;
        for (int i = instart; i <= inend; i++)
        {
            if (inorder[i] == node->val)
            {
                inIndex = i;
            }
        }

        node->left = helper(prestart + 1, instart, inIndex - 1, inorder, preorder);
        node->right = helper(prestart + inIndex - instart + 1, inIndex + 1, inend, inorder, preorder);

        return node;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        int end = (inorder.size() - 1);

        TreeNode *T = helper(0, 0, inorder.size() - 1, inorder, preorder);
        return T;
    }
};

int main()
{
    // vector<int> v1;
    // vector<int> v2;
    // v1.push_back(-1);
    // v2.push_back(-1);

    // Solution s1;
    // TreeNode *node = s1.buildTree(v1, v2);
    // cout << node->val;
    // cout << node->left->val;
    // cout << node->right;

    if (0 > -1)
    {
        cout << "yes";
    }

    return 0;
}
//-------------------------------2---------------------

// class Solution
// {
//     int serachInorder(vector<int> inorder, int start, int end, int data)
//     {
//         int inIndex = 0;
//         for (int i = start; i <= end; i++)
//         {
//             if (inorder[i] == data)
//             {
//                 inIndex = i;
//             }
//         }

//         return inIndex;
//     }

//     TreeNode *helper(vector<int> inorder, vector<int> preorder, int start, int end)
//     {
//         static int preIndex = 0;
//         if (start > end)
//         {
//             return nullptr;
//         }
//         TreeNode *node = new TreeNode(preorder[preIndex++]);

//         if (start == end)
//         {
//             return node;
//         }

//         int splitindex = serachInorder(inorder, start, end, node->val);
//         node->left = helper(inorder, preorder, start, splitindex - 1);
//         node->right = helper(inorder, preorder, splitindex + 1, end);

//         return node;
//     }

// public:
//     TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
//     {

//         int end = (inorder.size() - 1);

//         TreeNode *T = helper(inorder, preorder, 0, end);
//         return T;
//     }
// };
