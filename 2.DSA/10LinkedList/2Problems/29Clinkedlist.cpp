#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *head2;
struct Node *head3;

void create(int *arr, int size)
{
    head = new Node;
    head->data = arr[0];
    head->next = NULL;
    struct Node *last = new Node;
    last = head;

    for (int i = 1; i < size; i++)
    {
        struct Node *t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create2(int *arr, int size)
{
    head2 = new Node;
    head2->data = arr[0];
    head2->next = NULL;
    struct Node *last = new Node;
    last = head2;

    for (int i = 1; i < size; i++)
    {
        struct Node *t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create3(int *arr, int size)
{
    head3 = new Node;
    head3->data = arr[0];
    head3->next = NULL;
    struct Node *last = new Node;
    last = head3;

    for (int i = 1; i < size; i++)
    {
        struct Node *t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void Rdisplay(struct Node *p)
{

    if (p != NULL)
    {

        Rdisplay(p->next);
        cout << p->data << " ";
    }
}

int RsumOfAllData(struct Node *p)
{
    int sum = 0;
    if (p == NULL)
    {
        return 0;
    }
    else
    {

        return RsumOfAllData(p->next) + p->data;
    }
}
int Rcount(struct Node *p)
{

    if (p == NULL)
    {
        return 0;
    }
    else
    {

        return Rcount(p->next) + 1;
    }
}

int max(struct Node *p)
{
    int Max = INT32_MIN;

    while (p != NULL)
    {
        if (p->data > Max)
        {
            Max = p->data;
        }

        p = p->next;
    }
    return Max;
}
int min(struct Node *p)
{
    int min = INT32_MAX;

    while (p != NULL)
    {
        if (p->data < min)
        {
            min = p->data;
        }

        p = p->next;
    }
    return min;
}
struct Node *Search(struct Node *p, int k)
{

    while (p != NULL)
    {
        if (k == p->data)
        {
            return p;
        }

        p = p->next;
    }

    return NULL;
}
struct Node *RSearch(struct Node *p, int key)
{

    if (p == NULL)
    {
        return NULL;
    }

    if (key == p->data)
    {
        return p;
    }

    return RSearch(p->next, key);
}
struct Node *OptimizedSearch(struct Node *p, int k)
{

    struct Node *q = NULL;

    while (p != NULL)
    {
        if (k == p->data && p == head)
        {
            return p;
        }

        else if (k == p->data)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
        }
        q = p;
        p = p->next;
    }

    return NULL;
}
void Insert(struct Node *p, int pos, int value)
{
    struct Node *Temp = new Node;

    if (pos == 0)
    {
        Temp->data = value;
        Temp->next = head;
        head = Temp;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {

            Temp->data = value;
            Temp->next = p->next;
            p->next = Temp;
        }
    }
}
void InsertAtLast(struct Node *p, int value)
{
    struct Node *Temp = new Node;
    struct Node *q;
    while (p != NULL)
    {
        q = p;
        p = p->next;
    }
    Temp->data = value;
    Temp->next = q->next;
    q->next = Temp;
}
void InsetAtSort(struct Node *p, int value)
{
    struct Node *Temp = new Node;
    Temp->data = value;
    struct Node *q;
    if (head == NULL)
    {
        Temp->next = NULL;
        head = Temp;
    }

    else if (value < p->data)
    {
        Temp->next = head;
        head = Temp;
    }
    else
    {

        while (value > p->data)
        {
            q = p;
            p = p->next;
            if (p == NULL)
            {
                Temp->next = q->next;
                q->next = Temp;
                return;
            }
        }

        Temp->next = q->next;
        q->next = Temp;
    }
}

int Delete(int pos)
{
    int x = 0;
    struct Node *q;
    struct Node *p = head;
    if (pos < 1 || pos > Rcount(p) || head == NULL)
    {
        return -1;
    }
    if (pos == 1)
    {
        q = head;
        head = head->next;
        x = q->data;
        delete q;
        return x;
    }

    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

bool isSorted()
{
    int min = INT32_MIN;
    struct Node *p = head;

    if (head != NULL)
    {
        while (p != NULL)
        {
            if (p->data < min)
            {
                return 0;
            }
            min = p->data;
            p = p->next;
        }
        return 1;
    }
    return 0;
}
// This For the Sorted list.
void RemoveDuplicate()
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q != NULL)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
}

void ReverseNodeelement()
{
    int j = Rcount(head);
    j = j - 1;
    int i = 0;
    struct Node *p = head;
    struct Node *q = head;
    while (i < j)
    {
        int k = 0;

        while (k < j)
        {
            k++;
            q = q->next;
        }
        int temp = p->data;
        p->data = q->data;
        q->data = temp;
        i++;
        j--;
        p = p->next;
        q = head;
    }
}

void ReverseNode(struct Node *p)
{

    struct Node *q, *r;
    r = NULL;
    q = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}

void RecusionReverse(struct Node *q, struct Node *p)
{

    if (p != NULL)
    {
        RecusionReverse(p, p->next);
        p->next = q;
    }
    else
    {
        head = q;
    }
}

void Concat(struct Node *p, struct Node *q)
{

    head3 = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}

void Merge(struct Node *first, struct Node *second)
{

    struct Node *last;

    if (first->data < second->data)
    {
        head3 = last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        head3 = last = second;
        second = second->next;
        last->next = NULL;
    }

    while (first != NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }

    if (first != NULL)
    {

        while (first != NULL)
        {

            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
    }
    else
    {

        while (second != NULL)
        {

            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
}
bool isloop(struct Node *h)
{

    struct Node *p;
    struct Node *q;
    q = p = h;
    do
    {
        p = p->next;
        q = q->next;
        if (q == NULL)
            q = q;
        else
            q = q->next;

    } while (p && q && p != q);
    if (p == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Middleelment(struct Node *p)
{

    p = head;
    struct Node *q = head;

    while (q != NULL)
    {
        q = q->next;
        if (q)
        {
            q = q->next;
        }
        if (q)
        {
            p = p->next;
        }
    }
    cout << "Middle Element Data is " << p->data << endl;
}
int main()
{

    int A[] = {10, 30, 50, 70, 90, 2, 4, 6, 8, 100};
    create(A, 10);
    InsetAtSort(head,1);
    Middleelment(head);
    display(head);

    return 0;
}
