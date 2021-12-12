#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        data = 0;
        key = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
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
        rear = NULL;
        front = NULL;
    }

    bool isEmpty()
    {

        if (rear == NULL && front == NULL)
        {
            return true;
        }
        else
        {

            return false;
        }
    }

    bool Nodeexist(Node *n)
    {
        Node *temp = front;

        bool exist = false;
        while (temp != NULL)
        {
            if (temp->key == n->key)
            {
                exist = true;
                break;
            }
            temp = temp->next;
        }

        return exist;
    }

    void push(Node *n)
    {
        if (isEmpty())
        {
            front = n;
            rear = n;
            cout << "Node Enqueued" << endl;
        }
        else if (Nodeexist(n))
        {
            cout << "You cannot append a node whith same key value" << endl;
        }
        else
        {
            rear->next = n;
            rear = n;
            cout << "Node Enqueued" << endl;
        }
    }
    Node *pop()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Already Empty " << endl;
            return NULL;
        }
        else if (front == rear)
        {
            temp = front;
            front = NULL;
            rear = NULL;
            return temp;
        }

        else
        {

            temp = front;
            front = temp->next;
            return temp;
        }
    }
    Node *peek()
    {
        if (isEmpty())
        {
            cout << "Strack underflow" << endl;
            return NULL;
        }
        else
        {
            return front;
        }
    }
    int count()
    {

        int counter = 0;
        Node *temp = front;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    void display()
    {

        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
        }
        else
        {
            Node *temp = front;

            while (temp != NULL)
            {
                cout << "(" << temp->key << " , " << temp->data << ")->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q1;

    int option, total;
    int key, data;
    bool n;

    do
    {
        cout << "What operation do you want to perform? Selection the option number. Enter 0 to exit." << endl;
        cout << "1 . Push()" << endl;
        cout << "2 . Pop()" << endl;
        cout << "3 . IsEmpty()" << endl;
        cout << "4 . Peek()" << endl;
        cout << "5 . Count()" << endl;
        cout << "6 . print()" << endl;
        cout << "7 . Clear screen" << endl;
        cin >> option;

        Node *n1 = new Node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Push Operation \nEnter key & data of the Node to be Appended " << endl;
            cin >> key;
            cin >> data;
            n1->key = key;
            n1->data = data;
            q1.push(n1);
            break;
        case 2:

            n1 = q1.pop();
            cout << "(" << n1->key << " , " << n1->data << ")  popped" << endl;
            break;
        case 3:
            n = q1.isEmpty();
            if (n == true)
                cout << "Queue is Empty" << endl;

            else
                cout << "Queue is not Empty" << endl;

            break;

        case 4:
            cout << "Peek Node Operation " << endl;
            n1 = q1.peek();
            cout << "(" << n1->key << " , " << n1->data << ")  at top" << endl;
            break;
        case 5:
            total = q1.count();
            cout << "Total elements in Queue are " << total << endl;
            break;
        case 6:
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter proper Option number " << endl;
        }
    } while (option != 0);

    return 0;
}