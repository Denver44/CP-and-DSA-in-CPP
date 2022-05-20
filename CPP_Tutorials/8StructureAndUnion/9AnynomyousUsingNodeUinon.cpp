#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    union
    {
        struct
        {
            Node *left, *right;
        };
        struct
        {
            Node *prev, *next;
        };
    };
    Node(int x)
    {
        data = x;
    }
};

void makeLL()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    auto tail = head->next;
    tail->prev = head;
    tail->next = NULL;

    auto i = head;
    while (i != NULL)
    {
        cout << i->data << ' ';
        i = i->next;
    }
}

void makeBT()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        auto t = q.front();
        q.pop();
        cout << t->data << ' ';
        if (t->left != NULL)
        {
            q.push(t->left);
        }
        if (t->right != NULL)
        {
            q.push(t->right);
        }
    }
}

int main()
{
    makeLL();
    cout << '\n';
    makeBT();
    return 0;
}