#include <iostream>
#include <queue>

using namespace std;

template <typename T>
class Node
{
public:
  T data;
  Node<T> *next;
  Node(T data)
  {
    this->data = data;
    this->next = NULL;
  }
};

template <typename T>
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

BinaryTreeNode<int> *takeInput()
{
  int rootData;

  cin >> rootData;
  if (rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *currentNode = q.front();
    q.pop();
    int leftChild, rightChild;

    cin >> leftChild;
    if (leftChild != -1)
    {
      BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
      currentNode->left = leftNode;
      q.push(leftNode);
    }

    cin >> rightChild;
    if (rightChild != -1)
    {
      BinaryTreeNode<int> *rightNode =
          new BinaryTreeNode<int>(rightChild);
      currentNode->right = rightNode;
      q.push(rightNode);
    }
  }
  return root;
}
// passing pointer by reference
void help(BinaryTreeNode<int> *root, Node<int> *&head, Node<int> *&tail)
{

  if (root == NULL)
  {
    return;
  }

  help(root->left, head, tail);
  Node<int> *temp = new Node<int>(root->data);
  if (head == NULL)
  {
    head = tail = temp;
  }
  else
  {
    tail->next = temp;
    tail = tail->next;
  }
  help(root->right, head, tail);
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
  Node<int> *head = NULL, *tail = NULL;
  help(root, head, tail);
  return head;
}

int main()
{
  BinaryTreeNode<int> *root = takeInput();
  Node<int> *head = constructLinkedList(root);

  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}