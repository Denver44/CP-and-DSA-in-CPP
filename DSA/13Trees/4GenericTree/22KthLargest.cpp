#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int ceil;
int floor;

class Node
{
public:
    int data;
    vector<Node *> children;
};

void CeilandFloor(Node *node, int value)
{
    if (node->data > value)
    {
        if (node->data < ceil)
        {
            ceil = node->data;
        }
    }
    if (node->data < value)
    {
        if (node->data > floor)
        {
            floor = node->data;
        }
    }

    for (Node *child : node->children)
    {
        CeilandFloor(child, value);
    }
}

int kthLargest(Node *node, int k)
{
    floor = INT32_MIN;
    int factor = __INT32_MAX__;
    for (int i = 0; i < k; i++)
    {
        CeilandFloor(node, factor);
        factor = floor;
        floor = INT32_MIN;
    }

    return factor;
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
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

    cout << kthLargest(root, k);

    return 0;
}