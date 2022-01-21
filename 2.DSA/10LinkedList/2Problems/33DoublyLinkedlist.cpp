#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        data = 0;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedlist
{
private:
    Node *head;
    Node *last;

public:
    DoublyLinkedlist()
    {
        head = NULL;
    }

    void create(int *arr, int size)
    {
        Node *first = new Node;
        head = first;
        first->data = arr[0];
        last = first;

        for (int i = 1; i < size; i++)
        {
            Node *temp = new Node;
            temp->data = arr[i];
            temp->prev = last;
            last->next = temp;
            last = temp;
        }
    }
    void Insert(int pos, int value)
    {
        if (pos < 0 || pos > length())
        {
            return;
        }

        if (pos == 0)
        {
            Node *temp = new Node;
            temp->data = value;
            temp->next = head;
            head->prev = temp;
            head = temp;
            return;
        }

        Node *traverse = head;
        for (int i = 0; i < pos - 1; i++)
        {
            traverse = traverse->next;
        }
        Node *temp = new Node;
        temp->data = value;
        temp->next = traverse->next;
        temp->prev = traverse;
        traverse->next = temp;
    }
    void Delete(int pos)
    {
        if (pos < 1 || pos > length())
        {
            return;
        }

        if (pos == 1)
        {
            cout << "Deleted item is  " << head->data << endl;

            head = head->next;
            head->prev = NULL;
            return;
        }

        if (pos == length())
        {
            Node *traverse = head;
            for (int i = 0; i < pos - 1; i++)
            {
                traverse = traverse->next;
            }
            cout << "Deleted item is  " << traverse->data << endl;
            traverse->prev->next = NULL;
            return;
        }

        Node *traverse = head;
        for (int i = 0; i < pos - 1; i++)
        {
            traverse = traverse->next;
        }
        cout << "Deleted item is  " << traverse->data << endl;
        traverse->prev->next = traverse->next;
        traverse->next->prev = traverse->prev;
    }

    void display()
    {
        if (head != NULL)
        {

            Node *temp = head;
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
        else
        {
            return;
        }
    }

    int length()
    {
        int x = 0;
        Node *temp = head;
        while (temp)
        {
            x++;
            temp = temp->next;
        }

        return x;
    }
    void ReverseNode()
    {

        Node *p = head;
        Node *temp;

        while (p != NULL)
        {
            temp = p->next;
            p->next = p->prev;
            p->prev = temp;
            p = p->prev;
            if (p != NULL && p->next == NULL)
                head = p;
        }
    }
};

int main()
{
    DoublyLinkedlist l1;
    int arr[] = {1, 2, 3, 4, 5};
    l1.create(arr, 5);

    // l1.Delete(1);
    // l1.Delete(1);
    // l1.Delete(3);
    l1.ReverseNode();
    l1.display();
    cout << endl;
    cout << l1.length();

    return 0;
}