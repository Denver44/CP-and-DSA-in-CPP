#include <iostream>
using namespace std;

class Node
{

public:
    int data;     // data
    Node *lchild; // lchild address
    Node *rchild; // rchild address

    Node()
    {
        data = 0;
        lchild = nullptr;
        rchild = nullptr;
    }
};

class Queue
{
    int Size;
    int Rear;
    int front;
    Node **a; // as it is a pointer and it will going to store a address that why **a

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
    a = new Node *[x]; // as we have to store a address so we are creating a pointer array
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
