#include <iostream>
#include "LinkedList_char.h"
#include "Stack_char.h"
using namespace std;
int main()
{
Stack<char> s1;                   //create stack
Stack<int> s2; //create stack
cout << "Testing Stack #1: " << endl;
   cout << "isEmpty(): ";           //call isEmpty
   if(s1.isEmpty()){
       cout << "true" << endl;
   } else {
       cout << "false" << endl;
   }
   cout << "push(A) Stack contents:";       //push A into stack
   s1.push('A');
   s1.print();
   cout << endl;
   cout << "push(Y) Stack contents:";       //push Y into stack
   s1.push('Y');
   s1.print();
   cout << endl;
   cout << "Size(): ";               //get size of stack
   cout << s1.size();
   cout << " Stack contents: ";
   s1.print();
   cout << endl;
   cout << "Pop(): " << s1.pop() << " Stack contents: ";
   s1.print();                   //pop out the top of the stack
   cout << endl;
   cout << "isEmpty(): ";           //call isEmpty
   if(s1.isEmpty()){
       cout << "true" << endl;
   } else {
       cout << "false" << endl;
   }
   cout << "push(D) Stack contents:";       //push D into stack
   s1.push('D');
   s1.print();
   cout << endl;
   cout << "Top(): " << s1.top() << " Stack contents: ";
   s1.print();                   //get the top of the stack
   cout << endl;
   cout << "push(T) Stack contents:";
   s1.push('T');
   s1.print();
   cout << endl;
   cout << "Pop(): " << s1.pop() << " Stack contents: ";
   s1.print();
   cout << endl;
return 0;
} 
