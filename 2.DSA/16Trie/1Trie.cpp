#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

class Node
{
public:
    char data;                            // the charcter
    bool terminal;                        // Terminal point of node.
    unordered_map<char, Node *> children; // children a Prefix and ist children.
    Node(char ch)
    {
        this->data = ch;
        this->terminal = false;
    }
};

class Trie
{
public:
    Node *root;
    int count;
    Trie()
    {
        this->root = new Node('\0');
        count = 0;
    }

    void Insert(string str)
    {
        Node *temp = root;

        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];

            if (temp->children.count(ch))
            {
                temp = temp->children[ch]; // if we finded that node then jump there
            }
            else
            {
                Node *n = new Node(ch); // Not founded so craete a new node
                temp->children[ch] = n; // Linking address to that charcter
                temp = n;               // Now jumping temp to n.
            }
        }
        temp->terminal = true;
        this->count++;
    }

    bool seach(string str)
    {
        Node *temp = root;

        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            if (temp->children.count(ch))
                temp = temp->children[ch];
            else
                return false;
        }
        return temp->terminal;
    }

    void helperDFS(Node *root, string str, string osf)
    {
        if (root == NULL)
            return;
        if (root->terminal)
            cout << str + osf << endl;

        for (auto ch : root->children)
        {
            helperDFS(ch.second, str, osf + ch.first);
        }
    }

    void prefix_range(string str)
    {
        Node *temp = this->root;

        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            if (temp->children.count(ch))
                temp = temp->children[ch];
            else
            {
                cout << "No word has prefix " << str << endl;
                return;
            }
        }
        helperDFS(temp, str, "");
    }
};
int main()
{
    Trie tr;
    tr.Insert("Eagle");
    tr.Insert("Earth");
    tr.Insert("Earphone");
    tr.Insert("Egg");
    tr.Insert("Easter");
    tr.Insert("Elephant");
    tr.Insert("Dubai");

    cout << tr.seach("Eagle") << endl;
    cout << tr.seach("Earth") << endl;
    cout << tr.seach("Elephanta") << endl;
    cout << tr.seach("Eassster") << endl;

    tr.prefix_range("E");
    cout << tr.count << endl;

    return 0;
}