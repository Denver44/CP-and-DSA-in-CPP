#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *lchild;
    Node *Rchild;
};

class Queue
{
    int Size;
    int Rear;
    int front;
    Node **a;

public:
    Queue(int size);
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(Node *x);
    Node *dequeue();
};

Queue::Queue(int x)
{
    Size = x;
    Rear = -1;
    front = -1;
    a = new Node *[x];
}
Queue::~Queue()
{
    delete[] a;
}

bool Queue ::isEmpty()
{
    if (front == Rear)
    {
        return true;
    }
    return false;
}
bool Queue::isFull()
{
    if (Rear == Size - 1)
    {
        return true;
    }
    return false;
}
void Queue::enqueue(Node *q)
{
    if (isFull())
    {
        return;
    }
    else
    {
        Rear++;
        a[Rear] = q;
    }
}

Node *Queue::dequeue()
{
    Node *x = nullptr;
    if (isEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        front++;
        x = a[front];
    }
    return x;
}

Node *root = new Node; // root of the binary tree

// This will create a Treee
void createTree()
{

    Node *temp;
    Node *p;
    int x;
    Queue q(5);

    cout << "Enter the Root value" << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = nullptr;
    root->Rchild = nullptr;
    q.enqueue(root);

    while (!q.isEmpty())
    {

        p = q.dequeue();

        cout << "Enter the Left child Value of " << p->data << ": " << flush;
        cin >> x;

        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = nullptr;
            temp->Rchild = nullptr;
            p->lchild = temp;
            q.enqueue(temp);
        }

        cout << "Enter the Right child Value of " << p->data << ": " << flush;
        cin >> x;

        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = nullptr;
            temp->Rchild = nullptr;
            p->Rchild = temp;
            q.enqueue(temp);
        }
    }
}

// Display The tree in preorder
void preorder(Node *p)
{

    if (p != NULL)
    {
        cout << p->data << " ," << flush;
        preorder(p->lchild);
        preorder(p->Rchild);
    }
}
// Display The tree in Inorder

void inorder(Node *p)
{

    if (p != NULL)
    {
        inorder(p->lchild);
        cout << p->data << " ," << flush;
        inorder(p->Rchild);
    }
}
// Display The tree in postorder

void postorder(Node *p)
{

    if (p != NULL)
    {
        postorder(p->lchild);
        postorder(p->Rchild);
        cout << p->data << " ," << flush;
    }
}
int main()
{
    createTree();
    cout << "Preorder ";
    preorder(root);
    cout << endl;
    cout << "Inorder ";
    inorder(root);
    cout << endl;
    cout << "Postorder ";
    postorder(root);

    return 0;
}