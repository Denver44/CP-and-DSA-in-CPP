#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        string finalstring = "1";

        if (n == 1)
        {
            return finalstring;
        }

        int countpointer = 0; // This actually helps us to count the elemnt repeatations
        int charpointer = 0;  // this will actually point that char and counterpointer will count the occurence of the pointed charpointer.
        string inprogress = "";

        while (n > 1)
        {
            while (countpointer < finalstring.length())
            {
                while (finalstring[charpointer] == finalstring[countpointer])
                {
                    countpointer++;
                }

                inprogress += to_string(countpointer - charpointer);
                inprogress += finalstring[charpointer];
                charpointer = countpointer;
            }

            finalstring = inprogress;
            inprogress = "";  // reset
            charpointer = 0;  // reset
            countpointer = 0; // reset
            n--;
        }

        return finalstring;
    }
};

int main()
{
    Solution s1;
    cout << s1.countAndSay(5);

    return 0;
}