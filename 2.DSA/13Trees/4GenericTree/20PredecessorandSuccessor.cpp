#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int PRE;
int SUCC;
int STATE;
int data;

class Node
{
public:
    int data;
    vector<Node *> children;
};

void PredecessorandSuccessor(Node *node)
{
    if (STATE == 0)
    {
        if (node->data == data)
        {
            STATE = 1;
        }
        else
        {
            PRE = node->data;
        }
    }
    else if (STATE == 1)
    {
        SUCC = node->data;
        STATE = 2;
    }

    for (Node *child : node->children)
    {
        PredecessorandSuccessor(child);
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
    cin >> data;
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
    PRE = 0;
    SUCC = 0;
    STATE = 0;
    PredecessorandSuccessor(root);
    if (PRE == 0)
    {
        cout << "Predecessor = Not found" << endl;
    }
    else
    {
        cout << "Predecessor = " << PRE << endl;
    }
    if (SUCC == 0)
    {
        cout << "Successor = Not found" << endl;
    }
    else
    {
        cout << "Successor = " << SUCC << endl;
    }

    return 0;
}