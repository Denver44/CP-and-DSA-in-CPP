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

int Maximum(Node *node)
{
    int max_value = INT32_MIN;

    for (Node *child : node->children)
    {
        int childmax = Maximum(child);
        max_value = max(max_value, childmax);
    }
    max_value = max(max_value, node->data);
    return max_value;
}
int main()
{
    int arr[] = {10, 20, -1, 30, 800, -1, 60, -1, -1, 40, -1, -1};
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

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
    cout << Maximum(root);
    return 0;
}

// int max_value = INT32_MIN;
// for (Node *child : node->children)
// {
//     int max_val = Maximum(child);
//     max_value = max(max_val, max_value);
// }
// max_value = max(max_value, node->data);
// return max_value;