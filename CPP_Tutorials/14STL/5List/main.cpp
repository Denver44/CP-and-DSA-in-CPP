/*
LIST CLASS IN STL
List is a doubly linked list implementation
*/

#include <bits/stdc++.h>
using namespace std;

list<int> initializationElementList()
{
    list<int> l1 = {10, 20, 30};
    return ls;
}

void printElement()
{
    list<int> ls = initializationElementList();
    for (auto itr : ls)
        cout << itr << endl;
}

void listFunctions()
{

    list<int> ls = initializationElementList();
    ls.push_front(100); // it will added at front;
    ls.push_back(200);  // it will added at last;
    ls.pop_front();    // it remove from the front
    ls.pop_back();     // it remove from the back
    cout << "Element at front " << ls.front() << endl;
    cout << "Element at Back " << ls.back() << endl;
    cout << "Size of List : " << ls.size() << endl;
}

void iteratorInList()
{
    list<int> ls = initializationElementList();
    list<int>::iterator itr;
    itr = ls.begin();
    // advanced the iterator for next postion
    advance(itr, 3); // like this we can advanced iterators not by itr+3.
    advance(itr, 2);
}

void listFunctions()
{

    list<int> ls = initializationElementList();
    list<int>::iterator itr;
    itr = ls.begin();
    itr++;
    itr = ls.inset(itr, 15);
    ls.inset(itr, 2, 7);

    ls.erase(itr);
    cout << "After Erasing" << endl;
    for (auto itr : ls)
        cout << itr << endl;

    ls.reverse();
    cout << "After Reversing" << endl;
    for (auto itr : ls)
        cout << itr << endl;

    ls.sort();
    cout << "After Sorting" << endl;
    for (auto itr : ls)
        cout << itr << endl;

    ls.sort(greater<int>());
    cout << "After Sorting" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    list<int> l1 = {10, 20, 30};
    list<int> l2 = {5, 15, 25};

    l1.merge(l2);

    for (auto x : l1)
        cout << l1 << " ";
}

int main()
{
    initializationElementList();
    listFunctions();
    printElement();
    iteratorInList();
    listFunctions();
    return 0;
}