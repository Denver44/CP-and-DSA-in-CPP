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
    Node *root;
    int size;
};

BSTPpair *isBst(Node *root)
{
    if (root == nullptr)
    {
        BSTPpair *bp = new BSTPpair();
        bp->min = INT32_MAX;
        bp->max = INT32_MIN;
        bp->isBST = true;
        bp->root = nullptr;
        bp->size = 0;
        return bp;
    }

    BSTPpair *lp = isBst(root->left);
    BSTPpair *rp = isBst(root->right);
    BSTPpair *mp = new BSTPpair();
    mp->isBST = lp->isBST && rp->isBST && (root->data >= lp->max && root->data <= rp->min);

    mp->min = min(root->data, min(rp->min, lp->min));
    mp->max = max(root->data, max(rp->max, lp->max));

    if (mp->isBST)
    {
        mp->root = root;
        mp->size = lp->size + rp->size + 1;
    }
    else if (lp->size > rp->size)
    {
        mp->root = lp->root;
        mp->size = lp->size;
    }
    else
    {
        mp->root = rp->root;
        mp->size = rp->size;
    }

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
    cout << bp->root->data << "@" << bp->size;

    return 0;
}