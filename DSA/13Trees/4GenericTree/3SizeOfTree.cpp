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

int sizeoftree(Node *node)
{
    int s = 0;
    for (Node *child : node->children)
    {
        int cs = sizeoftree(child);
        s += cs;
    }
    s += 1;
    return s;
}
int main()
{
    // int arr[] = {10, 20, -1, 30, 50, -1, 60, -1, -1, 40, -1, -1};
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
    cout << sizeoftree(root);
    return 0;
}