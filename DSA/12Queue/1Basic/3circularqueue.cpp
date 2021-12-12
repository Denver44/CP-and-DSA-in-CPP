#include <iostream>
using namespace std;
class Circularqueue
{
private:
    int arr[5];
    int front;
    int rear;
    int itemcount; // change

public:
    Circularqueue()
    {
        itemcount = 0;
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
        if ((rear + 1) % 5 == front) // change
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
            rear = (rear + 1) % 5; // change
            arr[rear] = val;
        }
        itemcount++;
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
            itemcount--;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5; // chnage
            itemcount--;
            return x;
        }
    }
    int count()
    {
        return itemcount; // change.
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

    Circularqueue q1;
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



// C++ implementation of De-queue using circular
// array
#include<iostream>
using namespace std;

// Maximum size of array or Dequeue
#define MAX 100

// A structure to represent a Deque
class Deque
{
	int arr[MAX];
	int front;
	int rear;
	int size;
public :
	Deque(int size)
	{
		front = -1;
		rear = 0;
		this->size = size;
	}

	// Operations on Deque:
	void insertfront(int key);
	void insertrear(int key);
	void deletefront();
	void deleterear();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();
};

// Checks whether Deque is full or not.
bool Deque::isFull()
{
	return ((front == 0 && rear == size-1)||
			front == rear+1);
}

// Checks whether Deque is empty or not.
bool Deque::isEmpty ()
{
	return (front == -1);
}

// Inserts an element at front
void Deque::insertfront(int key)
{
	// check whether Deque if full or not
	if (isFull())
	{
		cout << "Overflow\n" << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}

	// front is at first position of queue
	else if (front == 0)
		front = size - 1 ;

	else // decrement front end by '1'
		front = front-1;

	// insert current element into Deque
	arr[front] = key ;
}

// function to inset element at rear end
// of Deque.
void Deque ::insertrear(int key)
{
	if (isFull())
	{
		cout << " Overflow\n " << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}

	// rear is at last position of queue
	else if (rear == size-1)
		rear = 0;

	// increment rear end by '1'
	else
		rear = rear+1;

	// insert current element into Deque
	arr[rear] = key ;
}

// Deletes element at front end of Deque
void Deque ::deletefront()
{
	// check whether Deque is empty or not
	if (isEmpty())
	{
		cout << "Queue Underflow\n" << endl;
		return ;
	}

	// Deque has only one element
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
		// back to initial position
		if (front == size -1)
			front = 0;

		else // increment front by '1' to remove current
			// front value from Deque
			front = front+1;
}

// Delete element at rear end of Deque
void Deque::deleterear()
{
	if (isEmpty())
	{
		cout << " Underflow\n" << endl ;
		return ;
	}

	// Deque has only one element
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
		rear = size-1;
	else
		rear = rear-1;
}

// Returns front element of Deque
int Deque::getFront()
{
	// check whether Deque is empty or not
	if (isEmpty())
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[front];
}

// function return rear element of Deque
int Deque::getRear()
{
	// check whether Deque is empty or not
	if(isEmpty() || rear < 0)
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[rear];
}

// Driver program to test above function
int main()
{
	Deque dq(5);
	cout << "Insert element at rear end : 5 \n";
	dq.insertrear(5);

	cout << "insert element at rear end : 10 \n";
	dq.insertrear(10);

	cout << "get rear element " << " "
		<< dq.getRear() << endl;

	dq.deleterear();
	cout << "After delete rear element new rear"
		<< " become " << dq.getRear() << endl;

	cout << "inserting element at front end \n";
	dq.insertfront(15);

	cout << "get front element " << " "
		<< dq.getFront() << endl;

	dq.deletefront();

	cout << "After delete front element new "
	<< "front become " << dq.getFront() << endl;
	return 0;
}


//

class Deque
{
    int arr[10];
    int front;
    int rear;
    int size;

public:
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }

    void insertFront(int key);
    void insertRear(int key);
    void deleteFront();
    void deleteRear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

bool Deque::isFull()
{
    return ((front == 0 && rear == size - 1) ||
            front == rear + 1);
}

bool Deque::isEmpty()
{
    return (front == -1);
}

void Deque::insertFront(int key)
{
    if (isFull())
    {
        cout << "-1" << endl;
        return;
    }

    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

    // front is at first position of queue
    else if (front == 0)
        front = size - 1;

    else // decrement front end by '1'
        front = front - 1;

    // insert current element into Deque
    arr[front] = key;
}

// function to inset element at rear end
// of Deque.
void Deque ::insertRear(int key)
{
    if (isFull())
    {
        cout << "-1" << endl;
        return;
    }

    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

    // rear is at last position of queue
    else if (rear == size - 1)
        rear = 0;

    // increment rear end by '1'
    else
        rear = rear + 1;

    // insert current element into Deque
    arr[rear] = key;
}

// Deletes element at front end of Deque
void Deque ::deleteFront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << "-1" << endl;
        return;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        // back to initial position
        if (front == size - 1)
        front = 0;

    else // increment front by '1' to remove current
        // front value from Deque
        front = front + 1;
}

// Delete element at rear end of Deque
void Deque::deleteRear()
{
    if (isEmpty())
    {
        cout << "-1" << endl;
        return;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size - 1;
    else
        rear = rear - 1;
}

// Returns front element of Deque
int Deque::getFront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        return -1;
    }
    return arr[front];
}

// function return rear element of Deque
int Deque::getRear()
{
    // check whether Deque is empty or not
    if (isEmpty() || rear < 0)
    {
        return -1;
    }
    return arr[rear];
}