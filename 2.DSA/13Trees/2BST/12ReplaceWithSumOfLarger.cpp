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

void SUmofLargerWith(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    static int sum = 0;

    SUmofLargerWith(root->right);
    int originaldata = root->data;
    root->data = sum;
    sum += originaldata;

    SUmofLargerWith(root->left);
}
int main()
{
    vector<int> arr{12, 25, 37, 50, 62, 75, 87};
    Node *root = constructorofBinarySearchTree(arr, 0, arr.size() - 1);
    SUmofLargerWith(root);
    display(root);
    return 0;
}