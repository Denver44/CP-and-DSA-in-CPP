#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char id;
    for (int i = 0; i < t; i++)
    {
        cin >> id;
        if (id == 'B' || id == 'b')
        {
            cout << "BattleShip" << endl;
        }
       else if (id == 'C' || id == 'c')
        {
            cout << "Cruiser" << endl;
        }
      else  if (id == 'D' || id == 'd')
        {
            cout << "Destroyer" << endl;
        }
        else
        {
            cout << "Frigate" << endl;
        }
    }

    return 0;
}
