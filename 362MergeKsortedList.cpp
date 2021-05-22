#include <iostream>
#include <vector>
#include <algorithm>
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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
        {
            return NULL;
        }

        vector<int> v1;

        ListNode *temp;

        for (int i = 0; i < lists.size(); i++)
        {
            temp = lists[i]; // address of the list Node are store here.

            if (temp == NULL) // if the temp is nULL then Skip it.
            {
                continue;
            }

            while (temp != NULL) //in vector push all the elemnets.
            {
                v1.push_back(temp->val);
                temp = temp->next;
            }
        }
        if (v1.empty())
        {
            return NULL;
        }

        sort(v1.begin(), v1.end()); // Sort the vector.

        ListNode *head;
        ListNode *temp1 = new ListNode(v1[0]); // first element.
        ListNode *last = temp1;
        head = temp1;

        for (int i = 1; i < v1.size(); i++)
        {
            ListNode *temp2 = new ListNode(v1[i]);
            last->next = temp2;
            last = temp2;
        }

        return head;
    }
};

int main()
{

    return 0;
}