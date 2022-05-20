
#include <bits/stdc++.h>
using namespace std;
template <class T>
void linearsearch(T *, int, T);
template <class T>
void linearsearch(T *arr, int size, T wanted)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == wanted)
        {
            cout << "The position of the Element in Array " << i + 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No such element with value " << wanted << " present in the array " <<endl;
    }
}

int main()
{

    string arr[] = {"Durgesh", "priya", "pooja", "avan", "geeta", "arun", "vishal"};
    string name;
    cout << "Please enter the name u r looking in the array" << endl;
    cin >> name;
    linearsearch(arr, 9, name);

    int arr2[9] = {11, 8, 6, 7, 23, 69, 71, 17, 16};
    linearsearch(arr2, 9, 28);

    return 0;
}
