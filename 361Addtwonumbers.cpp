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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        if (l1 == NULL and l2 == NULL)
        {

            return NULL;
        }

        int a = 0, b = 0;
        int sum = 0, carry = 0, insert = 0;

        sum = a + b;
        a = l1->val;
        l1 = l1->next;
        b = l2->val;
        l2 = l2->next;
        sum = a + b;
        insert = sum % 10;
        carry = sum / 10;
        ListNode *l3 = new ListNode(insert);
        ListNode *prev = l3;

        while (l1 && l2)
        {
            a = l1->val;
            l1 = l1->next;
            b = l2->val;
            l2 = l2->next;
            sum = a + b;
            if (carry > 0)
            {
                sum = sum + carry;
            }
            insert = sum % 10;
            carry = sum / 10;
            ListNode *temp = new ListNode(insert);
            prev->next = temp;
            prev = temp;
        }
        if (carry > 0 && l1 == NULL && l2 == NULL)
        {
            ListNode *temp = new ListNode(carry);
            prev->next = temp;
            prev = temp;
            temp->next = NULL;
        }
        else if (carry >= 0 && l1 != NULL && l2 == NULL)
        {

            while (l1 != NULL)
            {
                a = l1->val;
                l1 = l1->next;
                sum = a + carry;
                insert = sum % 10;
                carry = sum / 10;
                ListNode *temp = new ListNode(insert);
                prev->next = temp;
                prev = temp;
            }
            if (carry > 0)
            {

                ListNode *temp = new ListNode(carry);
                prev->next = temp;
                prev = temp;
                temp->next = NULL;
            }
        }
        else if (carry >= 0 && l1 == NULL && l2 != NULL)
        {

            while (l2 != NULL)
            {
                a = l2->val;
                l2 = l2->next;
                sum = a + carry;
                insert = sum % 10;
                carry = sum / 10;
                ListNode *temp = new ListNode(insert);
                prev->next = temp;
                prev = temp;
            }
            if (carry > 0)
            {

                ListNode *temp = new ListNode(carry);
                prev->next = temp;
                prev = temp;
                temp->next = NULL;
            }
        }

        return l3;
    }
};

int main()
{
    ListNode *l1 = new ListNode(2);
    ListNode *temp2 = new ListNode(4);
    l1->next = temp2;
    ListNode *temp3 = new ListNode(3);
    temp2->next = temp3;

    ListNode *l2 = new ListNode(5);
    ListNode *temp4 = new ListNode(6);
    l2->next = temp4;
    ListNode *temp5 = new ListNode(4);
    temp4->next = temp5;

    ListNode *temp;
    Solution s1;
    temp = s1.addTwoNumbers(l1, l2);

    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }

    return 0;
}

// [ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 ]
// [5, 6, 4]