#ifndef STACK_CHAR_H
#define STACK_CHAR_H

#include "LinkedList_char.h"


class Stack_char : public LinkedList_char {

	public:
		Stack_char();
		~Stack_char();

		void push(char value);
		char pop();
		char& top();
	//private:

};

#endif
