#include <iostream>
#include <vector>
using namespace std;

void basicOFIterator(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    cout << (*it) << " ";
    it++;
    cout << (*it) << " ";
    it = v.end();
    --it;
    cout << (*it) << " ";
}
void intermediateOFIterator(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    cout << (*it) << " ";
    it = next(it); // it will return a new iterator by 1. if we dont pass any args
    cout << (*it) << " ";
    it = next(it, 2);
    cout << (*it) << " ";
    it = v.end();
    it = prev(it);
    cout << (*it) << " ";
}
void advanceOFIterator(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    cout << (*it) << " ";
    advance(it, 2); // It will not return any Interator it will change in the existing iterator.
    cout << (*it) << " ";
    advance(it, -2);
    cout << (*it) << " ";
}

int main()
{
    vector<int> v = {10, 20, 30, 40};
    basicOFIterator(v);
    intermediateOFIterator(v);
    advanceOFIterator(v);
    return 0;
}
