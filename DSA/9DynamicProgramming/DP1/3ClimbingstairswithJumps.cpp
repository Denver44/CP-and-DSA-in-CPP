#include <iostream>
#include <vector>
using namespace std;
// Question
// 1. You are given a number n, representing the number of stairs in a staircase .
// 2. You are on the 0th step and are required to climb to the top .
// 3. You are given n numbers, where ith element's value represents - till how far from the step you  could jump to in a single move.You can of course jump fewer number of steps in the move.
// 4. You are required to print the number of different paths via which you can climb to the top.
// Identify the Smaller Problem And travel and Solve
// Here from n there is we dont have to go anywhere so there is one answer stand there so u will get 1.
int main()
{
    int n;
    cin >> n; // the stair which we have to reach
    int *arr = new int[n];
    // In this array we store the number of Jumps we can take from the every stair we can take less step also that mention.
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> tab(n + 1, 0); // Our Tabualtion
    tab[n] = 1;                // Base Conditon.

    for (int i = n - 1; i >= 0; i--)
        for (int j = 1; j <= arr[i]; j++)
            if (i + j <= n) // the Jump from stair doesnt go beyond the Boundary.
                tab[i] += tab[i + j];
    cout << tab[0] << endl;

    return 0;
}