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
// Here we have only give the node  which we want to delete
// No head Node is goven to traverse and delete it.
// so we have to just delete that node.
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;   // here we are inserting the value of its next node in the node which we want to delete
        node->next = node->next->next; // here we are isnerting the address of next to next node in the delete node so node which we want to deleted has now address and value of next so no now next node will get neglected at time of traversal and printing.
    }
};

int main()
{

    return 0;
}