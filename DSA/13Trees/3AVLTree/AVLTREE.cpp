#include <iostream>
using namespace std;

struct Node
{

    Node *lchild;
    Node *Rchild;
    int height; // To mainatin the Balance Factor we maintain it here.
    int data;
} *root = NULL;

int NodeHeight(Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    int l = NodeHeight(p->lchild);
    int r = NodeHeight(p->Rchild);

    return l > r ? l + 1 : r + 1;
}

int BalanceFactor(Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    int l = NodeHeight(p->lchild);
    int r = NodeHeight(p->Rchild);

    return l - r;
}

Node *LLRoataion(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->Rchild;

    // HEre the root go towards right side.
    // the root->letchild ->rchild now shuld become the lchild of p
    pl->Rchild = p;
    p->lchild = plr;

    //  Update the Height.
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (root == p)
    {
        root = pl;
    }

    return pl;
}
Node *LRRoataion(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->Rchild;

    //  First we set the children of plr node to its correct place.
    pl->Rchild = plr->lchild;
    p->lchild = plr->Rchild;

    //  After then we set the plr at is perfect place
    plr->lchild = pl;
    plr->Rchild = p;

    //  Update the Height for all three as all of three height will be chnage.
    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);

    if (root == p)
    {
        root = plr;
    }

    return plr;
}
Node *RRRoataion(Node *p)
{
    Node *pR = p->Rchild;
    Node *pRl = pR->lchild;

    pR->lchild = p;
    p->Rchild = pRl;

    //  Update the Height.
    p->height = NodeHeight(p);
    pR->height = NodeHeight(pR);

    if (root == p)
    {
        root = pR;
    }

    return pR;
}
Node *RLRoataion(Node *p)
{
    Node *pR = p->Rchild;
    Node *pRl = pR->lchild;

    p->Rchild = pRl->lchild;
    pR->lchild = pRl->Rchild;

    pRl->Rchild = pR;
    pRl->lchild = p;

    pR->height = NodeHeight(pR);
    pRl->height = NodeHeight(pRl);
    p->height = NodeHeight(p);

    if (root == p)
    {
        root = pRl;
    }

    return pRl;
}

Node *RInsert(Node *r, int key)
{
    Node *temp = NULL;

    if (r == NULL)
    {
        temp = new Node;
        temp->data = key;
        temp->height = 1;
        temp->lchild = temp->Rchild = nullptr;
        return temp;
    }
    if (key < r->data)
    {
        r->lchild = RInsert(r->lchild, key);
    }
    else if (key > r->data)
    {
        r->Rchild = RInsert(r->Rchild, key);
    }

    r->height = NodeHeight(r); // This will upadte the height

    // Checking the Balance factor and Performin thr LL or RR or LR or Rl rotation

    if (BalanceFactor(r) == 2 && BalanceFactor(r->lchild) == 1)
    {
        return LLRoataion(r);
    }
    else if (BalanceFactor(r) == 2 && BalanceFactor(r->lchild) == -1)
    {
        return LRRoataion(r);
    }
    else if (BalanceFactor(r) == -2 && BalanceFactor(r->Rchild) == -1)
    {
        return RRRoataion(r);
    }
    else if (BalanceFactor(r) == -2 && BalanceFactor(r->Rchild) == 1)
    {
        return RLRoataion(r);
    }

    return r;
}
void Inorder(Node *r)
{
    Node *p = r;

    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->Rchild);
    }
}
int main()
{
    root = RInsert(root, 10);
    RInsert(root, 5);
    RInsert(root, 2);
    Inorder(root);

    return 0;
}