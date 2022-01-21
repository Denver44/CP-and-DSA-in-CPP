#include <bits/stdc++.h>
using namespace std;

void printPermutations(vector<int> &boxes, int currentItems, int totitems)
{

    if (currentItems > totitems)
    {
        for (auto i : boxes)
        {
            cout << i;
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < boxes.size(); i++)
    {
        if (boxes[i] == 0)
        {
            boxes[i] = currentItems;
            printPermutations(boxes, currentItems + 1, totitems);
            boxes[i] = 0;
        }
    }
}
int main()
{
    int nboxes, ritems;
    cin >> nboxes >> ritems;
    vector<int> boxes(nboxes, 0);

    printPermutations(boxes, 1, ritems);

    return 0;
}