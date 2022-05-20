#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node() // without args
    {
        data = 0;
        next = NULL;
    }
    Node(int d) // with args
    {
        data = d;
        next = NULL;
    }
};

class Queue
{

public:
    Node *rear;
    Node *front;
    Queue()
    {

        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Push(int n)
    {
        Node *temp = new Node;

        if (isEmpty())
        {
            temp->data = n;
            front = rear = temp;
            rear->next = front;
        }
        else
        {
            temp->data = n;
            rear->next = temp;
            rear = temp;
            rear->next = front;
        }
    }

    void Pop()
    {

        if (isEmpty())
        {
            cout << "Already Empty" << endl;
        }
        else if (front == rear)

        {
            cout << "The Deleted Data is " << front->data << endl;
            front = rear = NULL;
        }
        else
        {
            cout << "The Deleted Data is " << front->data << endl;
            front = front->next;
            rear->next = front;
        }
    }

    void display()
    {
        if (front != NULL)
        {
            Node *temp = front;
            cout << temp->data << " ";
            temp = temp->next;
            while (temp != front)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "Already Empty" << endl;
        }
    }
};

int main()
{

    Queue q1;
    q1.Push(1);
    q1.Push(2);
    q1.Push(5);
    q1.Push(3);
    q1.Push(4);
    q1.Pop();
    q1.Pop();
    q1.Push(1);

    q1.display();

    return 0;
}