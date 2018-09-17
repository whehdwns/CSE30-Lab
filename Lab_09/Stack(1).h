#ifndef STACK_H 
#define STACK_H

#include "LinkedList.h"

class Stack : public LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THOSE FUNCTIONS FOR PART1 */
        Stack(); // Constructor
        ~Stack(); // Destructor
        void push(int valueToInsert);
        bool pop();
        int top();

    // Private Functions/Variables
	private:
};

#endif
