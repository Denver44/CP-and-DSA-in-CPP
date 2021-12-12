#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int key;
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
    }
};
class circularlikedlist
{

public:
    Node *head;
    circularlikedlist()
    {
        head = NULL;
    }
    circularlikedlist(Node *n)
    {
        head = n;
    }

    Node *Nodeexist(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;

        if (ptr == NULL)
        {
            return temp;
        }

        do
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;

        } while (ptr != head);
        return temp;
    }
    void appendNode(Node *new_node)
    {
        if (Nodeexist(new_node->key) != NULL)
        {
            cout << "Node Already exits with key value :"
                 << new_node->key << ". Append another node with different key value" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout << "Node Appended at first head position" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                cout << "Node Appended" << endl;
            }
        }
    }
    void prependNode(Node *new_node)
    {
        if (Nodeexist(new_node->key) != NULL)
        {
            cout << "Node Already exits with key value :"
                 << new_node->key << ". Append another node with different key value" << endl;
        }

        else
        {
            if (head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout << "Node Appended at first head position" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                head = new_node;
                cout << "Node Prepended" << endl;
            }
        }
    }
    void insertnodeAfter(int k, Node *new_node)
    {
        Node *ptr = Nodeexist(k);
        if (ptr == NULL)
        {
            cout << " No Node  exits with that key value :" << k << endl;
        }
        else
        {
            if (Nodeexist(new_node->key) != NULL)
            {
                cout << "Node Already exits with key value :"
                     << new_node->key << ". Append another node with different key value" << endl;
            }
            else
            {
                // at the end
                if (ptr->next == head)
                {
                    new_node->next = ptr->next;
                    ptr->next = new_node;
                    cout << "Node inserted at the end" << endl;
                }
                else
                {
                    new_node->next = ptr->next;
                    ptr->next = new_node;
                    cout << "Node Inserted in betwen" << endl;
                }
            }
        }
    }
    void deleteNodeByKey(int k)
    {
        Node *ptr = Nodeexist(k);
        if (ptr == NULL)
        {
            cout << " No Node  exits with thst key value :" << k << endl;
        }
        else
        {

            if (ptr == head)
            {
                if (ptr->next == head)
                {
                    head = NULL;
                    cout << "head node Unlinked.... List Empty";
                }
                else
                {
                Node *ptr1 = head;
                while (ptr1->next != head)
                {
                    ptr1 = ptr1->next;
                }
                ptr1->next = head->next;
                head = head->next;
                cout << "Node Unlinked with keys Value  : " << k << endl;
                }
            }
            else
            {
                Node *temp = NULL;
                Node *prevptr = head;
                Node *currentptr = head->next; // for making loop running
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }

                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                prevptr->next = temp->next;
                cout << "Node Unlinked with keys Value  : " << k << endl;
            }
        }
    }
    void updatenode(int k, int new_data)
    {
        Node *ptr = Nodeexist(k);
        if (ptr != NULL)
        {
            ptr->data = new_data;
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
            cout << "Circular LInked list is already empty" << endl;
        }
        else
        {
            cout << endl
                 << "Head address : " << head << endl;
            cout << "Circular Linked list Value : " << endl;
            {
                Node *temp = head;

                do
                {
                    cout << "(" << temp->key << "," << temp->data << "," << temp->next << ") -- > ";
                    temp = temp->next;
                } while (temp != head);
            }
        }
    }
};
int main()
{

    circularlikedlist c;

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
            c.appendNode(n1); // as it dynamically so we no need of sending it by tha address using &.
            break;
        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be prepended " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            c.prependNode(n1);
            break;
        case 3:
            cout << "Insert Node after Operation \nEnter key of  existing Node after which you want to Insert this new node " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first." << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            c.insertnodeAfter(k1, n1);
            break;

        case 4:
            cout << "Delete Node By key Operation \nEnter key of the Node to be delted " << endl;
            cin >> k1;
            c.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "Upadtion  Node By key Operation \nEnter key & NEW data to be updated " << endl;
            cin >> key1;
            cin >> data1;
            c.updatenode(key1, data1);
            break;
        case 6:
            c.printlist();
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