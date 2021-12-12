#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data, Node *lc, Node *rc)
    {
        this->data = data;
        this->left = lc;
        this->right = rc;
    }
};

Node *constructorofBinarySearchTree(vector<int> arr, int low, int high)
{
    if (low > high)
    {
        return nullptr;
    }

    int mid = (low + high) / 2;
    int data = arr[mid];

    Node *lc = constructorofBinarySearchTree(arr, low, mid - 1);
    Node *rc = constructorofBinarySearchTree(arr, mid + 1, high);
    Node *node = new Node(data, lc, rc);
    return node;
}

void display(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    string str = "";
    str += (root->left == nullptr) ? "." : to_string(root->left->data) + "";
    str += " <- " + to_string(root->data) + " -> ";
    str += (root->right == nullptr) ? "." : to_string(root->right->data) + "";
    cout << str << endl;
    display(root->left);
    display(root->right);
}
int Max(Node *root)
{

    if (root->right != nullptr)
        return Max(root->right);

    else
        return root->data;
}

Node *RemoveNode(Node *root, int data)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    if (data > root->data)
    {
        root->right = RemoveNode(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = RemoveNode(root->left, data);
    }
    else
    {
        if (root->left != nullptr && root->right != nullptr)
        {
            int lmax = Max(root->left);
            root->data = lmax;
            root->left = RemoveNode(root->left, lmax);
            return root;
        }
        else if (root->left != nullptr)
        {
            return root->left;
        }
        else if (root->right != nullptr)
        {
            return root->right;
        }
        else
        {
            // It has No child;
            return nullptr;
        }
    }

    return root;
}
int main()
{
    int n;
    vector<int> arr{12, 25, 37, 50, 62, 75, 87};
    Node *root = constructorofBinarySearchTree(arr, 0, arr.size() - 1);
    int data = 62;
    RemoveNode(root, data);
    display(root);
    return 0;
}