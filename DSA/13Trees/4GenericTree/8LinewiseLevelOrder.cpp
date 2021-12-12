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

    Node()
    {
    }
    Node(int a)
    {
        data = a;
    }
};

void LevelOrderLinewise1(Node *node)
{
    //  2 Stack we used
    if (node == NULL)
    {
        return;
    }

    queue<Node *> mq;
    mq.push(node);
    queue<Node *> cq;

    while (mq.size() > 0)
    {

        Node *p = mq.front();
        mq.pop();
        cout << p->data << " ";
        for (int i = 0; i < p->children.size(); i++)
        {
            cq.push(p->children[i]);
        }

        if (mq.size() == 0)
        {
            mq = cq;
            queue<Node *> temp;
            cq = temp;
            cout << endl;
        }
    }
}
void LevelOrderLinewise2(Node *node)
{
    //  One stack and -1 for nextline
    if (node == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(node);
    Node *delimeter = new Node(-1);
    q.push(delimeter);

    while (q.size() > 0)
    {
        Node *p = q.front();
        q.pop();
        if (p->data != -1)
        {
            cout << p->data << " ";
            for (int i = 0; i < p->children.size(); i++)
            {
                q.push(p->children[i]);
            }
        }
        else
        {
            if (q.size() > 0)
            {
                Node *delimeter2 = new Node(-1);
                q.push(delimeter2);
                cout << endl;
            }
        }
    }
}

void LevelOrderLinewise3(Node *node)
{
    //  One stack and -1 for nextline
    if (node == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(node);
    while (q.size() > 0)
    {
        int len = q.size();

        for (int i = 0; i < len; i++)
        {
            Node *p = q.front();
            cout << p->data << " ";
            q.pop();

            for (int j = 0; j < p->children.size(); j++)
            {
                q.push(p->children[j]);
            }
        }
        cout << endl;
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
    LevelOrderLinewise1(root);
    // LevelOrderLinewise2(root);

    return 0;
}
