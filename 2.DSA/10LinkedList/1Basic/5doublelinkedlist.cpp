#include <iostream>
using namespace std;
class Node
{

public:
    int key;
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        prev = NULL;
        next = NULL;
    }

    Node(int k, int d)

    {
        key = k;
        data = d;
    }
};

class doublylinkedlist
{
public:
    Node *head;

    doublylinkedlist()
    {
        head = NULL;
    }
    doublylinkedlist(Node *n)
    {
        head = n;
    }

    Node *NodeExist(int k)
    {

        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node *n)
    {
        if (NodeExist(n->key) != NULL)
        {
            cout << "Node already exist with key value :" << n->key << " .Append another node with difffent value" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node Appended as Head Node" << endl;
            }
            else
            {

                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout << "Node Appended" << endl;
            }
        }
    }
    void prependnode(Node *n)
    {

        if (NodeExist(n->key) != NULL)
        {
            cout << "Node already exist with key value :" << n->key << " .Append another node with difffent value" << endl;
        }

        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node Prepended as Head Node" << endl;
            }
            else
            {

                head->prev = n;
                n->next = head;
                head = n;
                cout << "Node Prepended" << endl;
            }
        }
    }

    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = NodeExist(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value: " << k << endl;
        }

        else
        {

            if (NodeExist(n->key) != NULL)
            {
                cout << "Node already exist with key value :" << n->key << " .Append another node with difffent value" << endl;
            }
            else
            {
                Node *nextnode = ptr->next;
                if (nextnode == NULL)
                {
                    ptr->next = n;
                    n->prev = ptr;
                    cout << "Node Inserted at the the END" << endl;
                }
                else
                {
                    n->next = nextnode;
                    nextnode->prev = n;
                    n->prev = ptr;
                    ptr->next = n;

                    cout << "Node Inserted in between" << endl;
                }
            }
        }
    }

    void deletenodebykey(int k)
    {
        Node *ptr = NodeExist(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value: " << endl;
        }
        else
        {
            if (head == NULL)
            {
                cout << "Doubly Linked list is already empty: " << endl;
            }
            else if (head != NULL)
            {
                if (head->key == k)
                {
                    head = head->next;
                    cout << "Node Unlinked with keys Value:" << k << endl;
                }
                else
                {
                    Node *nextNode = ptr->next;
                    Node *prevNode = ptr->prev;
                    if (nextNode == NULL)
                    {
                        prevNode->next = NULL;
                        cout << "Node Deleted in Between" << endl;
                    }
                    else
                    {

                        prevNode->next = nextNode;
                        nextNode->prev = prevNode;
                        cout << "Node delted in Between" << endl;
                    }
                }
            }
        }
    }

    void updatenode(int k, int d)
    {
        Node *ptr = NodeExist(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node data Updated Successfully" << endl;
        }
        else
        {
            cout << "Node Doesnt  exist with key value" << endl;
        }
    }
    void printlist()
    {
        if (head == NULL)
        {
            cout << "Doubly list is already empty" << endl;
        }
        else
        {
            cout << endl
                 << "Doubly Linked List values : ";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") < -- > ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
     doublylinkedlist d;

    int option;
    int key1, k1, data1;

    do
    {
        cout << "What operation do you want to perform? Selection the option number. Enter 0 to exit." << endl;
        cout << "1 . AppendNode()" << endl;
        cout << "2 . PrependNode()" << endl;
        cout << "3 . insertNodeAftter()" << endl;
        cout << "4 . delteNodeByKey()" << endl;
        cout << "5 . UpdateNodeByKey()" << endl;
        cout << "6 . print()" << endl;
        cout << "7 . Clear screen" << endl;
        cin >> option;

        Node *n1 = new Node();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Appened Node Operation \nEnter key & data of the Node to be Appended " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            d.appendNode(n1); // as it dynamically so we no need of sending it by tha address using &.
            break;
        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be prepended " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            d.prependnode(n1);
            break;
        case 3:
            cout << "Insert Node after Operation \nEnter key of  existing Node after which you want to Insert this new node " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first." << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            d.insertNodeAfter(k1, n1);
            break;

        case 4:
            cout << "Delete Node By key Operation \nEnter key of the Node to be delted " << endl;
            cin >> k1;
            d.deletenodebykey(k1);
            break;
        case 5:
            cout << "Upadtion  Node By key Operation \nEnter key & NEW data to be updated " << endl;
            cin >> key1;
            cin >> data1;
            d.updatenode(key1, data1);
            break;
        case 6:
            d.printlist();
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