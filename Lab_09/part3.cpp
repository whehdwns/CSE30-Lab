#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue firstQueue;
    Queue secondQueue;

    // Check if the queues are empty
    if(firstQueue.isEmpty())
        cout << "The first queue is empty!" << endl;
    else
        cout << "The first queue is NOT empty..." << endl;

    if(secondQueue.isEmpty())
        cout << "The second queue is empty!" << endl;
    else
        cout << "The second queue is NOT empty..." << endl;


    // Print the size of the queues
    cout << "The size of the first queue is: " << firstQueue.size() << endl;
    cout << "The size of the second queue is: " << secondQueue.size() << endl;

    // Insert some values into the first queue
    firstQueue.push(15);
    firstQueue.push(2);
    firstQueue.push(-6);
    firstQueue.push(12);
    firstQueue.push(5);

    // Print the queues
    cout << "Here is the first queue: ["; firstQueue.print(); cout << "]" << endl;
    cout << "Here is the second queue: ["; secondQueue.print(); cout << "]" << endl;

    cout << "The front of the first queue is: " << firstQueue.front() << endl;
    cout << "The front of the second queue is: " << secondQueue.front() << endl;


    // Insert a value into the second queue
    secondQueue.push(25);

    // Print the queues
    cout << "Here is the first queue: ["; firstQueue.print(); cout << "]" << endl;
    cout << "Here is the second queue: ["; secondQueue.print(); cout << "]" << endl;

    cout << "The front of the first queue is: " << firstQueue.front() << endl;
    cout << "The front of the second queue is: " << secondQueue.front() << endl;

    // Clear the second queue and remove an item from the first queue
    secondQueue.clear();
    firstQueue.pop();

    // Print the queues
    cout << "Here is the first queue: ["; firstQueue.print(); cout << "]" << endl;
    cout << "Here is the second queue: ["; secondQueue.print(); cout << "]" << endl;

    cout << "The front of the first queue is: " << firstQueue.front() << endl;
    cout << "The front of the second queue is: " << secondQueue.front() << endl;


    // Clear the first queue and add five items into the second queue
    firstQueue.clear();
    secondQueue.push(-1);
    secondQueue.push(0);
    secondQueue.push(1);
    secondQueue.push(11);

    // Print the queues
    cout << "Here is the first queue: ["; firstQueue.print(); cout << "]" << endl;
    cout << "Here is the second queue: ["; secondQueue.print(); cout << "]" << endl;

    cout << "The front of the first queue is: " << firstQueue.front() << endl;
    cout << "The front of the second queue is: " << secondQueue.front() << endl;

    // Print the size of the queues
    cout << "The size of the first queue is: " << firstQueue.size() << endl;
    cout << "The size of the second queue is: " << secondQueue.size() << endl;

    // Check if the queues are empty
    if(firstQueue.isEmpty())
        cout << "The first queue is empty!" << endl;
    else
        cout << "The first queue is NOT empty..." << endl;

    if(secondQueue.isEmpty())
        cout << "The second queue is empty!" << endl;
    else
        cout << "The second queue is NOT empty..." << endl;

    // Remove all the elements of the second queue using a for loop
    for(int i=0; i<6; i++)
    {
        cout << "Here is the second queue: ["; secondQueue.print(); cout << "]" << endl;
        cout << "The front of the second queue is: " << secondQueue.front() << endl;


        if(secondQueue.pop())
            cout << "Successfully removed an item from the queue..." << endl;
        else
            cout << "COULD NOT remove an item from the queue!" << endl;
    }

    // Print the size of the queues
    cout << "The size of the first queue is: " << firstQueue.size() << endl;
    cout << "The size of the second queue is: " << secondQueue.size() << endl;

    // Check if the queues are empty
    if(firstQueue.isEmpty())
        cout << "The first queue is empty!" << endl;
    else
        cout << "The first queue is NOT empty..." << endl;

    if(secondQueue.isEmpty())
        cout << "The second queue is empty!" << endl;
    else
        cout << "The second queue is NOT empty..." << endl;


    return 1;
}

