#include <iostream>
#include "Queue_char.h"
//#include "LinkedList_char.h"
//#include "LinkedList_char.cpp"

using namespace std;

Queue_char::Queue_char()
{
}

Queue_char::~Queue_char(){

}

void Queue_char:: enqueue(char value){
	insertAtBack(value);	//In a queue, elements are added to the back
}

char Queue_char::dequeue(){
	char n = first -> val;
	try{
	throw 2;
	}
	catch(int error)
	{
	cout<<"exception"<<endl;
	}
	removeFromFront();			//To remove an element in a queue, element is remove form front
	return n;
}

char& Queue_char::front(){
	return first -> val;
	try{
	throw 2;
	}
	catch(int error){
	cout<<"exception"<<endl;
	}
}
