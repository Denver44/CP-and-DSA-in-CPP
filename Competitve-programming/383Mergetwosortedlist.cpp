#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = nullptr;
    }

    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL && l2 == NULL)
        {
            return NULL;
        }

        else if (l1 == NULL && l2 != NULL)
        {
            return l2;
        }
        else if (l2 == NULL && l1 != NULL)
        {
            return l1;
        }

        ListNode *last; // just temporary pointer.
        ListNode *head; // This is head which we will return and Contain the address of the first pointer.
        if (l1->val <= l2->val)
        {
            head = last = l1; // here making l1 as head and  taking address of l1 in last
            l1 = l1->next;
            last->next = nullptr;
        }
        else
        {
            head = last = l2; // here making l2 as head and  taking address of l2 in last
            l2 = l2->next;
            last->next = nullptr;
        }

        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                last->next = l1;      // here first we are joing the  node to head node list .
                last = l1;            // then taking the current l1 node addrees in last.
                l1 = l1->next;        // then moving forward making l1 to point ist next memner
                last->next = nullptr; // and here we making the last->nect null ptr to unlink it with l1.
            }
            else
            {
                last->next = l2;
                last = l2;
                l2 = l2->next;
                last->next = nullptr;
            }
        }

        if (l1 != NULL)
        {
            while (l1 != NULL)
            {
                last->next = l1;
                last = l1;
                l1 = l1->next;
                last->next == nullptr;
            }
        }
        else
        {
            while (l2 != NULL)
            {
                last->next = l2;
                last = l2;
                l2 = l2->next;
                last->next == nullptr;
            }
        }

        return head;
    }
};

int main()
{

    return 0;
}