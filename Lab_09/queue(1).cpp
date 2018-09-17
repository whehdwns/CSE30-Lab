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
    return removeFromFront();
}
        
int Queue::front()
{
    if(!isEmpty())
        return (first->val);
    else
        return INT_MAX;
}
