#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int size = 0;
class Node
{
public:
    int data;
    vector<Node *> children;
};

void LevelOrderZigZag(Node *node)
{
    stack<Node *> ms;
    ms.push(node);
    stack<Node *> cs;
    int level = 1;

    while (ms.size() > 0)
    {
        Node *p = ms.top();
        ms.pop();
        cout << p->data << " ";

        int n = p->children.size();

        if (level % 2 == 1)
        {
            for (int i = 0; i < p->children.size(); i++)
            {
                cs.push(p->children[i]);
            }
        }
        else
        {
            for (int i = p->children.size() - 1; i >= 0; i--)
            {
                cs.push(p->children[i]);
            }
        }

        if (ms.size() == 0)
        {
            ms = cs;
            stack<Node *> temp;
            cs = temp;
            level++;
            cout << endl;
        }
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
    LevelOrderZigZag(root);

    return 0;
}
