#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int size = 0;
class Node
{
public:
    int data;
    vector<Node *> children;
};

void display(Node *node)
{
    cout << node->data << " -> ";
    for (Node *child : node->children)
    {

        cout << child->data << ", ";
    }
    cout << "." << endl;
    for (Node *child : node->children)
    {

        display(child);
    }
}

vector<int> nodetopath(Node *node, int value)
{
    if (node->data == value)
    {
        vector<int> v1;
        v1.push_back(node->data);
        return v1;
    }

    for (int i = 0; i < node->children.size(); i++)
    {
        vector<int> ptc = nodetopath(node->children[i], value);
        if (ptc.size() > 0)
        {
            ptc.push_back(node->data);
            return ptc;
        }
    }
    vector<int> empty;
    return empty;
}
int main()
{
    int n, data;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> data;
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
    vector<int> v1 = nodetopath(root, data);
    cout << "[";
    for (auto i : v1)
    {
        cout << i << ", ";
    }
    cout << "\b\b]";

    return 0;
}
