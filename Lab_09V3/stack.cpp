
#include <iostream>
#include "Stack.h"
//#include "LinkedList.h"
//#include "LinkedList.cpp"

using namespace std;

Stack::Stack()
{	
}

Stack::~Stack(){
	
}

void Stack:: push(int valuePush){
	//LinkedList::
	insertAtFront(valuePush);	
}

int Stack::pop(){
	int n = first -> val;
	//LinkedList::
	removeFromFront();
	return n;
}

 int& Stack::top(){
	return first -> val;
}
