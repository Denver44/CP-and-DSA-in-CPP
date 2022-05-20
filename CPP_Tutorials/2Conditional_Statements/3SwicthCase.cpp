#include <iostream>
using namespace std;
int main()
{

    int age = 18;
    switch (age) // here in switch we can use variable whose value is a integer or character not a float.
    {
    case 18:
        cout << "you are 18" << endl;
        break; // break helps us to get outside the loop as our condition executed it will break tye pattern.

    case 22:
        cout << "you are 22" << endl;
        break;
    case 3:
        cout << "you are 3" << endl;
        break;
    case 4:
        cout << "you are 4" << endl;
        break;

    default: // its is optional
        cout << "you are not special" << endl;
        break;
    }

    cout << "done bro"; //here as this outside the switch case statemnet it will execute after the condition is true or false. this help us to show the use of break statement.

    return 0;
}

/*
1. Break: This keyword is used to stop the execution inside a switch block. It helps to terminate the switch block and break out of it.
2. Default: This keyword is used to specify the set of statements to execute if there is no case match.
3. Note: Sometimes when default is not placed at the end of switch case program, we should use break statement with the default case.
4. Duplicate case values are not allowed.
5. The default statement is optional. Even if the switch case statement do not have a default statement, it would run without any problem.
6. The break statement is used inside the switch to terminate a statement sequence. When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement.
7. The break statement is optional. If omitted, execution will continue on into the next case. The flow of control will fall through to subsequent cases until a break is reached.
8. Nesting of switch statements is allowed, which means you can have switch statements inside another switch. However nested switch statements should be avoided as it makes the program more complex and less readable.
9. Switch statements are limited to integer values only in the check condition.
*/