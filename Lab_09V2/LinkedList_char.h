#ifndef LINKEDLIST_CHAR_H
#define LINKEDLIST_CHAR_H

using namespace std; 

struct Node 
{
    char val; // Value of the node
   Node *next; // Pointer to the next node
};

class LinkedList_char
{
    // Public Functions/Variables
    public:
        LinkedList_char(); // Constructor
        ~LinkedList_char(); // Destructor
        void insertAtBack(char valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

  
        void insertAtFront(char valueToInsert);
        bool removeFromFront();
		//Node* getFirst();

    // Private Functions/Variables
    private:
        Node *first;
        Node *last;
};
#endif
