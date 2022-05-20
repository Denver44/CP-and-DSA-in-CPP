#include <bits/stdc++.h>
using namespace std;

/*
1. By default Set stores data in increasing order,
2. We have used the greater function here to store data in decreasing order in the Set
*/

void basicOfSet()
{

    set<int, greater<int>> s;

    // insert elements in random order
    s.insert(40);
    s.insert(30);
    s.insert(60);
    s.insert(20);
    s.insert(50);
    s.insert(50); // only one 50 will be added to the set
    s.insert(10);

    // Traversing set using begin() and end()
    cout << "The set s is :";
    for (auto itr = s.begin(); itr != s.end(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;

    // Traversing set using rbegin() and rend()
    // set <int, greater <int> > :: iterator itr;
    cout << "The set s in reverse order is :";
    for (auto itr = s.rbegin(); itr != s.rend(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;
}

void FindAndCountInSet()
{
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);

    auto pos = s.find(3); // iterator pointing to position where 3 is

    if (pos != s.end())
        cout << "Element Found.\n";
    else
        cout << "Element not Found.\n";

    // prints the set elements
    cout << "The set elements after 3 are: ";
    for (auto it = pos; it != s.end(); it++)
        cout << *it << " ";

    // Check if 4 is present in the Set using count() function
    if (s.count(4) != 0)
        cout << "\n4 is present";
    else
        cout << "\n4 is not present";
}

void lowerAndUpperBoundInSet()
{

    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    auto itl = s.lower_bound(2);
    cout << "\nThe lower bound of key 2 is ";
    cout << (*itl) << endl;

    // when 3 is not present
    // points to next greater after 3
    itl = s.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*itl) << endl;

    // when 8 exceeds the max element in set
    itl = s.lower_bound(8);
    cout << "The lower bound of key 8 is ";
    cout << (*itl) << endl;

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    // points to next element after 2
    auto itu = s.upper_bound(2);
    cout << "\nThe upper bound of key 2 is ";
    cout << (*itu) << endl;

    // when 3 is not present
    // points to next greater after 3
    itu = s.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*itu) << endl;
}

void userDeinedDataTypeForSet()
{

    class Person
    {
    public:
        int age;
        string name;

        bool operator<(const Person &rhs) const
        {
            return this->age < rhs.age;
        }
    };
    set<Person> personDetail = {{50, "DENVER"}, {46, "TOKYO"}, {26, "RIO"}};
    for (const auto &members : personDetail)
        cout << members.age << " " << members.name << endl;
}

int main()
{
    basicOfSet();
    FindAndCountInSet();
    lowerAndUpperBoundInSet();
    userDeinedDataTypeForSet();
    return 0;
}