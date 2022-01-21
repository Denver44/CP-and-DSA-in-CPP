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
int Height(Node *root)
{
    if (root == nullptr)
    {
        return -1;
    }

    int lefHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int childmaxHeight = 1 + max(lefHeight, rightHeight);

    return childmaxHeight;
}
int Diameter(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int l = Diameter(root->left);
    int r = Diameter(root->right);
    int f = Height(root->left) + Height(root->right) + 2; // as we are taking edges that why 2
                                                          // for in term of node it shoukd be 1.

    int dia = max(f, max(l, r));
    return dia;
}

class Diapair
{
public:
    int ht;
    int dia;
};
Diapair *Diameter2(Node *root)
{
    if (root == nullptr)
    {
        Diapair *bp = new Diapair();
        bp->ht = -1; // ht for edge is 0
        bp->dia = 0; // dia for edges is 0.

        return bp;
    }

    Diapair *l = Diameter2(root->left);  // it will get diapair for left side
    Diapair *r = Diameter2(root->right); // it will get diapair for right side.
    Diapair *mp = new Diapair();         // for node dia
    mp->ht = max(l->ht, r->ht) + 1;      // node ht will ne max(l->ht and r->ht) +1 this for the parent node
    int factor = l->ht + r->ht + 2;      // gettting diameter for node.
    mp->dia = max(factor, max(l->dia, r->dia));
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
    // cout << Diameter(root);
    Diapair *dp = Diameter2(root);
    cout << dp->dia << endl;

    return 0;
}