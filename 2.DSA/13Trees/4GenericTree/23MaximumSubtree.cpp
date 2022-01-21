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
int msn = 0;          // to find whihc nide had maximum sum
int msum = INT32_MIN; // maximum sum tree.
int maximumsubtree(Node *root)
{
    int SUM = 0;

    for (Node *child : root->children)
    {
        int msc = maximumsubtree(child);
        SUM += msc;
    }

    SUM += root->data;
    if (SUM > msum)
    {
        msum = SUM;
        msn = root->data;
    }

    return SUM;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<Node *> st;
    Node *root = NULL;
    for (int i = 0; i < n; i++)
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
    maximumsubtree(root);
    cout << msn << "@" << msum << endl;

    return 0;
}