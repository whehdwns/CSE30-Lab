#include "LinkedList_char.h"
#include<iostream>

using namespace std;

LinkedList_char::LinkedList_char()
{
	first = NULL;      //first and last are initalized
	last = NULL;
}

LinkedList_char::~LinkedList_char()
{
	clear();           
}

void LinkedList_char::insertAtBack (char initialValue) //adding node at the back
{
        Node*temp = new Node();     
        temp -> val= initialValue;             

        if (first == NULL)
        {
                first = temp;					
        }
        if (last == NULL)
        {
                last = temp;
        }
        else {
                last -> next = temp;	
                last = temp;
        }
}

bool LinkedList_char::removeFromBack()
{
        Node*temp = first;				
        if(last == NULL){
        		return false;	
        }
        if(first==last){		
        		delete first;	
        		first = NULL;
        		last = NULL;
        		return true;
        }
		while(temp -> next != last){
                temp = temp -> next;  
        }
                delete last;		
                last = temp;  
                return true;
}

void LinkedList_char::print ()
{
	if (first != NULL){
		Node* temp = first; 
		while(temp != last){
			cout<<temp -> val << ",";     
			temp = temp -> next;
		}
	cout<<temp -> val;
	}
	else cout<<" ";
}

bool LinkedList_char::isEmpty()
{
        if (first == NULL ) {			
            return true;
        } else 
        	return false;
}

int LinkedList_char::size()
{
		Node *temp;
		int counter = 1;					
		if(first == NULL && last == NULL){
			return 0;
		}
		else {
			temp = first;
		while (temp != last){		
			temp = temp -> next;
			counter++;				
		}
	}
	return counter;
}

void LinkedList_char::clear()		
{
		while(!isEmpty()){
			removeFromBack();
		}
}

void LinkedList_char::insertAtFront(char initialValue) 
{ 												       
	Node*temp = new Node();
	temp -> val = initialValue;
	if (first == NULL){
		first = temp;
	}
	if (last == NULL){
		last = temp;
	}
	else{
		temp -> next = first;
		first = temp;
	}
}

bool LinkedList_char::removeFromFront()   
{ 									     
	Node*temp = first;
	if (first == NULL){
		return false;
	}
	if (first == last){
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
		temp = temp -> next;
		delete first;
		first = temp;
		return true;
}