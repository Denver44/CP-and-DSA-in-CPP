#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// I need a data Structure which has a Capibility of storing the data and address of children
class Node
{
public:
    int data;
    vector<Node *> children; // it will save the addrress of its children Node.
};

int main()
{
    int arr[] = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};
    stack<Node *> st; // with the help of the stack we will create a Generic tree.
    Node *root = NULL;
    for (int i = 0; i < 24; i++)
    {
        if (arr[i] == -1)
        {
            st.pop(); //if its is -1 the simply pop.
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

            if (st.size() > 0)
            {
                st.top()->children.push_back(t); // if there is any element on the top then make the current node to children of the of top Node.
            }
            else
            {
                root = t; // if stack is empty then simply made it head of the nde.
            }
            st.push(t); // every thing we have to push it.
        }
    }

    return 0;
}