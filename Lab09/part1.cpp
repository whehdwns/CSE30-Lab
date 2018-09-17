#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack firstStack;
    Stack secondStack;

    // Check if the stacks are empty
    if(firstStack.isEmpty())
        cout << "The first stack is empty!" << endl;
    else
        cout << "The first stack is NOT empty..." << endl;

    if(secondStack.isEmpty())
        cout << "The second stack is empty!" << endl;
    else
        cout << "The second stack is NOT empty..." << endl;


    // Print the size of the stacks
    cout << "The size of the first stack is: " << firstStack.size() << endl;
    cout << "The size of the second stack is: " << secondStack.size() << endl;

    // Insert some values into the first stack
    firstStack.push(1);
    firstStack.push(2);
    firstStack.push(3);
    firstStack.push(4);
    firstStack.push(5);

    // Print the stacks
    cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
    cout << "Here is the second stack: ["; secondStack.print(); cout << "]" << endl;

    cout << "The top of the first stack is: " << firstStack.top() << endl;
    cout << "The top of the second stack is: " << secondStack.top() << endl;


    // Insert a value into the second stack
    secondStack.push(25);

    // Print the stacks
    cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
    cout << "Here is the second stack: ["; secondStack.print(); cout << "]" << endl;

    cout << "The top of the first stack is: " << firstStack.top() << endl;
    cout << "The top of the second stack is: " << secondStack.top() << endl;

    // Clear the second stack and remove an item from the first stack
    secondStack.clear();
    firstStack.pop();

    // Print the stacks
    cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
    cout << "Here is the second stack: ["; secondStack.print(); cout << "]" << endl;

    cout << "The top of the first stack is: " << firstStack.top() << endl;
    cout << "The top of the second stack is: " << secondStack.top() << endl;


    // Clear the first stack and add five items into the second stack
    firstStack.clear();
    secondStack.push(-5);
    secondStack.push(0);
    secondStack.push(5);
    secondStack.push(10);

    // Print the stacks
    cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
    cout << "Here is the second stack: ["; secondStack.print(); cout << "]" << endl;

    cout << "The top of the first stack is: " << firstStack.top() << endl;
    cout << "The top of the second stack is: " << secondStack.top() << endl;

    // Print the size of the stacks
    cout << "The size of the first stack is: " << firstStack.size() << endl;
    cout << "The size of the second stack is: " << secondStack.size() << endl;

    // Check if the stacks are empty
    if(firstStack.isEmpty())
        cout << "The first stack is empty!" << endl;
    else
        cout << "The first stack is NOT empty..." << endl;

    if(secondStack.isEmpty())
        cout << "The second stack is empty!" << endl;
    else
        cout << "The second stack is NOT empty..." << endl;

    // Remove all the elements of the second stack using a for loop
    for(int i=0; i<6; i++)
    {
        cout << "Here is the second stack: ["; secondStack.print(); cout << "]" << endl;
        cout << "The top of the second stack is: " << secondStack.top() << endl;


        if(secondStack.pop())
            cout << "Successfully removed an item from the stack..." << endl;
        else
            cout << "COULD NOT remove an item from the stack!" << endl;
    }

    // Print the size of the stacks
    cout << "The size of the first stack is: " << firstStack.size() << endl;
    cout << "The size of the second stack is: " << secondStack.size() << endl;

    // Check if the stacks are empty
    if(firstStack.isEmpty())
        cout << "The first stack is empty!" << endl;
    else
        cout << "The first stack is NOT empty..." << endl;

    if(secondStack.isEmpty())
        cout << "The second stack is empty!" << endl;
    else
        cout << "The second stack is NOT empty..." << endl;


    return 1;
}

