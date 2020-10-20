#include <iostream>
using namespace std;

// this was the simple math problem as we were give a source col or source row we have to reach the destination col and row in least time
//  if we  are in 1,1 and we have to go 2,1  it means we are in same y axis that means onky step means abs(destination_x - current_x)
// Vice - versa for the same x axis  abs(destination_y - current_y)
// if both the col and row are diff the eg 11 -> 33 then firt we got 11->13 so our box got the 13 and our rabbit 14 because we have to mainatian 1 unit of space to pul the box
// now we have to move  our rabbit 14 to 23 becuase we ae now in same col so to move the rabit take two steps then
// then simply now our box is 13 and destibation 33 means  (destination_y - current_y)  and Answer:- (destination_x - current_x) + 2 + (destination_y - current_y)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, dx, dy;
        cin >> x >> y >> dx >> dy;
        if (y == dy)
        {
            cout << abs(x - dx) << endl;
        }
        else if (x == dx)
        {
            cout << abs(y - dy) << endl;
        }
        else
        {

            cout << abs(x - dx) + abs(y - dy) + 2 << endl;
        }
    }

    return 0;
}