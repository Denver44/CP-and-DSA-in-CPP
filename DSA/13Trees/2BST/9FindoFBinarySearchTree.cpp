

#include <iostream>
#include <stack>
#include <vector>
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
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a != "n")
        {
            arr.push_back(stoi(a));
        }
        else
        {
            continue;
        }
    }

    sort(arr.begin(), arr.end());
    int data;
    cin >> data;
    Node *root = constructorofBinarySearchTree(arr, 0, arr.size() - 1);
    (Find(root, data) == 1) ? cout << "true" : cout << "false";
    return 0;
}