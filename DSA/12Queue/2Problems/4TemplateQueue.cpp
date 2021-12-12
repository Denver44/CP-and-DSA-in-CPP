#include <iostream>
#include <string>
using namespace std;
const int MAX = 5;

template <class T>
class queue
{
private:
    T arr[MAX];
    int rear;
    int front;

public:
    queue();
    bool isempty();
    bool isfull();
    void enqueue(T);
    void dequeue();
    int count();
    void display();
    void change(int, T);
};
template <class T>
int queue<T>::count()
{
    return rear + 1;
}
template <class T>
queue<T>::queue()
{
    rear = -1;
    front = -1;
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = "0";
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
    if (rear == MAX - 1)
    {
        cout << "Queue is Full no new item can be added " << endl;
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
    }

    else
    {
        rear++;
    }

    arr[rear] = val;
}
template <class T>
void queue<T>::dequeue()
{

    if (isempty())
    {

        return;
    }
    else if (rear == front)
    {
        cout << "The Deleted item is " << arr[front] << endl;
        arr[front] = "0";
        rear = front = -1;
    }
    else
    {
        cout << "The Deleted item is " << arr[front] << endl;
        ;
        arr[front] = "0";
        front++;
    }
}
template <class T>
void queue<T>::change(int pos, T name)
{
    arr[pos - 1] = name;
}
template <class T>
void queue<T>::display()
{
    cout << "Elements of the queue are :-" << endl;
    if (front != -1)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }

    else
    {
        cout << "empty";
    }

    cout << endl;
}
int main()
{
    queue<string> q1;
    cout << q1.count() << endl;
    q1.enqueue("1");
    q1.enqueue("2");
    cout << q1.count() << endl;
    q1.change(1, "Avan");
    q1.dequeue();

    q1.display();

    return 0;
}
