#include <iostream>
#include "LinkedList.h"
#include <stdlib.h>

LinkedList::LinkedList() // Constructor
{
    first=NULL;
    last=NULL;
}

LinkedList::~LinkedList() // Destructor
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
    // If the list is empty
    if(last==NULL)
    {
        return false;
    }
    // If there is only one node left
    else if(first==last)
    {
        free(first);
        first=NULL;
        last=NULL;
        return true;
    }
    else
    {
        // Navigate to second-to last node
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


void LinkedList::insertAtFront(int valueToInsert)
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
        Node *newStart = new Node();
        newStart->next = first;
        first = newStart;
        first->val = valueToInsert;
    }
}

bool LinkedList::removeFromFront()
{
    // If the list is empty
    if(first==NULL)
    {
        return false;
    }
    // If there is only one node left
    else if(first==last)
    {
        free(first);
        first=NULL;
        last=NULL;
        return true;
    }
    else
    {
        Node *toDelete = first;

        first = toDelete->next;
        free(toDelete);

        return true;
    }
}

int LinkedList::getElementAt(int index)
{
    if(!isEmpty())
    {
        cout << "::::" << first->val << endl;
        return first->val;
    }


    return -1;
}
