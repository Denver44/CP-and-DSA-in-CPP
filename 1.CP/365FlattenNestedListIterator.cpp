#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger
{
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};

class NestedIterator
{
public:
    queue<int> q;
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        create(nestedList);
    }
    void create(vector<NestedInteger> nestedList)
    {
        for (auto i : nestedList)
        {
            if (i.isInteger())
            {
                q.push(i.getInteger());
            }
            else
            {
                create(i.getList());
            }
        }
    }

    int next()
    {
        int ans = q.front();
        q.pop();
        return ans;
    }

    bool hasNext()
    {
        return !q.empty();
    }
};

int main()
{

    return 0;
}

// Its Easy but the oops concept is used here.