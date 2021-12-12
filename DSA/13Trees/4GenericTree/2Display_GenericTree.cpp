#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int size = 0;
class Node
{
public:
    int data;
    vector<Node *> children;
};

void display(Node *node)
{
    cout << node->data << "->";
    for (Node *child : node->children)
    {

        cout << child->data << "->";
    }
    cout << "."<<endl;
    for (Node *child : node->children)
    {

        display(child);
    }
}

int main()
{
    int arr[] = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};

    stack<Node *> st;
    Node *root = NULL;
    for (int i = 0; i < 24; i++)
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
    display(root);

    return 0;
}

