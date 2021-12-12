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

void LevelOrder(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(node);

    while (q.size() > 0)
    {
        int n = q.size();
        while (n > 0)
        {

            Node *p = q.front();
            q.pop();
            cout << p->data << " ";
            for (int i = 0; i < p->children.size(); i++)
            {
                q.push(p->children[i]);
            }

            n--;
        }
    }
    cout << ".";
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
    LevelOrder(root);

    return 0;
}
