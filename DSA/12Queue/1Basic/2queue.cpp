#include <iostream>
using namespace std;
class queue
{
private:
    int arr[5];
    int front;
    int rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (rear == 4) // the put direct the size of array like size of arr -1. keep in mind this step.
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is already full" << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    int denqueue()
    {
        int x = 0;
        if ((isEmpty()))
        {
            cout << "Queue is under flow" << endl;
            return 0; // as we have int return type so we have to return any kind of value.
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = rear = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    int count()
    {
        return (rear - front) + 1;
        // cout << "Total number of elemnt in Queue is" << arr[rear] + 1 << endl;
    }
    void display()
    {
        cout << "All the value is Queue are:- " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};
int main()
{

    queue q1;
    int option, value;

    do
    {
        cout << "What operation do you want to perform? Selection the option number. Enter 0 to exit." << endl;
        cout << "1 . Enqueue()" << endl;
        cout << "2 . dequeue()" << endl;
        cout << "3 . isEmpty()" << endl;
        cout << "4 . isFull()" << endl;
        cout << "5 . count()" << endl;
        cout << "6 . display()" << endl;
        cout << "7 . Clear screen" << endl;
        cout << "0 . Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue Operation" << endl
                 << " Enter an  item to enqueue in the queue " << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Deueue Operation \nDequeud value : " << q1.denqueue() << endl;
            break;

        case 3:
            if (q1.isEmpty() == true)
            {
                cout << "Queue is a empty" << endl;
            }
            else
            {
                cout << "Queue is not empty" << endl;
            }

            break;

        case 4:
            if (q1.isFull() == true)
            {
                cout << "Queue is Full" << endl;
            }
            else
            {
                cout << "Queue is not Full" << endl;
            }
            break;
        case 5:
            cout << "Total number of elemnt in Queue is:- " << q1.count() << endl;
            break;

        case 6:
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter proper Option number " << endl;
            break;
        }
    } while (option != 0);

    return 0;
}