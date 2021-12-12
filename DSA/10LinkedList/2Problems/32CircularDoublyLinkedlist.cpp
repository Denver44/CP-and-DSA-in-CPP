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
class CirculardoublyLinkedlist
{
private:
    Node *head;
    Node *last;

public:
    CirculardoublyLinkedlist()
    {
        head = NULL;
    }

    void create(int *arr, int size)
    {
        Node *first = new Node;
        head = first;
        first->data = arr[0];
        first->next = first;
        first->prev = first;
        last = first;

        for (int i = 1; i < size; i++)
        {
            Node *temp = new Node;
            temp->data = arr[i];
            temp->prev = last;
            temp->next = last->next;
            last->next = temp;
            last = temp;
            last->next->prev = temp;
        }
    }

    void display()
    {
    
        if (head != NULL)
        {

            Node *temp = head;
            cout << temp->data << " ";
            temp = temp->next;
            while (temp != head)
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
};

int main()
{
    CirculardoublyLinkedlist l1;
    int arr[] = {1, 2, 3, 4, 5,5,4,3,2,1};
    l1.create(arr, 10);

 
    l1.display();

    return 0;
}