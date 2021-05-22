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
    bool isPalindrome(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        ListNode *slowptr = head;
        ListNode *fastptr = head;
        ListNode *startsecond;

        // This is used to find odd and even method for linked list.
        while (1)
        {
            fastptr = fastptr->next->next;

            if (fastptr == nullptr) // Even lenght
            {
                startsecond = slowptr->next;
                break;
            }
            if (fastptr->next == nullptr) // ODD length
            {
                startsecond = slowptr->next->next;
                break;
            }
            slowptr = slowptr->next;
        }

        // example 1-2-2-1 so using start secon we get address of second -2.
        // after then 2-1 now become 1-2.

        // ------------------------------- REVERSAL OF THE SECOND LIST----------------------------------------//
        ListNode *r = nullptr;
        ListNode *q = nullptr;
        while (startsecond != NULL)
        {
            r = q;
            q = startsecond;
            startsecond = startsecond->next;
            q->next = r;
        }

        startsecond = q;

        //----------------------- COMPARISION OF LINKED LIST --------------------------------------------//

        //    1-2-1-2

        while (startsecond != NULL && head != NULL)
        {
            if (startsecond->val == head->val)
            {
                startsecond = startsecond->next;
                head = head->next;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
int main()
{

    return 0;
}
