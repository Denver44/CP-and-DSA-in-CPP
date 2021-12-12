
#include <iostream>
using namespace std;

// Linked List node

class Node
{

public:
    int data;
    Node *next;
};
// Hash Table
class HashTable
{

public:
    //  As it will going to store address the node in its and here Ht is pointer which will going to store a array of pointer that why its **HT.
    Node **HT;
    HashTable();
    int hash(int key);
    void Insert(int key);
    int Search(int key);
    ~HashTable();
};

// Constructor
HashTable::HashTable()
{
    HT = new Node *[10];
    for (int i = 0; i < 10; i++)
    {
        HT[i] = nullptr;
    }
}

// It will give the key at which arrray index it should be inserted.
int HashTable::hash(int key)
{
    return key % 10;
}

void HashTable::Insert(int key)
{
    int hIdx = hash(key);
    Node *t = new Node;
    t->data = key;
    t->next = nullptr;
    // Case: No nodes in the linked list
    if (HT[hIdx] == nullptr)
    {
        HT[hIdx] = t;
    }
    else
    {
        Node *p = HT[hIdx];
        Node *q = HT[hIdx];
        // Traverse to find insert position
        while (p && p->data < key)
        {
            q = p;
            p = p->next;
        }
        // Case: insert position is first means latest key value is smaller than the inserted key at first position.
        if (q == HT[hIdx])
        {
            t->next = HT[hIdx];
            HT[hIdx] = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int HashTable::Search(int key)
{
    int hIdx = hash(key);
    Node *p = HT[hIdx];
    while (p)
    {
        if (p->data == key)
        {
            return p->data; // If founded then return the key value.
        }
        p = p->next;
    }
    return -1; // If not found then return -1;
}

// Destructor
HashTable::~HashTable()
{
    for (int i = 0; i < 10; i++)
    {
        Node *p = HT[i];
        while (HT[i])
        {
            HT[i] = HT[i]->next;
            delete p;
            p = HT[i];
        }
    }
    delete[] HT;
}

int main()
{
    int A[] = {16, 16, 12, 25, 39, 6, 122, 5, 68};
    int n = sizeof(A) / sizeof(A[0]);
    HashTable H;
    for (int i = 0; i < n; i++)
    {
        H.Insert(A[i]);
    }
    cout << "Successful Search" << endl;
    int key = 6;
    int value = H.Search(key);
    cout << "Key: " << key << ", Value: " << value << endl;
    cout << "Unsuccessful Search" << endl;
    key = 68;
    value = H.Search(key);
    cout << "Key: " << key << ", Value: " << value << endl;

    return 0;
}