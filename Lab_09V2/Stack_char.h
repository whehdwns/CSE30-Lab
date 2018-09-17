#ifndef STACK_CHAR_H
#define STACK_CHAR_H
#include "LinkedList_char.h"

using namespace std;

class Stack_char : public LinkedList_char {

	public:
		Stack_char();
		~Stack_char();

		void push(char value);
		char pop();
		char& top();

};
#endif
