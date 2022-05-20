#include <forward_list>
#include <iostream>
using namespace std;

// Forwad List is implemenation of Single linked list

void pintList(const forward_list<int> &list)
{
    cout << "The elements of forward list are : ";
    for (const int &a : list)
        cout << a << " ";
    cout << endl;
}
int main()
{
    forward_list<int> fList1, fList2;

    fList1.assign({1, 2, 3}); // Assigning values using assign()

    fList2.assign(5, 10); // Assigning repeating values using assign()  5 elements with value 10

    // Displaying forward lists
    pintList(fList1);
    pintList(fList2);

    // Initializing forward list
    forward_list<int> fList = {10, 20, 30, 40, 50};

    fList.push_front(60);    // Inserting value using push_front()
    fList.emplace_front(70); // Inserting value using emplace_front()
    pintList(fList);

    fList.pop_front(); // Deleting first value using pop_front()
    pintList(fList);

    forward_list<int>::iterator ptr; // Declaring a forward list iterator

    ptr = fList.insert_after(fList.begin(), {1, 2, 3}); // Inserting value using insert_after()  starts insertion from second position
    pintList(fList);

    // Inserting value using emplace_after()
    // inserts 2 after ptr
    ptr = fList.emplace_after(ptr, 40);
    pintList(fList);

    // Deleting value using erase.after Deleted 2
    // after ptr
    ptr = fList.erase_after(ptr);
    pintList(fList);

    fList.remove(40); // Removing element using remove()  Removes all occurrences of 40
    pintList(fList);

    fList.remove_if([](int x)
                    { return x > 20; });
    // Removing according to condition. Removes
    // elements greater than 20. Removes 25 and 30
    pintList(fList);

    // Shifting elements from first to second
    // forward list after 1st position
    fList2.splice_after(fList2.begin(), fList1);
    pintList(fList2);

    return 0;
}
