#ifndef QUEUE_H 
#define QUEUE_H

#include "LinkedList.h"

class Queue : public LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THOSE FUNCTIONS FOR PART1 */
        Queue(); // Constructor
        ~Queue(); // Destructor
        void push(int valueToInsert);
        bool pop();
        int front();

    // Private Functions/Variables
    private:
};

#endif
