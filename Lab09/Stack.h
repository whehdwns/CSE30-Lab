#ifndef STACK_H 
#define STACK_H

#include "LinkedList.h"


class Stack : public LinkedList {

	public:
		Stack();
		~Stack();

		void push(int value);
		int  pop();
		int top(); 

 private:
};

#endif
