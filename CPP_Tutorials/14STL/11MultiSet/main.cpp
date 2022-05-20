#include <bits/stdc++.h>
#include <set>
#include <functional>
#include <string>
using namespace std;

/* NOTES:
1. MultiSet is an Associative Container that contains a sorted set of duplicate objects of type Key.
2. It is usually implemented using Red-Black Tree or Self Balancing Binary tree.
3. Insertion, Removal, Search have logarithmic complexity.
4. If we want to store user defined data type in multiset then we will have to provide compare function so that multiset can store them in sorted order.
5. We can pass the order of sorting while constructing set object.
multiset is similar to set except it can have multiple key.
*/

void basicOfMultiSet()
{
    // by default less;
    multiset<int> setInc = {1, 2, 2, 8, 8, 5, 6, 7, 9};
    multiset<int, greater<>> setDec = {1, 2, 2, 8, 8, 5, 6, 7, 9};
    setInc.insert(20);
    setDec.insert(20);

    for (const auto &e : setDec)
    {
        cout << e << " ";
    }
    for (const auto &e : setInc)
    {
        cout << e << " ";
    }
}
void basicOfMultiSetFunction()
{

    multiset<int> m1;
    m1.insert(30);
    m1.insert(10);
    m1.insert(1000);
    m1.insert(20);
    m1.insert(305);
    cout << "first element " << *(m1.begin()) << endl;
    cout << "using next for derefencing " << *next(m1.begin()) << endl;
    cout << "using prev for derefencing " << *prev(m1.end()) << endl;
    cout << "using  for derefencing " << *(m1.end()) << endl; // Garabge.

    for (auto i : m1)
    {
        cout << i << endl;
    }
}

void userDefineMultiSet()
{
    class person
    {
    public:
        int age;
        string name;
        bool operator<(const person &rhs) const
        {

            return age < rhs.age;
        }
        bool operator>(const person &rhs) const
        {

            return age > rhs.age;
        }
    };
    multiset<person, greater<>> p1 = {{20, "Denver"}, {23, "Tokyo"}, {3, "Rio"}, {3, "Rio"}};
    for (const auto &e : p1)
    {
        cout << e.age << " " << e.name;
    }
}

void eraseAndCountInSet()
{
    // Create a multiset
    multiset<int> s = {15, 10, 15, 11, 10, 18, 18, 20, 20};

    // Use count() to count number of occurrences of 15
    cout << "15 occurs " << s.count(15)
         << " times in container.\n";

    // Erase all occurrences of 15
    s.erase(15);

    // Print again count of 15
    cout << "15 occurs " << s.count(15)
         << " times in container.\n";

    // Erase a range using erase() function
    s.erase(s.begin(), s.end());

    // Print Size of multiset
    cout << "Size of multiset: " << s.size();
}

void UpperBoundInMultiSet()
{

    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(4);

    cout << "The multiset elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    auto it = s.lower_bound(2);
    cout << "\nThe lower bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it) << endl;

    // when 5 exceeds the max element in multiset
    it = s.lower_bound(7);
    cout << "The lower bound of key 7 is ";
    cout << (*it) << endl;
}

void lowerBoundInMultiSet()
{

    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    cout << "The multiset elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 3 is present
    auto it = s.upper_bound(3);
    cout << "\nThe upper bound of key 3 is ";
    cout << (*it) << endl;

    // when 2 is not present points to next greater after 2
    it = s.upper_bound(2);
    cout << "The upper bound of key 2 is ";
    cout << (*it) << endl;

    // when 10 exceeds the max element in multiset
    it = s.upper_bound(10);
    cout << "The upper bound of key 10 is ";
    cout << (*it) << endl;
}

void equalRangeInMultiSet()
{
    multiset<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(3);

    // prints the multiset elements
    cout << "The multiset elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // Function returns lower bound and upper bound
    auto it = s.equal_range(3);
    cout << "\nThe lower bound of 3 is " << *it.first;
    cout << "\nThe upper bound of 3 is " << *it.second;

    // Function returns the last element
    it = s.equal_range(10);
    cout << "\nThe lower bound of 10 is " << *it.first;
    cout << "\nThe upper bound of 10 is " << *it.second;

    // Function returns the range where the
    // element greater than 0 lies
    it = s.equal_range(0);
    cout << "\nThe lower bound of 0 is " << *it.first;
    cout << "\nThe upper bound of 0 is " << *it.second;
}

int main()
{
    basicOfMultiSet();
    basicOfMultiSetFunction();
    userDefineMultiSet();
    eraseAndCountInSet();
    UpperBoundInMultiSet();
    lowerBoundInMultiSet();
    equalRangeInMultiSet();
    return 0;
}