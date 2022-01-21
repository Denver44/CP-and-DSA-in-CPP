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

Node *Addnode(Node *root, int data)
{
    if (root == nullptr)
    {
        Node *n = new Node(data, nullptr, nullptr);
        return n;
    }

    if (data > root->data)
    {
        root->right = Addnode(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = Addnode(root->left, data);
    }
    else
    {
        // DUPLICTES ARE NOT ALLOWED
        // SO DO NOTHING.
    }

    return root;
}
int main()
{
    int n;
    // cin >> n;
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(25);
    arr.push_back(37);
    arr.push_back(50);
    arr.push_back(75);
    arr.push_back(62);
    arr.push_back(87);
    sort(arr.begin(), arr.end());
    Node *root = constructorofBinarySearchTree(arr, 0, arr.size() - 1);
    int data = 61;
    // cin >> data;
    Addnode(root, 30);
    Addnode(root, 40);
    Addnode(root, 61);
    display(root);
    return 0;
}