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
bool Find(Node *root, int data)
{
    if (root == nullptr)
    {
        return false;
    }

    if (data < root->data)
    {
        return Find(root->left, data); 
    }
    if (data > root->data)
    {
        return Find(root->right, data);
    }
    else
    {
        return true;
    }
}

void TargetSumPairinBST(Node *root, Node *node, int data)
{
    if (node == nullptr)
    {
        return;
    }

    // Inorder help us to find data in Increasing Order.
    TargetSumPairinBST(root, node->left, data);
    int comp = data - node->data;
    if (node->data < comp) // this help us n duplictes like 12 88 and 88 12.
    {
        if (Find(root, comp) == true)
            cout << node->data << " " << comp << endl;
    }
    TargetSumPairinBST(root, node->right, data);
}

//----------------------------- UISNG ETRA SPACE BUT LESSER TIME------------------------
void TargetSumPairinBST2(Node *root, vector<int> &arr)
{
    if (root == nullptr)
    {
        return;
    }
    TargetSumPairinBST2(root->left, arr);
    arr.push_back(root->data);
    TargetSumPairinBST2(root->right, arr);
}
int main()
{
    vector<int> arr2{12, 25, 30, 40, 50, 60, 62, 70, 75, 88};
    Node *root = constructorofBinarySearchTree(arr2, 0, arr2.size() - 1);
    int target = 100;
    vector<int> arr;
    TargetSumPairinBST2(root, arr);

    int a = 0;
    int b = arr.size() - 1;
    while (a < b)
    {
        if (arr[a] + arr[b] < target)
        {
            a++;
        }
        else if (arr[a] + arr[b] > target)
        {
            b--;
        }
        else
        {
            cout << arr[a] << " " << arr[b] << endl;
            a++;
            b--;
        }
    }

    return 0;
}
