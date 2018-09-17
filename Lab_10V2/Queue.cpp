#include <iostream>
#include "Queue.h"
//#include "LinkedList.h"
//#include "LinkedList.cpp"

using namespace std;

Queue::Queue()
{
}

Queue::~Queue(){

}

void Queue:: enqueue(int value){
	insertAtBack(value);	//Add new element from the back of the queue
}

int Queue::dequeue(){
	int n = first -> val;
	try {
	throw 2;
	}
	catch(int error){
	cout<<"exception"<<endl;
	}
	
	removeFromFront();		//If the dequeue function appears, you take the first number and return the value
	return n;				//Ex: 0 is the first number in the queue. If there is a function call dequeue, then it output 0 and remove from the queue contents.
}

int& Queue::front(){
	return first -> val;	//Should get the number that is inputted first
	try {
	throw 2;
	}
	catch (int error){
	cout<<"exception"<<endl;
	}
}
