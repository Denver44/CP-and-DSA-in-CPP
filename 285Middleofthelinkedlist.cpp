#include <iostream>
using namespace std;

// Two pointer Approach is best Solution.
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
    ListNode *middleNode(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *slowptr = head;
        ListNode *fastptr = head;

        while (fastptr != NULL && fastptr->next != NULL)
        {
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
        return slowptr;
    }
};

int main()
{

    return 0;
}