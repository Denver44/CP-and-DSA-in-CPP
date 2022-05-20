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

bool findandelemnt(Node *root, int value)
{
    if (root->data == value)
    {
        return true;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        bool flag = findandelemnt(root->children[i], value);
        if (flag)
        {
            return true;
        }
    }

    return false;
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
    bool flag = findandelemnt(root, data);

    (flag == 1) ? cout << "true" : cout << "false";

    return 0;
}
