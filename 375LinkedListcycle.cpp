#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// Two pointer is best approach for detection of cycle in linked list.
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }

        if (head->next == NULL)
        {
            return false;
        }

        ListNode *slowptr = head;
        ListNode *fastptr = head->next;

        while (slowptr != fastptr)
        {
            slowptr = slowptr->next;
            if (fastptr->next == NULL || fastptr->next->next == NULL)
            {
                // This is for error checking.

                return false;
            }
            fastptr = fastptr->next->next;
        }
        return true;
    }
};

int main()
{

    return 0;
}