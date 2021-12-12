#include <iostream>
#include <stack>
#include <queue>
#include <math.h>
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

bool isBal = true;
int isBalanced(Node *root)
{
    if (root == nullptr)
    {
        return 0; // this time height in terms of nofr.
    }

    int lh = isBalanced(root->left);
    int rh = isBalanced(root->right);
    int gap = std::abs(lh - rh);
    if (gap > 1)
    {
        isBal = false; // once it get disbalnced then it will never get balanced.
    }
    int th = max(lh, rh) + 1;

    return th;
}

class BalPair
{
public:
    int ht;
    bool isBal;
};

BalPair *isBalanced2(Node *root)
{
    if (root == nullptr)
    {
        BalPair *bp = new BalPair();
        bp->ht = 0;
        bp->isBal = true;
        return bp;
    }

    BalPair *lh = isBalanced2(root->left);
    BalPair *rh = isBalanced2(root->right);
    BalPair *mp = new BalPair();
    mp->isBal = std::abs(lh->ht - rh->ht) <= 1 && lh->isBal && rh->isBal;
    //         as node it is balnace     as tree if left and right is balance
    mp->ht = max(lh->ht, rh->ht) + 1;
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
    // isBalanced(root);
    // (isBal == true) ? cout << "true" : cout << "false";
    BalPair *bp = isBalanced2(root);
    (bp->isBal == true) ? cout << "true" : cout << "false";

    return 0;
}