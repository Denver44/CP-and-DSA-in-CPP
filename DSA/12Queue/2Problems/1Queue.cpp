#include <iostream>
using namespace std;
const int MAX = 5;
// AS in Queue the front will set it positon 0 and rear goes to max at time filling.
// At time of popping front goes towards rear. as when the last element get popped that means rear and front are same then set again them -1.
class queue
{
private:
    int arr[MAX];
    int rear;
    int front;

public:
    queue()
    {
        for (int i = 0; i < MAX; i++)
        {
            arr[i] = 0;
        }
        rear = front = -1;
    }

    bool isfull()
    {
        if (rear == MAX - 1)
            return true;
        else
            return false;
    }

    bool isempty()
    {
        if (rear == -1 && front == -1)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {

        if (isfull())
        {
            return;
        }
        else if (isempty()) // means both are at -1 then set 0 0
        {

            rear = front = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = val;
    }
    int dequeue()
    {
        int x = 0; // this variable help us to return the value to the main func.
        if (isempty())
        {
            return 0;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = rear = -1; // Now again set to empty.
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++; // dequee time fron will not move.
        }
        return x;
    }
    void change(int pos, int newval)
    {
        if (isempty())
        {
            cout << "U can chnage the value in empty queue" << endl;
            return;
        }
        else
        {
            arr[pos - 1] = newval;
        }
    }
    int count()
    {
        if (rear == -1 && front == -1)
        {
            return 0;
        }

        return (rear - front) + 1; // here rear - front + this formula is must.
    }
    void display()
    {
        if (front != -1)
        {

            cout << "Items in the Queue: " << endl;
            for (int i = 0; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    q1.change(4, 45);
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    q1.enqueue(60);
    q1.enqueue(70);
    q1.display();
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << "Total number of element in the qeueue  " << q1.count();
    q1.display();
    q1.isempty();
    return 0;
}
