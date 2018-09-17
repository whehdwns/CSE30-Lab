#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

// Representation of an element in the linked list
struct Node
{
    int val; // Value of the node
    Node *next; // Pointer to the next node
};

class LinkedList
{
    protected:
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(int valueToInsert);
        bool removeFromBack();
        void insertAtFront(int valueToInsert);
        bool removeFromFront();

        int getElementAt(int index);

    public:
        void print();
        bool isEmpty();
        int size();
        void clear();


    // Private Functions/Variables
    protected:
        Node *first; // Pointer pointing to the begining of the list
        Node *last; // Pointer pointing to the end of the list
};

#endif
