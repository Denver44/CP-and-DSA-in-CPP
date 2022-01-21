#include <iostream>
#include "3queue.h"

using namespace std;

//---------------------------------- CLASS FOR TREE------------------------

class Tree
{
private:
    Node *root;

public:
    Tree() { root = nullptr; }
    ~Tree();
    void CreateTree();
    void Preorder() { Preorder(root); } // Passing Private Parameter in Constructor
    void Preorder(Node *p);
    // void Postorder() { Postorder(root); } // Passing Private Parameter in Constructor
    void Postorder(Node *p);
    // void Inorder() { Inorder(root); }
    void Inorder(Node *p);
    // void Levelorder() { Levelorder(root); } // Passing Private Parameter in Constructor
    void Levelorder(Node *p);
    // int Height() { return Height(root); } // Passing Private Parameter in Constructor
    int Height(Node *p);
    int Count(Node *p);
    Node *getRoot() { return root; }
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

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

void Tree::Levelorder(Node *p)
{
    Queue q(100);
    cout << p->data << ", " << flush;
    q.enqueue(p);

    while (!q.isEmpty())
    {
        // as here ther ie both if conition so both will be check and the data will be printed.
        p = q.dequeue();
        if (p->lchild)
        {
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
        }
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

Tree::~Tree()
{
    // TODO
}

int main()
{

    Tree t;

    t.CreateTree();

    // cout << "Preorder: " << flush;
    // t.Preorder();
    // cout << endl;

    // cout << "Inorder: " << flush;
    // t.Inorder(t.getRoot());
    // cout << endl;

    // cout << "Postorder: " << flush;
    // t.Postorder(t.getRoot());
    // cout << endl;

    cout << "Levelorder: " << flush;
    t.Levelorder(t.getRoot());
    cout << endl;

    cout << "Height: " << t.Height(t.getRoot()) << endl;
    cout << "Count: " << t.Count(t.getRoot()) << endl;

    // cout << "Recursive Passing Private Parameter in Constructor" << endl;

    // cout << "Preorder: " << flush;
    // t.Preorder();
    // cout << endl;

    // cout << "Inorder: " << flush;
    // t.Inorder();
    // cout << endl;

    // cout << "Postorder: " << flush;
    // t.Postorder();
    // cout << endl;

    // cout << "Levelorder: " << flush;
    // t.Levelorder();
    // cout << endl;

    // cout << "Height: " << t.Height() << endl;
}