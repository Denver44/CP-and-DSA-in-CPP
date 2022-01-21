#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class CircularLinklist
{
public:
    Node *head;
    Node *last;

    CircularLinklist()
    {
        head = NULL;
    }
    void create(int arr[], int size)
    {
        head = new Node;
        head->data = arr[0];
        head->next = head;
        last = head;

        for (int i = 1; i < size; i++)
        {
            Node *temp = new Node;
            temp->data = arr[i];
            temp->next = last->next;
            last->next = temp;
            last = temp;
        }
    }

    void Display()
    {
        if (head != NULL)
        {

            Node *temp = head;

            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
        }
        else
            return;
    }

    void Rdisplay(Node *p)
    {
        static int i = 0;

        if (p != head || i == 0)
        {
            i = 1;
            Rdisplay(p->next);
            cout << p->data << " ";
        }
        i = 0;
    }

    void Insert(int pos, int value)
    {
        Node *temp2 = head;

        if (pos < 0 || pos > Length())
        {
            return;
        }
        else if (pos == 0)
        {
            Node *temp = new Node;
            temp->data = value;
            temp->next = head;
            head = temp;
            last->next = temp;
            return;
        }
        else if (pos == Length())
        {
            Node *temp = new Node;
            temp->data = value;
            last->next = temp;
            temp->next = head;
            last = temp;
            return;
        }

        else
        {

            for (int i = 0; i < pos - 1; i++)
            {
                temp2 = temp2->next;
            }
            Node *temp = new Node;
            temp->data = value;
            temp->next = temp2->next;
            temp2->next = temp;
        }
    }

    int Length()
    {
        Node *temp = head;
        int count = 0;
        if (temp == NULL)
        {
            return 0;
        }
        count++;
        temp = temp->next;
        while (temp != head)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void Delete(int pos)
    {
        Node *temp = head;

        if (pos < 1 || pos > Length())
        {
            return;
        }
        if (pos == 1)
        {
            Node *delnode;
            delnode = temp;
            temp = temp->next;
            head = temp;
            last->next = temp;
            delete delnode;
            return;
        }
        if (pos == Length())
        {
            Node *traverse = head;
            while (traverse->next != head)
            {
                temp = traverse;
                traverse = traverse->next;
            }
            Node *delnode;
            delnode = temp->next;
            temp->next = last->next;
            last = temp;
            delete delnode;
            return;
        }

        else
        {
            Node *prev = head;
            for (int i = 0; i < pos - 1; i++)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    CircularLinklist l1;
    l1.create(arr, 5);
    l1.Insert(55, 66);
    l1.Display();
    cout << endl;

    l1.Delete(1);
    l1.Display();
    cout << endl;
    cout << "Length Of list " << l1.Length();
    cout << endl;
    cout << "last Node Data  " << l1.last->data << endl;
    cout << "Head Node Data " << l1.last->next->data << endl;

    return 0;
}