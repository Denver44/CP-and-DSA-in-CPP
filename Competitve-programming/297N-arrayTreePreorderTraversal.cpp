#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<int> preorder(Node *root)
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
        stack<Node *> st;
        st.push(root);
        while (!st.empty())
        {
            Node *temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            // As stack follow lifo so firswt last children then first children at top.
            for (int i = temp->children.size() - 1; i >= 0; i--)
            {
                st.push(temp->children[i]);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}