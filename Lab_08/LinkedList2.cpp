#include <iostream>
#include "LinkedList.h"
#include <stdlib.h>


LinkedList::LinkedList() 
{
    first=NULL;
    last=NULL;
}

LinkedList::~LinkedList() 
{
    clear();
}
        
void LinkedList::insertAtBack(int valueToInsert)
{
    if(first==NULL)
    {
        first = new Node();
        first->val = valueToInsert;
        first->next=NULL;
        last = first;
    }
    else
    {
        last->next = new Node();
        last->next->val = valueToInsert;
        last = last->next;
        last->next = NULL;
    }
}
        
bool LinkedList::removeFromBack()
{
   
    if(last==NULL)
    {
        return false;
    }
     else if(first==last)
    {
        free(first);
        first=NULL;
        last=NULL;
        return true;
    }
    else
    {
       
        Node *toDeletePrevious = first;
    
        while(toDeletePrevious->next!=last)
            toDeletePrevious=toDeletePrevious->next;

        free(last);
        last = toDeletePrevious;
        last->next = NULL;   

        return true;
    }
}

void LinkedList::print()
{
    Node *toPrint = first;
   
    while(toPrint!=NULL)
    {
        cout << toPrint->val;

        if(toPrint!=last)
            cout << ",";

        toPrint = toPrint->next;
    }
}

bool LinkedList::isEmpty()
{
    if(first==NULL)
        return true;
    else
        return false;
}

int LinkedList::size()
{
    int count = 0;
    Node *current = first;

    while(current!=NULL)
    {
        count++;
        current=current->next;
    }

    return count;
}

void LinkedList::clear()
{
    if(first!=NULL)
    {
        Node *toDelete = first;
        Node *nextToDelete = first->next;

        while(nextToDelete!=NULL)
        {
            free(toDelete);
            toDelete = nextToDelete;
            nextToDelete = toDelete->next;
        }

        free(toDelete);
    }

    first=NULL;
    last=NULL;
}

void LinkedList::insertAtFront(int valueToInser)
{


}

bool LinkedList:: removeFromFront()
{
}
