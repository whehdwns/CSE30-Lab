
#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

Stack::Stack()
{

}
        
Stack::~Stack()
{

}
        
void Stack::push(int valueToInsert)
{
    insertAtFront(valueToInsert);
}
        
bool Stack::pop()
{
    return removeFromFront();
}
        
int Stack::top()
{
    if(!isEmpty())
        return (first->val);
    else
        return INT_MAX;
}



