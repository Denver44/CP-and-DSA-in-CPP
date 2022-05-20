#include <iostream>
using namespace std;

//  This is the Binary Seach Tree in this we insert the data by its value(key) No Queue is used for inserting data liek binary tree.

class Node
{
public:
    int data;
    Node *lchild;
    Node *Rchild;
};

Node *root = NULL;

void Insert(int key)
{

    Node *t = root;
    Node *r, *p;

    // For First Time if rrot is null then create it and return after that
    if (root == NULL)
    {
        p = new Node;
        p->data = key;
        p->lchild = NULL;
        p->Rchild = NULL;
        root = p;
        return;
    }
    //  if root is not null;
    while (t != NULL)
    {
        // If its value less than root value go left side
        if (key < t->data)
        {
            r = t;
            t = t->lchild;
        }
        // If its value more than root value go right side.
        else if (key > t->data)
        {
            r = t;
            t = t->Rchild;
        }
        //  No duplicate can be store in BST.
        else
        {
            // This is for that no two elemet can be same.
            return;
        }
    }
    p = new Node;
    p->data = key;
    p->lchild = nullptr;
    p->Rchild = nullptr;
    //  Here we are Comparing the data we have send from main fucntion to the node which we get from upper equation if the send data value is highrt than it should be on right side og the node whoch we got from above and vice 0versa.
    if (p->data < r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->Rchild = p;
    }
}

Node *Search(int key)

{

    Node *t = root;
    Node *r;

    while (t != NULL)
    {
        r = t;
        if (key < t->data)
        {
            t = t->lchild;
        }
        else if (key > t->data)
        {
            t = t->Rchild;
        }
        else if (key == t->data)
        {

            return r;
        }
    }
    return NULL;
}

Node *RInsert(Node *r, int key)

{
    Node *temp = NULL;

    if (r == NULL)
    {
        temp = new Node;
        temp->data = key;
        temp->lchild = nullptr;
        temp->Rchild = nullptr;
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
// Heigh function
int height(Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    int l = height(p->lchild);
    int r = height(p->Rchild);

    return l > r ? l + 1 : r + 1;
}

Node *Inpre(Node *p)
{
    while (p && p->Rchild != nullptr)
    {
        p = p->Rchild;
    }
    return p;
}
Node *Insucc(Node *p)
{
    while (p && p->lchild != nullptr)
    {
        p = p->lchild;
    }
    return p;
}
Node *Delete(Node *p, int key)
{
    if (p == nullptr)
    {
        return nullptr;
    }
    if (p->Rchild == nullptr && p->lchild == nullptr)
    {
        if (p == root)
        {
            root = nullptr;
        }
        delete p;
        return nullptr;
    }

    Node *q;
    if (key < p->data)
    {
        p->lchild = Delete(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->Rchild = Delete(p->Rchild, key);
    }
    else
    {
        if (height(p->lchild) > height(p->Rchild))
        {
            // As here the leftchild height is more than rightside so we will pick the highest value from leftside and replace with that
            q = Inpre(p->lchild);
            // so we are passing the address of p->lchild to Inpre
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = Insucc(p->Rchild);
            p->data = q->data;
            p->Rchild = Delete(p->Rchild, q->data);
        }
    }
    return p;
}

int main()
{
    Node *found;
    root = RInsert(root, 10);
    RInsert(root, 5);
    RInsert(root, 2);
    // RInsert(root, 20);
    // RInsert(root, 8);
    // RInsert(root, 30);
    // RInsert(root, 15);
    // Insert(5);
    // Insert(20);
    // Insert(8);
    // Insert(30);
    // Insert(15);
    // Delete(root,20);
    Inorder(root);
    // cout << "\n";
    // found = Search(55);

    // if (found != NULL)
    // {
    //     cout << "Element Founded" << endl;
    // }
    // else
    // {
    //     cout << "Element not Founded" << endl;
    // }

    return 0;
}