#include <iostream>
using namespace std;

class Node // [1] First we will creata a node and after then we will link it with other node and make it linked list.
{
public:
    int key;    //[2]  key is very important so that we can easily traverse the list. it will be unique for each object.
    int data;   // [3] the data can be repetitive.
    Node *next; //[4] the next will have type of Node because it will store the address of this class object only. and its is pointer.

    Node() // here we have create a default constructor and initiliaze all the value as zero.
    {
        key = 0;
        data = 0;
        next = NULL; // it is pointer type variable thats why we are storing it Null.
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};
class SinglyLinkedList
{
public:
    Node *head; // in the singly lnked list there will be  the only member head which help us to link thw node.

    SinglyLinkedList() // as default we make that head as NULL.
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n) // the data we wil send it adress will get store automatically in this part. by the pointer.
    {
        head = n; // here the n has some address so it will going to be store in the head.
    }

    // 1. Check if node already exists using key value
    Node *nodeexist(int k)
    {
        Node *temp = NULL;  // this variable temp will store that address of the key which we are looking it so for first we have intitliaze it with zero. // LOCAL VARIABLE
        Node *ptr = head;   // this is the head pointer which has the address of the first element  // LOCAL VARIABLE
        while (ptr != NULL) // this is metho for traversing the whole linked list.
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next; // if upper conditon fails the ptr value will get change to next value.
        }
        return temp; // we have to rteurn a pointer
    }

    //2. appending the node at the end.
    void appendNode(Node *n)
    {
        if (nodeexist(n->key) != NULL) // first we have to check that the we have send the key value is not alredy exist.
        {
            cout << "Node Already exists with key value : " << n->key << ". Append another node with different key value" << endl;
        }
        else
        {
            if (head == NULL) // is there is no node then this node will become the head.
            {
                head = n;
                cout << "Node Appended" << endl;
            }
            else
            {
                Node *ptr = head; // we will traverse at from the head till wull didnt get the null node next
                while (ptr -> next != NULL)

                {
                    ptr = ptr->next;
                }
                ptr->next = n; // as we get the last node whose next is null we store the address n in there an thats how we appended the node.
                cout << "Node Appended" << endl;
            }
        }
    }
    // 3. Preprnd node  Attach a node at the start
    void prependNode(Node *n)
    {

        if (nodeexist(n->key) != NULL) // this is necessary we know the key value must be unique.
        {
            cout << "Node Already exists with key value : " << n->key << ". Append another node with different key value" << endl;
        }

        else
        {
            n->next = head; // means we are storing former head address in the n which we created to make attacg at the start of the linked list.
            head = n;       // then we change the value of head former head address to the addres of n whch we creared ti append it first of linked list.
            cout << "Node Prepended" << endl;
        }
    }

    //4. Insert a node after a particular node in the list.
    void insertnode(int k, Node *n)
    {
        Node *ptr = nodeexist(k); // here we have to not just check it but also access that tahsy why we use this time a ptr which wull store that address
        if (ptr == NULL)
        {
            cout << "No node  exists with key value : " << k << endl;
        }
        else
        {
            if (nodeexist(n->key) != NULL) // this is necessary we know the key value must be unique. as the new key value doesnt got same with already key value thst why we are checking it.
            {
                cout << "Node Already exists with key value : " << n->key << ". Append another node with different key value" << endl;
            }
            else
            {

                n->next = ptr->next; // here the new node will first get the address of that node like if n2 has the addess of n3 so now n4 which we inserted now get the address of n3.
                ptr->next = n;       // now we have chage the address of n2 next by having address of n4 in it.
            }
        }
    }

    //5. Delte a node by unique key.
    void deleteNodebyKey(int k)
    {
        if (head == NULL)
        {
            cout << "Singly linked list already Empty. Can't dlete " << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k) // this when we are deleting the first node itself.
            {
                head = head->next; // this we are changing he value of head node by next node as we are deletimg the first nde itself.
                cout << "Node Unlinked with Keys value: " << k << endl;
            }
            else
            {
                Node *temp = NULL;             // Local variable need this three temp , prevptr and currentptr.
                Node *prevptr = head;          // this will have the address of head ptr.
                Node *currentptr = head->next; // this wil have the address of address of haed.
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL; // this to make the loop finite otherwise it will get infinite.
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node Unlinked with keys value :" << k << endl;
                }
                else
                {
                    cout << "Node doesn't exist with key value :" << k << endl;
                }
            }
        }
    }
    //6. Update Node by key value.
    void updatenodebykey(int k, int d)
    {
        Node *ptr = nodeexist(k); // checking that the key value is exist or not which we are going to change.
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node Data updated Successfully" << endl;
        }
        else
        {
            cout << "Node doesnt exist with key value:" << k << endl;
        }
    }
    //7. Printing
    void printlist()
    {
        if (head == NULL)
        {
            cout << "No Nodes in Singly Linked list" << endl;
        }
        else
        {
            cout << endl
                 << "Singly Linked list values : ";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") --> ";
                temp = temp->next; // this to make the loop finite and also upadting the temp value.
            }
        }
    }
};
int main()
{
    SinglyLinkedList s;

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

        Node *n1 = new Node(); // dynamically creating the size of node. // we can also cfreate liek Node n1    the n1. key but here are using dynamically. as if use the staic way as we are using do while loop so after cmpletion of one progra,m it will get delted.
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
            s.appendNode(n1); // as it dynamically so we no need of sending it by tha address using &.
            break;
        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be prepended " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << "Insert Node after Operation \nEnter key of  existing Node after which you want to Insert this new node " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first." << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.insertnode(k1, n1);
            break;

        case 4:
            cout << "Delete Node By key Operation \nEnter key of the Node to be delted " << endl;
            cin >> k1;
            s.deleteNodebyKey(k1);
            break;
        case 5:
            cout << "Upadtion  Node By key Operation \nEnter key & NEW data to be updated " << endl;
            cin >> key1;
            cin >> data1;
            s.updatenodebykey(key1, data1);
            break;
        case 6:
            s.printlist();
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