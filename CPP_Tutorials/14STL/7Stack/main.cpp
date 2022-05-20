#include <iostream>
#include <stack>
using namespace std;

/*
STACK IN STL
LAST IN FIRST OUT
*/

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    for (int i = 1; i <= 10; i++)
        s1.push(i * 10);

    cout << "Is stack is empty " << s1.empty() << endl;
    cout << "Stack size " << s1.size() << endl;
    cout << "Front element " << s1.top() << endl;

    display(s1);

    return 0;
}