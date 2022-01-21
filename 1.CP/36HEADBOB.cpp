#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int length;
    string ges;
    int i = 0;
    int indian = 0;
    int frogeiner = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> length;
        cin >> ges;
        for (int i = 0; i < length; i++)
        {
            if (ges[i] == 'I')
            {
                indian++;
            }
            else if (ges[i] == 'Y')
            {
                frogeiner++;
            }
        }
        if (indian > 0)
        {
            cout << "INDIAN" << endl;
        }
        else if (frogeiner > 0)
        {
            cout << "NOT INDIAN" << endl;
        }
        else
        {
            cout << "NOT SURE" << endl;
        }
        indian =0;
        frogeiner =0;
    }

    return 0;
}