#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

class Admin
{
private:
    char name[20];
    char password[20];
    static int counter;

    Admin()
    {
        strcpy(name, "Admin");
        strcpy(password, "Admin");
    }

public:
    void display()
    {
        cout << "Name : -     " << name << endl;
        cout << "Password : - " << password << endl;
    }

    static Admin *getinstance()
    {
        if (counter == 0)
        {
            Admin *ptr = new Admin;
            counter++; // here only one object can be created as we have use counter for that .
            return (ptr);
        }
        else
        {
            return NULL;
        }
    }
};

int Admin::counter = 0;

int main()
{
    // 1. Admin ob1; // we canot create a object as the constrcutor is in private section
    // 2. Admin::display(); // without object we can't call the memeber function.
    // 3.  we can only use the class by a static function which help us to create a object and return a adrress of it and show that we can acceess the memmber function of this class through that pointer.

    Admin *ptr1; // here fist create a pointer to store the addrees returning from the getisntance func.
    ptr1 = Admin::getinstance();
    if (ptr1 != NULL)
    {
        ptr1->display();
    }

    Admin *ptr2;
    ptr2 = Admin::getinstance();
    if (ptr2 != NULL)
    {
        ptr2->display();
    }
    else
    {
        cout << "No more admin can be created" << endl;
    }

    return 0;
}