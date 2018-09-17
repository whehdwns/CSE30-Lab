#include <iostream>
#include "Stack_char.h"
#include "LinkedList_char.h"
using namespace std;

Stack_char::Stack_char(){}

Stack_char::~Stack_char(){}

void Stack_char::push(char value){
	LinkedList_char::insertAtFront(value);
//insertAtFront(value);
}

char Stack_char::pop(){

	char n= first->val;
	LinkedList_char::removeFromFront();
	return n;
//return removeFromFront();
	//char value = top();

	//bool success = removeFromFront();

	//return value;
}

char& Stack_char::top()
{
	return first ->val;
	//if(!isEmpty())
	//	return (first-> val);
//	else
//		return 0;

//return (*getFirst()).val;
}
