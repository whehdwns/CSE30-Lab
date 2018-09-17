#include <iostream>
#include "LinkedList.h"
#include <stdlib.h>

LinkedList::LinkedList()  // Constructor
{
    first=NULL;
    last=NULL;
}

LinkedList::~LinkedList() //Destructor
{
    clear();
}
        
void LinkedList::insertAtBack(int valueToInsert)
{
    if(first==NULL) //if first node is inserting
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
   
    if(last==NULL)//empty list
    {
        return false;
    }
     else if(first==last)//one node left
    {
        free(first);
        first=NULL;
        last=NULL;
        return true;
    }
    else
    {
        Node *toDeletePrev = first;
        while(toDeletePrev->next!=last)
            toDeletePrev=toDeletePrev->next;

        last = toDeletePrev;
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

        toPrint =toPrint->next;
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
    Node *ini = first;

    while(ini!=NULL)
    {
        count++;
        ini=ini->next;
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
            toDelete = nextToDelete;
            nextToDelete = toDelete->next;
        }

    }

    first=NULL;
    last=NULL;
}
void LinkedList:: insertAtFront(int valueToInsert)
{
	if(first==NULL)
	{
		first=new Node();
		first->val = valueToInsert;
		first-> next = NULL;
		last=first;
	}
	else
	{
		Node *num= new Node();
		num-> next=first;
		first= num;
		first->val = valueToInsert;
	}
}
bool LinkedList::removeFromFront()
{
	if(first== NULL)//empty list
	{
		return false;
	}
	else if( first== last)// one node left
	{
		free(first);
		first=NULL;
		last=NULL;
		return true;
	}
	else
	{
		Node *toDelete=first;
		first= toDelete ->next;
		return true;
	}
}
