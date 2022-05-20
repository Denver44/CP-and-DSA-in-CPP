#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int ceil;
int floor;
int value;

class Node
{
public:
    int data;
    vector<Node *> children;
};

void CeilandFloor(Node *node)
{
    if (node->data > value)
    {
        if (node->data < ceil)
        {
            ceil = node->data;
        }
    }
    if (node->data < value)
    {
        if (node->data > floor)
        {
            floor = node->data;
        }
    }

    for (Node *child : node->children)
    {
        CeilandFloor(child);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> value;
    stack<Node *> st;
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

            if (st.size() > 0)
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }

    ceil = INT32_MAX;  // smallest among larger
    floor = INT32_MIN; // larger among smallest
    CeilandFloor(root);
    if (ceil == INT32_MAX)
    {
        cout << "CEIL = " << INT32_MAX << endl;
    }
    else
    {
        cout << "CEIL = " << ceil << endl;
    }
    if (floor == INT32_MIN)
    {
        cout << "FLOOR = " << INT32_MIN << endl;
    }
    else
    {
        cout << "FLOOR = " << floor << endl;
    }

    return 0;
}