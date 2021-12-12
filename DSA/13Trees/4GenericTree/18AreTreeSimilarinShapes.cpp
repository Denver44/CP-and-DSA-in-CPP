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

bool areMirrior(Node *n1, Node *n2)
{
    if (n1->children.size() != n2->children.size())
    {
        return false;
    }

    for (int i = 0; i < n1->children.size(); i++)
    {
        int j = n1->children.size() - i - 1;
        Node *c1 = n1->children[i];
        Node *c2 = n2->children[j];
        if (areMirrior(c1, c2) == false)
        {
            return false;
        }
    }

    return true;
}

bool symmetric(Node *n1)
{
    // if a node is mirror image of itself then it is symmetric.
    bool flag1 = areMirrior(n1, n1);
    return flag1;
}

Node *makeatreee(int *arr, int n)
{
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
    return root;
}

int main()
{
    int n, n2;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    Node *root1 = makeatreee(arr, n);

    bool flag = symmetric(root1);

    (flag == 1) ? cout << "true" : cout << "false";

    return 0;
}
