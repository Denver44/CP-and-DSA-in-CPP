#include <iostream>
#include <queue>
using namespace std;

/*
QUEUE IN STL
FIRST IN FIRST OUT
*/

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.pop();
    display(q1);

    cout << "Is Queue is empty " << q1.empty() << endl;
    cout << "Queue size " << q1.size() << endl;
    cout << "Front element " << q1.front() << endl;
    cout << "Back element " << q1.back() << endl;

    return 0;
}