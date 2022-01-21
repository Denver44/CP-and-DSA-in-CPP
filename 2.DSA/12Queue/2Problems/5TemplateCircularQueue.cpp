
#include <iostream>
using namespace std;
template <class T>
class queue
{
private:
    int MAX;
    T *arr;
    int rear;
    int front;
    int itemcount;

public:
    queue();
    bool isempty();
    bool isfull();
    void enqueue(T);
    T dequeue();
    int count();
    void display();
    void change(int, T);
    ~queue()
    {
        delete[] arr;
    }
};
template <class T>
queue<T>::queue() // first intialize it.
{
    cout << "Enter the Size of Circular Queue u Want" << endl;
    cin >> MAX;
    arr = new T[MAX];
    itemcount = 0;
    rear = -1;
    front = -1;
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = 0;
    }
}
template <class T>

bool queue<T>::isempty()
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
template <class T>

bool queue<T>::isfull()
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
template <class T>

void queue<T>::enqueue(T val)
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
        rear = (rear + 1) % MAX; //c change
        itemcount++;
    }

    arr[rear] = val;
}
template <class T>

T queue<T>::dequeue()
{
    T x = 0;
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
template <class T>

void queue<T>::change(int pos, T newval)
{

    arr[pos - 1] = newval;
}
template <class T>

int queue<T>::count()
{
    return itemcount;
}
template <class T>

void queue<T>::display()
{
    cout << "Items in the Queue: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    queue<char> q1;
    q1.enqueue('d');
    q1.enqueue('u');
    q1.enqueue('r');
    q1.enqueue('g');
    q1.enqueue('e');
    q1.enqueue('s');
    q1.enqueue('h');
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.enqueue('V');
    q1.enqueue('I');
    q1.enqueue('S');

    q1.display();
    cout << "Total number of element in the qeueue  " << q1.count();
    return 0;
}
