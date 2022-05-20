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

class BSTPpair
{
public:
    bool isBST;
    int min;
    int max;
};

BSTPpair *isBst(Node *root)
{
    // Here we have to check it isBst for all it node on left side and right side
    // not only for immediate left and right of node
    // we have to chceck it for all itleft side and right side.
    // if a node->data is grrater than ist left side->max and less than right side-> min thaen its BST.
    // if every node follow this propery it node->data > left max and less than right->min
    if (root == nullptr)
    {
        BSTPpair *bp = new BSTPpair();
        bp->min = INT32_MAX;
        bp->max = INT32_MIN;
        bp->isBST = true;
        return bp;
    }

    BSTPpair *lp = isBst(root->left);
    BSTPpair *rp = isBst(root->right);
    BSTPpair *mp = new BSTPpair();
    mp->isBST = lp->isBST && rp->isBST && (root->data >= lp->max && root->data <= rp->min);

    mp->min = min(root->data, min(rp->min, lp->min));
    mp->max = max(root->data, max(rp->max, lp->max));

    return mp;
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
    BSTPpair *bp = isBst(root);
    (bp->isBST == 1) ? cout << "true" : cout << "false";

    return 0;
}