#include <iostream>
#include <cmath>
#include <climits>
#include <deque>
using namespace std;

/*

Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.
They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
Unlike vectors, contiguous storage allocation may not be guaranteed.
Double Ended Queues are basically an implementation of the stack adn queue.
Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
The functions for deque are same as vector, with an addition of push and pop operations for both front and back
*/
int main()
{
    deque<int> dq;

    dq.push_front(2);
    dq.push_front(4);
    dq.push_front(14);
    dq.push_front(24);
    dq.push_back(3);
    dq.push_back(5);
    dq.push_back(15);
    dq.push_back(25);

    dq.pop_back();
    dq.pop_front();
    for (auto itr : dq)
        cout << itr << endl;

    cout << "this is for max size " << dq.max_size() << endl;
    cout << "this is for current size " << dq.size() << endl;
    cout << "this is for at position 0 " << dq.at(0) << endl;
    cout << "this is for at position 1 " << dq.at(1) << endl;
    cout << "this is for at position 2 " << dq.at(2) << endl;
    cout << "this is for at front " << dq.front() << endl;
    cout << "this is for at back " << dq.back() << endl;

    deque<int> dq1 = {10, 20, 5, 30};

    auto it = dq1.begin();

    it = dq1.insert(it, 7);
    it = dq1.insert(it, 2, 3);
    it = dq1.erase(it + 1);

    cout << (*it) << endl;

    for (int i = 0; i < dq1.size(); i++)
        cout << dq1[i] << " ";

    return 0;
}
