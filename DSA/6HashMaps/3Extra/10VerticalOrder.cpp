#include <bits/stdc++.h>
using namespace std;

template <class T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

map<int, vector<int>> hashmap;
void Traversal(BinaryTreeNode<int> *root, int order)
{
    if (root == nullptr)
    {
        return;
    }
    hashmap[order].push_back(root->data);
    Traversal(root->left, order - 1);
    Traversal(root->right, order + 1);
}
void printBinaryTreeVerticalOrder(BinaryTreeNode<int> *root)
{

    Traversal(root, 0);

    for (auto i : hashmap)
    {
        for (auto e : i.second)
            cout << e << " ";
        cout << endl;
    }
}
