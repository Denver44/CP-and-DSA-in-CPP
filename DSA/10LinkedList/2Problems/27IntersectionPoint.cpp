#include <iostream>
#include <stack>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
        {
            return NULL;
        }

        ListNode *a_pointer = headA;
        ListNode *b_pointer = headB;

        while (a_pointer != b_pointer)
        {
            if (a_pointer == NULL) // as soon as headA complete it traversal from headA side
                a_pointer = headB; // now it will start from Bside.

            else
                a_pointer = a_pointer->next;

            if (b_pointer == NULL) // as soon as headB complete it traversal from headB side
                b_pointer = headA; // now it will start from Aside.

            else
                b_pointer = b_pointer->next;
        }
        return a_pointer;
    }
};

int main()
{

    return 0;
}
