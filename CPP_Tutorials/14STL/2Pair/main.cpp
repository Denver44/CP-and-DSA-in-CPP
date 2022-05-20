#include <iostream>
#include <utility>
using namespace std;
/*
The pair is also standard template class and for this there is no need to add any library for the pair stl.
syntax : pair<datatype1,datatype2> object name.
make_pair(val1,val2) is now redundant use {} or constructor to create a pair
pair.first and  pair.second is used to access the value of a pair.
we can also the comapre the two pair by comapre assignment operators and by default it will compare the first operator and for == it will check for first and then second
*/

class student
{
private:
    string name;
    int age;

public:
    void setdata(int age, string name)
    {
        this->name = name;
        this->age = age;
    }
    void printdata()
    {
        cout << name << " " << age << endl;
    }
};

void pairOfOwnClass();
void pairOfArray();
void pairOfIntAndString();
void pairOFComparssion();

int main()
{
    pairOfArray();
    pairOfOwnClass();
    pairOfIntAndString();
    pairOFComparssion();

    return 0;
}

void pairOfArray()
{
    pair<int, int> pairArr[3];

    for (int i = 0; i < 3; i++)
        cin >> pairArr[i].first >> pairArr[i].second;

    for (int i = 0; i < 3; i++)
        cout << pairArr[i].first << " " << pairArr[i].second << endl;
}
void pairOfOwnClass()
{
    student s1, s2;
    pair<int, student> pair1;

    s1.setdata(20, "Tokyo");
    pair1 = make_pair(1, s1);
}

void pairOfIntAndString()
{
    pair<int, string> pairStudentOne(4, "professor");
    pair<int, string> pairStudentTwo(4, "professor");
    cout << pairStudentOne.first << " " << pairStudentOne.second << endl;
    cout << pairStudentOne == pairStudentTwo << endl;
}

void pairOFComparssion()
{
    int a[] = {3, 1, 2};
    char b[] = {'G', 'E', 'K'};
    vector<pair<int, char>> arr;
    for (int i = 0; i < 3; i++)
        arr.push_back({a[i], b[i]});

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 3; i++)
        cout << arr[i].first << " " << arr[i].second << endl;
}