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
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};

class stack
{
public:
    Node *top;
    stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {

        if (top == NULL)
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
        Node *temp = top;
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
            top = n;
            cout << "Node PUSHED" << endl;
        }
        else if (Nodeexist(n))
        {
            cout << "Already we have a node of same key " << endl;
        }
        else
        {
            Node *temp = top;
            top = n;
            n->next = temp;
            cout << "Node PUSHED" << endl;
        }
    }

    Node *pop()
    {
        if (isEmpty())
        {
            cout << "Already Empty " << endl;
            return NULL;
        }
        else
        {

            Node *temp = top;
            top = temp->next;
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
            return top;
        }
    }

    int count()
    {

        int counter = 0;
        Node *temp = top;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    void display()
    {

        Node *temp;
        temp = top;
        while (temp != NULL)
        {
            cout << "(" << temp->key << " , " << temp->data << ")" << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    stack s1;
    // Node n1(1, 10);
    // Node n2(2, 20);
    // Node n3(3, 30);
    // s1.push(&n1);
    // s1.push(&n2);
    // s1.push(&n3);
    // s1.pop();

    // s1.display();

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
            s1.push(n1);
            break;
        case 2:

            n1 = s1.pop();
            cout << "(" << n1->key << " , " << n1->data << ")  popped" << endl;
            break;
        case 3:
            n = s1.isEmpty();
            if (n == true)
                cout << "Stack is Empty" << endl;

            else
                cout << "Stack is not Empty" << endl;

            break;

        case 4:
            cout << "Peek Node Operation " << endl;
            n1 = s1.peek();
            cout << "(" << n1->key << " , " << n1->data << ")  at top" << endl;
            break;
        case 5:
            total = s1.count();
            cout << "Total elements in stacks are " << total << endl;
            break;
        case 6:
            s1.display();
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