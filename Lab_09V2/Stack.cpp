#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(){}

Stack::~Stack(){}

void Stack::push(int value){
	insertAtFront(value);
}

int Stack::pop(){
	int n=first ->val;
	LinkedList::removeFromFront();
	return n;

	//int value = top();

//	bool success = removeFromFront();

//	return value;
}

int& Stack::top(){
return first ->val;
//return (*getFirst()).val;
}
