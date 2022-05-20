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

vector<int> preorder;
void Itrpre(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *temp = st.top();
        st.pop();
        preorder.push_back(temp->data);
        for (int i = temp->children.size() - 1; i >= 0; i--)
        {
            st.push(temp->children[i]);
        }
    }
}

vector<int> postorder;
void Itrpost(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    stack<Node *> s1, s2;
    s1.push(root);
    while (!s1.empty())
    {
        Node *temp = s1.top();
        s1.pop();
        s2.push(temp);
        for (Node *child : temp->children)
        {
            s1.push(child);
        }
    }
    while (!s2.empty())
    {
        postorder.push_back(s2.top()->data);
        s2.pop();
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
    Itrpre(root);
    for (auto i : preorder)
    {
        cout << i << " ";
    }
    cout << endl;
    Itrpost(root);
    for (auto i : postorder)
    {
        cout << i << " ";
    }

    return 0;
}
