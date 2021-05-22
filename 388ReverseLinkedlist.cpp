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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *r = nullptr;
        ListNode *q = nullptr;

        while (head != NULL)
        {
            r = q;
            q = head;
            head = head->next;
            q->next = r;
        }

        head = q;
        return head;
    }
};
int main()
{

    return 0;
}