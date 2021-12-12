#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    vector<Node *> children;
};

// as here we have to find height in terms of edges thats why taken -1
// as if there is only one node so in terms of height in edges it will be zeros thats why we take -1.
// if height is asked in terms of node then take 0.

int height(Node *node)
{
    int ht = -1;
    for (Node *child : node->children)
    {
        int childrenheight = height(child);
        ht = max(ht, childrenheight);
    }
    ht += 1;
    return ht;
}
int main()
{
    int arr[] = {10, 20, -1, 30, 80, -1, 60, -1, -1, 40, -1, -1};

    stack<Node *> st;
    Node *root = NULL;
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

            if (st.size() > 0)
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }
    cout << height(root);
    return 0;
}