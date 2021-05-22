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
// We have to delete a Node From Ending.
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int length = 0;
        while (temp)
        {

            length++;
            temp = temp->next;
        }

        int node_to_delted = length - n;

        if (node_to_delted == 0) // First Node to Delete
        {
            head = head->next;
        }

        else if (node_to_delted == length - 1) // Last Node to Delete
        {
            int n = node_to_delted - 1;
            ListNode *temp = head;
            while (n)
            {
                n--;
                temp = temp->next;
            }
            temp->next = NULL;
        }
        else
        {

            ListNode *temp2 = head;
            ListNode *prev;
            while (node_to_delted)
            {
                prev = temp2;
                temp2 = temp2->next;
                node_to_delted--;
            }

            prev->next = prev->next->next;
        }

        return head;
    }
};
int main()
{
    ListNode *l1 = new ListNode(2);
    ListNode *temp2 = new ListNode(4);
    l1->next = temp2;
    ListNode *temp3 = new ListNode(3);
    temp2->next = temp3;

    ListNode *temp;
    Solution s1;
    temp = s1.removeNthFromEnd(l1, 2);

    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }

    return 0;
}
