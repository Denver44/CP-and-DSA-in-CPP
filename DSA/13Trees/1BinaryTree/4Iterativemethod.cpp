#include <iostream>
#include <stack>
#include "3queue.h"
using namespace std;

class Tree
{

public:
    Node *root;

    Tree()
    {
        root = nullptr;
    }
    void createtree();
    void iterativePreorder(Node *);
    void iterativeInorder(Node *);
    void iterativePostorder(Node *);
};

void Tree::createtree()
{

    Node *p;
    Node *t;
    int x;
    Queue q(10);
    root = new Node();
    cout << "Enter the Root Value" << endl;
    cin >> x;
    root->data = x;

    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child value of " << p->data << ": " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter Right child value of " << p->data << ": " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::iterativePreorder(Node *p)
{
    stack<Node *> stk;

    while (p != nullptr || !stk.empty())
    {
        if (p != nullptr)
        {
            cout << p->data << ", " << flush;
            stk.push(p);
            p = p->lchild;
        }

        else
        {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
    cout << endl;
}

void Tree::iterativeInorder(Node *p)
{
    stack<Node *> stk;

    while (p != nullptr || !stk.empty())
    {
        if (p != nullptr)
        {
            stk.push(p);
            p = p->lchild;
        }

        else
        {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
    cout << endl;
}
void Tree::iterativePostorder(Node *p)
{
    stack<long int> stk;
    long int temp;

    while (p != nullptr || !stk.empty())
    {
        if (p != nullptr)
        {
            //  address typecasted to long int.
            stk.push((long int)p);
            p = p->lchild;
        }

        else
        {
            temp = stk.top();
            stk.pop();
            if (temp > 0)
            {
                // this for right side.
                stk.emplace(-temp);
                p = ((Node *)temp)->rchild;
            }
            else
            {
                // negtaive temp converted to positive
                // Then the typecasting is done in Node *
                cout << ((Node *)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}
int main()
{
    Tree t1;
    t1.createtree();
    t1.iterativePreorder(t1.root);
    t1.iterativeInorder(t1.root);
    t1.iterativePostorder(t1.root);

    return 0;
}