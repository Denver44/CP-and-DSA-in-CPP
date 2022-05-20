#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void refernceConcept()
{

    int x = 10;
    int &y = x;
    cout << y << " ";
    x = x + 5;
    cout << y << " ";
    y = y + 5;
    cout << x << " ";
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void toSwap()
{
    int x = 10, y = 15;
    swap(x, y);
    cout << x << " " << y;
}

void printVector(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
}

int passingVectorAsRefernce()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    printVector(v);
    return 0;
}

int &fun()
{
    static int x = 10;
    return x;
}

void functionRefernceConcept()
{
    int &z = fun();
    cout << fun() << " ";
    z = 30;
    cout << fun();
}

int main()
{
    refernceConcept();
    toSwap();
    passingVectorAsRefernce();
    functionRefernceConcept();
    return 0;
}
