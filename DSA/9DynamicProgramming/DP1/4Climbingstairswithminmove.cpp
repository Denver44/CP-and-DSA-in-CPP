#include <iostream>
#include <vector>
using namespace std;
// Question
// 1. You are given a number n, representing the number of stairs in a staircase
// 2. You are on the 0th step and are required to climb to the top.
// 3. You are given n numbers, where ith element's value represents - till how far from the step you  could jump to in a single move.You can of - course fewer number of steps in the move.
// 4. You are required to print the number of minimum moves in which you can reach the top of staircase. Note->If there is no path through the staircase print null.
// Here Our Base case is That from n position we dont have to take any move to reach the destination n. So tab[n] = 0.
int main()
{
    int n;
    cin >> n; // number of staircase
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // As At begining we mark all the place with -1 move as in the begining we dont know how many jump we are going to take.
    vector<int> tab((n + 1), -1); // As Begining We dont know many Moves it going to take to reach Detsination.
    tab[n] = 0;                   // From Detsination we dont need to Move anywhere.

    for (int i = n - 1; i >= 0; i--)
    {
        // as one which has zero moves for that we can do anything.
        if (arr[i] > 0)
        {
            int mini = INT32_MAX;
            for (int j = 1; j <= arr[i] && i + j < tab.size(); j++)
                if (tab[i + j] != -1) // Because as we Know -1 that means from there we cannot reach to destination.
                    mini = min(mini, tab[i + j]);

            if (mini != INT32_MAX)
                tab[i] = mini + 1;
            else
                tab[i] == -1;
        }
    }

    cout << tab[0];

    return 0;
}