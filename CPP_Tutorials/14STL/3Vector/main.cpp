#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void vectorInitializer()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> v2(v1.begin(), v1.end()); // so all element of v1 from start to end are now in v2.
    vector<int> v3(5, 10);                // here this means the vector size is 5 but it all value is fll with 10 as default.

    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5); // this is also a way to initialize a vector all the array element are now in vector

    vector<float> v5;   // It will store float values
    vector<char> v6(4); // here this means we have declare the vector of the size of 4 which will store characters in it.
    vector<string> v7(3, "hello");
}
void printFromVector()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < v1.size(); i++)
        cout << " " << v1[i];
    cout << endl;

    for (auto const &el : v1)
        cout << " " << el;
    cout << endl;
}
void vectorFunctions()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    //  EMPLACE BACK
    // v1.emplace_back(1); //emplaceback is FASTER when we have to insert USER DEFINED DATATYPES in comparison of push back.

    //  INSERT
    auto itr = v1.insert(v1.begin(), 100); // insert function retrun a iterator
    v1.insert(itr, 1000);
    v1.insert(itr + 3, 3000); // so at 3rd position it will get inserted

    vector<int> toInsert{1, 2, 3};
    v1.insert(v1.begin() + 1, {-1, -2, -3});                     // insert this whole array after v1.begin()+1
    v1.insert(v1.begin() + 1, 3, 0);                             // insert 0 for three times after v1.begin()+1
    v1.insert(v1.begin() + 1, toInsert.begin(), toInsert.end()); // insert 0 for three times after v1.begin()+1
    v1.emplace(v1.begin() + 1, 2000);                            // ---------------------------IT WORKS SAME AS EMPLACE---------------------------
    for (auto el : v1)
        cout << " " << el;
    cout << endl;

    //  DELETING
    v1.pop_back();
    v1.erase(v1.end() - 5);
    cout << " " << v1.size();

    //  ACCESS
    v1 = {1, 2, 3, 4, 5, 6};
    cout << v1[2] << endl;
    cout << v1.at(7) << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    cout << *(v1.data() + 2) << endl; // v1.data returns a pointer so de derefence it. if it is out of range so blank will be printed and also program may be crash.
}
void moreVectorFunctions()
{
    //  VECTOR CAPACITY
    vector<int> v1;
    cout << v1.capacity() << endl; // as initially it will be zero as element start going to add it will keep on increasing

    //  VECTOR SIZE
    cout << v1.size();

    // VECTOR CLEAR
    v1.clear();

    // VECTOR EMPTY
    v1.empty(); // return 1 and 0.

    //  TO ADD ELEMENT IN THE VECTOR
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(100);
    v1.push_back(50);

    // TO REMOVE AN ELEMENT IN THE VECTOR
    v1.pop_back(); // this will always remove the last element added in the vector first.
}
void moreAdvancedVectorFunc()
{
    //  SORTING OF THE VECTOR
    // WE MUST INCLUDE THE ALGORITHM LIBRARY

    sort(v1.begin(), v1.end());

    //   RSERVE
    vector<int> v7;
    v7.reserve(32); // It will reserve the size at least 32
    for (int i = 0; i < 33; i++)
    {
        v7.push_back(i);
        cout << v7.capacity() << "  " << v7.size() << endl;
    }
}
void vectorCompareFunction()
{
    //  COMPARING VECTOR
    // In vector we can also compare the vector with conditional operators.
    vector<bool> x; // as we have to comapre the vector x that its all value are true
    for (int i = 0; i < 5; i++)
        x.push_back(true);

    vector<bool> y(5, true); // so here we make a vector of size of x and fill true int and then we comapre it.
    cout << (x == vector<bool>(5, true) ? "true" : "false") << endl;

    //  using == we can compare two vectors----------------
    cout << (x == y) << endl;
}
void vectorIterator()
{

    vector<int>::iterator itr1; // iterator declartion
    vector<int> v1{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};

    for (itr1 = v1.begin(); itr1 != v1.end(); itr1++)
        cout << *itr1 << " ";

    cout << endl;

    v3.erase(itr3);
}
void containerContainingContainer()
{
    vector<vector<int>> Tree;
    int edge, n1, n2;
    cin >> edge;
    Tree.resize(edge);

    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for (const auto &e1 : Tree)
    {
        for (const auto &e2 : e1)
        {
            cout << e2;
        }
        cout << endl;
    }
}
void algorithmOnVector()
{
    vector<int> v = {3, 0, -4, 7, 13, 8, 2};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << accumulate(v.begin(), v.end(), 0) << endl;

    int sum = 0;
    sum = accumulate(v.begin(), v.end(), sum);
    cout << sum << endl;
}

class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int xx, int yy)
    {
        x = xx;
        y = yy;
    }

    friend ostream &operator<<(ostream &, Point &);
};

ostream &operator<<(ostream &cout, Point &p)
{
    cout << "(" << p.x << " " << p.y << ")" << endl;
    return cout;
}

void VectorUserDefined()
{
    vector<Point> vp1;
    for (int i = 0; i < 5; i++)
    {
        vp1.push_back(Point(i + 1, i + 2));
    }

    for (auto num : vp1)
    {
        cout << num;
    }
    cout << endl;
    cout << "Front element :- " << vp1.front();
    cout << "Back element :- " << vp1.back();

    vector<Point>::reverse_iterator itr1;
    cout << "Reverse vector" << endl;
    for (itr1 = vp1.rbegin(); itr1 != vp1.rend(); itr1++)
    {

        cout << *itr1;
    }
    cout << "Size of vector :- " << vp1.size() << endl;
    vector<Point> v2;

    v2.assign(vp1.begin(), vp1.begin() + 3);
    cout << "Vector 2" << endl;
    for (auto num : v2)
    {
        cout << num;
    }
}

int main()
{
    vectorInitializer();
    printFromVector();
    vectorFunctions();
    moreVectorFunctions();
    moreAdvancedVectorFunc();
    vectorCompareFunction();
    vectorIterator();
    containerContainingContainer();
    algorithmOnVector();
    VectorUserDefined();
    return 0;
} /*
   VECTOR STL
 The most general purpose container is the vector
 Its a dynamic allocated array so no need to declare size.
 vector provide memory flexibility.
 */
