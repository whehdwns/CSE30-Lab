#include "LinkedList_char.h"
#include <iostream>
using namespace std;

//Constructor
LinkedList_char::LinkedList_char(){
	first = NULL;
	last = NULL;
}

//Destructor
LinkedList_char::~LinkedList_char(){

//	if(!isEmpty())
		clear();

}

void LinkedList_char::insertAtBack(char valueToInsert){

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

bool LinkedList_char::removeFromBack(){

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

void LinkedList_char::print(){

	Node* i = first;

	while(i != NULL){
		cout << (*i).val;
		if(i != last)
			cout << ", ";
		i = (*i).next;
	}

}

bool LinkedList_char::isEmpty(){
	if(first == NULL)
		return true;
	else
		return false;
}

int LinkedList_char::size(){

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

void LinkedList_char::clear(){
	bool success = true;
	while(!isEmpty() && success)
		success = removeFromBack();

	return;
}

void LinkedList_char::insertAtFront(char valueToInsert){

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

bool LinkedList_char::removeFromFront(){
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

//Node* LinkedList_char::getFirst(){
//	return first;
//}
