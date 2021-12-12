#include <iostream>
using namespace std;
void abbr(string ques, int count, string ans)
{
    if (ques.length() == 0)
    {

        if (count == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans << count << endl;
        }

        return;
    }

    char c = ques[0];
    string roq = ques.substr(1);
    if (count > 0)
    {
        abbr(roq, 0, ans + to_string(count) + c);
    }
    else
    {
        abbr(roq, 0, ans + c);
    }

    abbr(roq, count + 1, ans);
}

int main()
{
    abbr("pep", 0, "");

    return 0;
}