#include <iostream>
#include "Queue.h"
#include "LinkedList.h"
using namespace std;

Queue::Queue()
{

}
        
Queue::~Queue()
{

}
        
void Queue::push(int valueToInsert)
{
    insertAtBack(valueToInsert);
}
        
bool Queue::pop()
{
    if(isEmpty())
        throw 1;

    return removeFromFront();
}
        
int Queue::front()
{
    if(isEmpty())
        throw 2;        

    return (first->val);
}
