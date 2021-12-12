#include <iostream>
using namespace std;
const int MAX = 5;
class queue
{
private:
    int arr[MAX];
    int rear;
    int front;
    int itemcount;

public:
    queue();
    bool isempty();
    bool isfull();
    void enqueue(int);
    int dequeue();
    int count();
    void display();
    void change(int, int);
};
queue ::queue() // first intialize it.
{
    itemcount = 0;
    rear = -1;
    front = -1;
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = 0;
    }
}
bool queue ::isempty()
{
    if (rear == -1 && front == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool queue ::isfull()
{

    if ((rear + 1) % MAX == front) // 1st change
    {
        cout << "Already fulled:-" << endl;
        return true;
    }
    else
    {
        return false;
    }
}
void queue ::enqueue(int val)
{

    if (isfull())
    {
        return;
    }
    else if (isempty())
    {
        rear = front = 0;
        itemcount++;
    }
    else
    {
        rear = (rear + 1) % MAX; // 2nd change
        itemcount++;
    }

    arr[rear] = val;
}
int queue ::dequeue()
{
    int x = 0;
    if (isempty())
    {
        return 0;
    }
    else if (front == rear)
    {
        x = arr[front];
        arr[front] = 0;
        front = rear = -1;
        itemcount--;
    }
    else
    {
        x = arr[front];
        arr[front] = 0;
        front = (front + 1) % MAX; // 3rd change
        itemcount--;
    }
    return x;
}
void queue ::change(int pos, int newval)
{

    arr[pos - 1] = newval;
}
int queue::count()
{
    return itemcount;
}
void queue ::display()
{
    cout << "Items in the Queue: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    q1.dequeue();
    q1.enqueue(10);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    cout << "Total number of element in the qeueue  " << q1.count();
    return 0;
}
