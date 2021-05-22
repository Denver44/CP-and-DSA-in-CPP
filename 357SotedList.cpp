#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *splitList(ListNode *head)
    {
        ListNode *temp = NULL;
        ListNode *slowptr = head;
        ListNode *fastptr = head;

        while (fastptr && fastptr->next)
        {
            temp = slowptr;
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
        if (temp)
        {
            temp->next = NULL;
        }

        return slowptr;
    }

    ListNode *Merge(ListNode *p1, ListNode *p2)
    {
        ListNode *s = new ListNode(-1);
        ListNode *head3 = s;

        while (p1 && p2)
        {

            if (p1->val <= p2->val)
            {
                s->next = p1;
                p1 = p1->next;
                s = s->next;
            }
            else
            {
                s->next = p2;
                p2 = p2->next;
                s = s->next;
            }
        }

        while (p1 != NULL)
        {
            s->next = p1;
            p1 = p1->next;
            s = s->next;
        }
        while (p2 != NULL)
        {
            s->next = p2;
            p2 = p2->next;
            s = s->next;
        }

        return head3->next;
    }

    ListNode *sortList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *p1;
        ListNode *p2;
        ListNode *new_head;

        p1 = head;
        p2 = splitList(head);

        new_head = Merge(sortList(p1), sortList(p2));

        return new_head;
    }
};

int main()
{

    return 0;
}
