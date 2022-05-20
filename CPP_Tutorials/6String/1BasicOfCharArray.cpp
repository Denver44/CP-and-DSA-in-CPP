#include <iostream>
#include <cstring>
using namespace std;

int length(char input[])
{
    int count = 0;

    for (int i = 0; i < input[i] != '\0'; i++)
        count++;

    return count;
}

void basicConcept()
{
    char name[100];
    cout << "Enter Your Name : ";
    cin >> name;
    name[4] = 'x';
    name[3] = 'd';
    name[1] = '\0';
    cout << "Name : " << name << endl;
    cout << "Length : " << length(name) << endl;
    char input1[100] = "abcd";
}

void intermidateConcept()
{
    char name[100];

    cin.getline(input, 100);      // No we can take input of 100 length with witespaces.
    cin.getline(input, 100, 's'); // Here we have put a delimeter char s so as soon as first s comes in our input this getline function will ignore all the words and char after that.
    // If we have mentioned 100 it means it will take 99 char and put null at 100.
}

int main()
{
    basicConcept();
    return 0;
}
