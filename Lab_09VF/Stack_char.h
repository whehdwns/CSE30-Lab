
#ifndef Stack_char_h 
#define Stack_char_h
#include "LinkedList_char.h"
using namespace std;

class Stack_char: public LinkedList_char{
	public:
		Stack_char();
		~Stack_char();
		void push (char valuePush);
		char pop();
		char& top();
};

#endif
