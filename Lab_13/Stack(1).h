
#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"
#include <iostream>
using namespace std;

template <class T>
class Stack: public LinkedList
{
	public:
		Stack();
		~Stack();
		void push (T valuePush);
		T pop();
		T top();
};
	template <class T>
		Stack<T>::Stack(){
		}
	template <class T>
		Stack<T>::~Stack(){
		}
	template <class T>
		void Stack<T>:: push(T valuePush)
		{
			//LinkedList<T>::
			insertAtFront(T valuePush);
		}
	template <class T>
		int  Stack<T> :: pop()
		{
			int n=first->val;
			//LinkedList<T>::
			removeFromFront();
			return n;
		}
	template <class T>
		int& Stack<T>:: top()
		{
			return first-> val;
		}


//	template <class T>
//	Stack_char<T>:: Stack_char(){
//		}
//	template<class T>
//		Stack_char<T>::~Stack_char(){
//		}
//	template<class T>
//		void Stack_char<T> ::push(T valuePush)
//		{
//			LinkedList<T>::insertAtFront(valuePush);
//		}
//	template<class T>
//		char Stack-char<T> ::pop()
//		{
//			char n= first->val;
//			LinkedList<T>::removeFromFront();
//			return n;
//		}
//	template <class T>
//		char& Stack_char<T> :: top()
//		{
//			return first -> val;
//		}

#endif

