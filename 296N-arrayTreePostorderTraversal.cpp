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
    vector<int> postorder(Node *root)
    {

        vector<int> res;
        if (root == nullptr)
            return res;
        
        stack<Node *> s1, s2; // two stacks

        s1.push(root);
        while (!s1.empty())
        {
            Node *temp = s1.top();
            s2.push(temp);
            s1.pop();
            for (Node *child : temp->children)
             s1.push(child);
            
        }
        while (!s2.empty())
        {
            res.push_back(s2.top()->val);
            s2.pop();
        }

        return res;
    }
};
int main()
{

    return 0;
}