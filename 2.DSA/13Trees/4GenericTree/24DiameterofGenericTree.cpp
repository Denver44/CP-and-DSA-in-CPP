#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;
};
int diameter = 0; //
int Diameter(Node *root)
{
    int dc = -1;  // deepest child
    int sdc = -1; // second deepest child

    for (Node *child : root->children)
    {
        int ch = Diameter(child);
        if (ch > dc)
        {
            sdc = dc;
            dc = ch;
        }
        else if (ch > sdc)
        {
            ch = sdc;
        }
    }

    if ((dc + sdc + 2) > diameter) // we upadte the diamter variable.
    {
        diameter = (dc + sdc + 2);
    }

    dc += 1;
    return dc;
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
    Diameter(root);
    cout << diameter << endl;

    return 0;
}