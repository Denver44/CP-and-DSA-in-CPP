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

void removeLeaves(Node *node)
{
    // we have to do it remival in pre order or in post order all non-leaf node become leaf node.
    for (int i = 0; i < node->children.size(); i++)
    {
        Node *child = node->children[i];
        if (child->children.size() == 0)
        {
            for (int j = i; j < node->children.size(); j++)
            {
                node->children[j] = node->children[j + 1];
            }

            node->children.pop_back();
            i--;
        }
    }
    for (Node *child : node->children)
    {

        removeLeaves(child);
    }
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
    removeLeaves(root);
    display(root);

    return 0;
}
