#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int SIZE;
int height;
int MAX;
int MIN;
class Node
{
public:
    int data;
    vector<Node *> children;
};

void MutliSolver(Node *node, int depth)
{
    SIZE++;
    height = max(height, depth);
    MAX = max(MAX, node->data);
    MIN = min(MIN, node->data);

    for (Node *child : node->children)
    {
        MutliSolver(child, depth + 1);
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
    height = 0;
    SIZE = 0;
    MAX = INT32_MIN;
    MIN = INT32_MAX;
    MutliSolver(root, 0);
    cout << "The Size is " << SIZE << endl;
    cout << "The Height is " << height << endl;
    cout << "The MAX Vaule is " << MAX << endl;
    cout << "The MIN Value is " << MIN << endl;
    return 0;
}