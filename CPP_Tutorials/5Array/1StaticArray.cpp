#include <iostream>
using namespace std;

int main()
{
    //  Method of array declartion and definition

    // This below method is used to assign the value of element at the time of declartion itself and in this way no need to declare the size the compiler will get the size Automatically.
    int marks[] = {23, 45, 56, 89};
    marks[2] = 455; // You can change or update the value of an array
    cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // Method of array declartion and definition

    int mathMarks[4]; // Another way to declare an array. Here we have a created an array of size 4. Which can store 4 integer value.
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // Method of array declartion and definition

    int rollNo[5]; // This way we used array. First  assign  an array and size u want then take a loop to get input from user amd then print out element one by one.
    cout << "Enter the roll no of 5 students\n";
    for (int i = 0; i < 5; i++)
        cin >> rollNo[i]; // here dont use & to assign the value like in c. no format specifier is used.
    for (int i = 0; i < 5; i++)
        cout << rollNo[i] << endl;

    return 0;
}
