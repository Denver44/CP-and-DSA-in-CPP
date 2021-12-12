

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

int Max(Node *root)
{
    // As we nedd the Max value from BST.
    // So the MAX values lies on right side of BST.
    // So we will traverse on right side only.
    // As we get the last node whose right is NULL.
    // The last node will be our Answer.
    if (root->right != nullptr)
    {
        return Max(root->right);
    }
    else
    { // retturn the data
        return root->data;
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
    cout << Max(root);
    return 0;
}