#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Pair
{
public:
    int state;
    Node *node;

    Pair(Node *node, int state)
    {
        this->state = state;
        this->node = node;
    }
};
Node *constructorofBinaryTree(int *arr, int size)
{

    Node *root = new Node(arr[0]);
    Pair *rp = new Pair(root, 1);

    stack<Pair *> st;
    st.push(rp);

    int idx = 0;
    while (st.size() > 0)
    {
        Pair *top = st.top();
        if (top->state == 1)
        {
            idx++;
            if (arr[idx] != -1)
            {
                Node *leftNode = new Node(arr[idx]);
                top->node->left = leftNode;
                Pair *lp = new Pair(leftNode, 1);
                st.push(lp);
            }
            top->state++;
        }
        else if (top->state == 2)
        {
            idx++;
            if (arr[idx] != -1)
            {
                Node *RightNode = new Node(arr[idx]);
                top->node->right = RightNode;
                Pair *Rp = new Pair(RightNode, 1);
                st.push(Rp);
            }
            top->state++;
        }
        else
        {
            st.pop();
        }
    }

    return root;
}
void PrintSingleChildNode(Node *root, Node *parent)
{
    if (root == nullptr)
    {
        return;
    }

    if (parent != nullptr && parent->left == root && parent->right == nullptr)
    {
        cout << root->data << endl;
    }
    else if (parent != nullptr && parent->left == nullptr && parent->right == root)
    {
        cout << root->data << endl;
    }
    PrintSingleChildNode(root->left, root);
    PrintSingleChildNode(root->right, root);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a != "n")
        {
            arr[i] = stoi(a);
        }
        else
        {
            arr[i] = -1;
        }
    }

    Node *root = constructorofBinaryTree(arr, n);
    // root parent is alawsy null
    PrintSingleChildNode(root, nullptr);

    return 0;
}