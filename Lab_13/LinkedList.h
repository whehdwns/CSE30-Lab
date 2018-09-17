#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdlib.h>
#include <iostream>

using namespace std;

// Representation of an element in the linked list
template <class T>
struct Node
{
    T val; // Value of the node
    Node<T> *next; // Pointer to the next node
};

// Class Declaration
template <class T>
class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THOSE FUNCTIONS FOR PART1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THOSE FUNCTIONS FOR PART2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

    // Private Functions/Variables
    private:
        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};

template <class T>
LinkedList<T>::LinkedList() // Constructor
{
    first=NULL;
    last=NULL;
}

template <class T>
LinkedList<T>::~LinkedList() // Destructor
{
    clear();
}
        
template <class T>
void LinkedList<T>::insertAtBack(T valueToInsert)
{
    // Check if this is the first node we are inserting
    if(first==NULL)
    {
        first = new Node<T>();
        first->val = valueToInsert;
        first->next=NULL;
        last = first;
    }
    else
    {
        last->next = new Node<T>();
        last->next->val = valueToInsert;
        last = last->next;
        last->next = NULL;
    }
}

template <class T>        
bool LinkedList<T>::removeFromBack()
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
        Node<T> *toDeletePrevious = first;
    
        while(toDeletePrevious->next!=last)
            toDeletePrevious=toDeletePrevious->next;

        free(last);
        last = toDeletePrevious;
        last->next = NULL;   

        return true;
    }
}

template <class T>
void LinkedList<T>::print()
{
    Node<T> *toPrint = first;
   
    while(toPrint!=NULL)
    {
        cout << toPrint->val;

        if(toPrint!=last)
            cout << ",";

        toPrint = toPrint->next;
    }
}

template <class T>
bool LinkedList<T>::isEmpty()
{
    if(first==NULL)
        return true;
    else
        return false;
}

template <class T>
int LinkedList<T>::size()
{
    int count = 0;
    Node<T> *current = first;

    while(current!=NULL)
    {
        count++;
        current=current->next;
    }

    return count;
}

template <class T>
void LinkedList<T>::clear()
{
    if(first!=NULL)
    {
        Node<T> *toDelete = first;
        Node<T> *nextToDelete = first->next;

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

template <class T>
void LinkedList<T>::insertAtFront(T valueToInsert)
{
    // Check if this is the first node we are inserting
    if(first==NULL)
    {
        first = new Node<T>();
        first->val = valueToInsert;
        first->next=NULL;
        last = first;
    }
    else
    {
        Node<T> *newStart = new Node<T>();
        newStart->next = first;
        first = newStart;
        first->val = valueToInsert;
    }
}

template <class T>
bool LinkedList<T>::removeFromFront()
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
        Node<T> *toDelete = first;

        first = toDelete->next;        
        free(toDelete);

        return true;
    }
}

#endif

