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

void LeftClonedTree(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    LeftClonedTree(root->left);
    LeftClonedTree(root->right);

    Node *nn = new Node(root->data);
    nn->left = root->left;
    root->left = nn;
}
void display(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    string str = "";
    str += (root->left == nullptr) ? "." : to_string(root->left->data) + "";
    str += " <- " + to_string(root->data) + " -> ";
    str += (root->right == nullptr) ? "." : to_string(root->right->data) + "";
    cout << str << endl;
    display(root->left);
    display(root->right);
}
int main()
{
    int arr[] = {50, 25, 12, -1, -1, 37, -1, -1, 75, 62, -1, -1, 87, -1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = constructorofBinaryTree(arr, n);
    LeftClonedTree(root);
    display(root);

    return 0;
}