#include "LinkedList.h"
#include <iostream>
using namespace std;

//Constructor
LinkedList::LinkedList(){
	first = NULL;
	last = first;
}

//Destructor
LinkedList::~LinkedList(){

	if(!isEmpty())
		clear();

}

void LinkedList::insertAtBack(int valueToInsert){

	if(isEmpty()){

		first = new Node();
		last = first;
		(*first).val = valueToInsert;

	} else {

		(*last).next = new Node();
		last = (*last).next;
		(*last).val = valueToInsert;
		(*last).next = NULL;
	}

	return;
}

bool LinkedList::removeFromBack(){

	if(isEmpty())
		return false;

	Node* oldLast = last;
	if(size() == 1){

		first = NULL;
		last = NULL;

	} else {
		last = first;
		while((*last).next != oldLast)
			last = (*last).next;
		(*last).next = NULL;
	}
	
	delete oldLast;

	return true;
	
}

void LinkedList::print(){

	Node* i = first;

	while(i != NULL){
		cout << (*i).val;
		if(i != last)
			cout << ", ";
		i = (*i).next;
	}

}

bool LinkedList::isEmpty(){
	if(first == NULL)
		return true;
	else
		return false;
}

int LinkedList::size(){

	int s = 0;

	if(isEmpty())
		return s;

	Node* i = first;
	s++;
	while((*i).next != NULL){
		s++;
		i = (*i).next;
	}

	return s;
}

void LinkedList::clear(){
	bool success = true;
	while(!isEmpty() && success)
		success = removeFromBack();

	return;
}

void LinkedList::insertAtFront(int valueToInsert){

	Node* second = first;

	first = new Node();
	(*first).val = valueToInsert;

	if(second == NULL){
		last = first;
		(*first).next = NULL;
	} else
		(*first).next = second;	

	return;
}

bool LinkedList::removeFromFront(){
	if(isEmpty())
		return false;

	Node* oldFirst = first;
	if(size() == 1){
		first = NULL;
		last = NULL;
	} else
		first = (*first).next;

	delete oldFirst;

	return true;
}

Node* LinkedList::getFirst(){
	return first;
}
