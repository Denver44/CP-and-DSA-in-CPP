#include <iostream>
using namespace std;
class stack
{
private:
    int arr[5];
    int top;

public:
    stack() // default constructor. or here we are initliaze the stack.
    {
        top = -1; // as the stack is empty so the value will be -1 as indexing of array is alaway start form 0 so thats why we make top as -1.
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0; // for the first time the stack will be empty thats why we intializing it by zero
        }
    }
    bool isEmpty() // first we have to check it that it is empty or not. isEmpty() will check it that
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull() // then we check that stack is full or not. so isFull  will check it that it is full or not.
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val) // in push the return type can be void because we are not remvoing it we are inserting in it.
    {
        if (isFull())
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            top++;          // so for te first top will become zero and after that it will increse by one
            arr[top] = val; // here we have inserted the value at location where top value is
        }
    }
    int pop() // for the pop method the return type must be integer because pop remove it compelteely thats why we have to return it back.
    {
        if (isEmpty())
        {
            cout << "Stack is underflow" << endl;
            return 0;
        }
        else
        {                            // the order must be same otherwise we will get some different result.
            int popvalue = arr[top]; // here we are removing th top value.
            arr[top] = 0;            // here we are making the pop value to zero.
            top--;                   // then decrement it by -1.
            return popvalue;
        }
    }

    int count()
    {
        return (top + 1); // because the top value is intiliay is zero so thst why we added and simply return the top so that we can get the count.
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack is underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos]; // it will give the value at the psoition that we asked for it.
        }
    }
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value is changed at location" << pos << endl;
    }
    void display()
    {
        cout << "All the value in the stack are" << endl; //here the value must be in descending order as in the stack the first element is always in th last index position so thats why we arere printing it in decscending order,
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{

    stack s1; // here making one objet s1.
    int option, position, value;

    do
    {
        cout << "What operation do you want to perform? Selection the option number. Enter 0 to exit." << endl;
        cout << "1 . Push" << endl;
        cout << "2 . Pop" << endl;
        cout << "3 . isEmpty()" << endl;
        cout << "4 . isFull()" << endl;
        cout << "5 . peek()" << endl;
        cout << "6 . count()" << endl;
        cout << "7 . change()" << endl;
        cout << "8 . display()" << endl;
        cout << "9 . Clear screen" << endl;
        cout << "0 . Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an  item to push in the stack " << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop function is called = Pop value: " << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is not Empty" << endl;
            }
            break;

        case 4:
            if (s1.isFull())
            {
                cout << "Stack is Full" << endl;
            }
            else
            {
                cout << "Stack is not Full" << endl;
            }
            break;
        case 5:
            cout << "Enter the position of item you want to peek: " << endl;
            cin >> position;
            cout << "Peek Function is caled - Value at the position is = " << position << " is " << s1.peek(position) << endl;
            break;

        case 6:
            cout << " Total nmber of element in the stack is" << s1.count() << endl;
            break;
        case 7:
            cout << "Change Function is called " << endl;
            cout << "Enter position of item you want to change : ";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change : ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Displat function is called " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter proper Option number " << endl;
        }
    } while (option != 0); // as the value will go to zero the loop will be finsish.

    return 0;
}