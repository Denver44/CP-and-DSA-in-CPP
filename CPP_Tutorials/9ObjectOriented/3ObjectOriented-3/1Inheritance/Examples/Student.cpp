#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void getRollNo()
    {
        cout << "Enter Your Roll no" << endl;
        cin >> roll_no;
    }
    void showRollNo()
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class test : public virtual student // tht virtual helps us the compiler that the data coming form the grandparent is same on both the class.
{
protected:
    int test_marks1;
    int test_marks2;

public:
    void gettest()
    {
        cout << "Enter Your Test marks 1 " << endl;
        cin >> test_marks1;
        cout << "Enter Your Test marks 2 " << endl;
        cin >> test_marks2;
    }
    void showtest()
    {
        cout << "your test marks 1 is " << test_marks1 << endl;
        cout << "your test marks 2 is " << test_marks2 << endl;
    }
};

class Sports : public virtual student // the virtual helps us the compiler that the data coming form the grandparent is same on both the class.

{
protected:
    int Sports;

public:
    void getscore()
    {
        cout << "Enter Your  Sports " << endl;
        cin >> Sports;
    }
    void showscore()
    {
        cout << "your  score is " << Sports << endl;
    }
};

class total : public test, public Sports
{
public:
    void showtotal()
    {
        int t = test_marks1 + test_marks2 + Sports;
        showRollNo();
        showtest();
        showscore();
        cout << "your total score is " << t << endl;
    }
};
int main()
{

    total t;
    t.getRollNo();
    t.gettest();
    t.getscore();
    t.showtotal();
    return 0;
}