#include <iostream>
#include <map>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
//  here in map the value has it index.
// and vector which has the value and help to give the index to the map.
class RandomizedSet
{
public:
    map<int, int> m1;
    vector<int> v1;
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (m1.find(val) != m1.end()) // .end() has some special value.  // as it != thats means there some val already present with that val.
        {
            return false;
        }
        v1.emplace_back(val);
        int s = (v1.size() - 1);
        m1[val] = (v1.size() - 1); // so the val get index here.
        return true;
    }

    bool remove(int val)
    {
        if (m1.find(val) == m1.end()) // means there is no element of that val
        {
            return false;
        }
        int last = v1.back(); // swapping done.
        m1[last] = m1[val];   // so now m1 last key get the index of the value index which going to be delete
        v1[m1[val]] = last;   // same here the value index which we are going to delte will now get the last value int vector.
        v1.pop_back();        // delete last
        m1.erase(val);        // delete the val

        return true;
    }

    int getRandom()
    {
        return v1[rand() % v1.size()];
    }
};

int main()
{

    // map<int, int> m1;
    // m1[1] = 10;
    // m1[2] = 20;
    // m1[5] = 30;
    // for (auto i : m1)
    // {
    //     if (i.second == 10)
    //     {
    //         cout << i.first;
    //     }
    // }

    // if (m1.find(5) != m1.end()) // means there is a key name 5 present.
    // {
    //     cout << "Founded";
    // cout << m1[2];
    // }
    // else
    // {
    //     cout << "no";
    // }

    return 0;
}