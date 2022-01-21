#include <iostream>
#include "3queue.h"

using namespace std;

//---------------------------------- CLASS FOR TREE------------------------

class Tree
{
private:
public:
    Node *root;
    Tree() { root = nullptr; }
    ~Tree();
    void CreateTree();
    void Preorder(Node *p);
    int Height(Node *p);
    int Count(Node *p);
    int degree0(Node *p);
    int degree2(Node *p);
    int degree1(Node *p);
    int degree1and2(Node *p);
};

void Tree::CreateTree()
{
    Node *p;
    Node *t;
    int x;

    Queue q(25);
    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter Right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

int Tree::Count(Node *p)
{
    if (p)
    {
        return Count(p->lchild) + Count(p->rchild) + 1;
    }
    else
    {
        return 0;
    }
}

int Tree::Height(Node *p)
{
    int l = 0;
    int r = 0;
    if (p == nullptr)
    {
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);
    if (l > r)
    {
        return l + 1;
    }
    else
    {
        return r + 1;
    }
}

int Tree::degree0(Node *p)
{
    int x = 0, y = 0;
    if (p != NULL)
    {
        x = degree0(p->lchild);
        y = degree0(p->rchild);
        if (p->lchild == NULL && p->rchild == NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}

int Tree::degree2(Node *p)
{
    int x = 0, y = 0;
    if (p != NULL)
    {
        x = degree2(p->lchild);
        y = degree2(p->rchild);
        if (p->lchild != NULL && p->rchild != NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}
int Tree::degree1(Node *p)
{
    int x = 0, y = 0;
    if (p != NULL)
    {
        x = degree1(p->lchild);
        y = degree1(p->rchild);
        // (p->lchild != NULL ^ p->rchild != NULL)  // Conditon
        if ((p->lchild == NULL && p->rchild != NULL) || (p->lchild != NULL && p->rchild == NULL))
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}
int Tree::degree1and2(Node *p)
{
    int x = 0, y = 0;
    if (p != NULL)
    {
        x = degree1and2(p->lchild);
        y = degree1and2(p->rchild);
        if (p->lchild != NULL || p->rchild != NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}

Tree::~Tree()
{
    delete root;
}

int main()
{

    Tree t;

    t.CreateTree();

    cout << "PreOrder: ";
    t.Preorder(t.root);
    cout << endl;
    cout << "Height: " << t.Height(t.root) << endl;
    cout << "Count: " << t.Count(t.root) << endl;
    cout << "No of leaf Node: " << t.degree0(t.root) << endl;
    cout << "Degree of 2 Node: " << t.degree2(t.root) << endl;
    cout << "Degree of 1 Node: " << t.degree1(t.root) << endl;
}