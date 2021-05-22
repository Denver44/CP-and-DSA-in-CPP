#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr) // if head is null then just return head
            return head;

        Node *temp = head;          // for iterating the Given list
        Node *clone_head = nullptr; // Haed of Clone list

        while (temp != NULL)
        {

            Node *temp2 = new Node(temp->val);
            temp2->next = temp->next; // here we are saving the address of given list ->next address in it.
            temp->next = temp2;       // to go to the next list we are asssign the temp2->next which has next address of given list in it to temp.

            if (clone_head == nullptr)
            {
                clone_head = temp2; // clone head gets the head pointer address in it.
            }
            temp = temp2->next;
        }
        // 1 step Complete.

        temp = head;                  // Givern list head node assignment to temp.
        Node *clonetemp = clone_head; // Clonelist head assignmen to clone temp

        while (temp != nullptr)
        {
            if (temp->random != nullptr)                // if first head->node random variable is not null then .
                clonetemp->random = temp->random->next; // clone->random will get the address of that random point.

            else
                clonetemp->random = nullptr; // if temp->random is null then clonetemp-> random will also null.

            temp = clonetemp->next;
            if (temp != nullptr)
                clonetemp = temp->next; // as given has next address in it of clone list and vice-versa.
        }

        // 2 step complete

        temp = head;
        clonetemp = clone_head;

        while (temp != nullptr)
        {
            temp->next = clonetemp->next; // here given list next will get back his next address by clone->next.
            temp = temp->next;
            if (temp != nullptr)
            {
                clonetemp->next = temp->next; // clone->next will get address by temp->next
                clonetemp = clonetemp->next;
            }
        }
        if (clonetemp)

            clonetemp->next = nullptr;

        return clone_head;
    }
};

int main()
{

    return 0;
}
