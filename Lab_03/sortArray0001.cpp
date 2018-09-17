#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int arraysize=0;
	cout<<"Enter the size of the array" ;
	cin >>arraysize;
	if(arraysize>0){
	int *thearray=new int [arraysize];
	cout<<"Enter the numbers in the array, separated by a space, and press enter.";
	for(int i=0; i<arraysize; ++i){
	thearray[i]=i*2;
	}
	for(int i=0; i<arraysize; ++i){
	cout<<thearray[i]<<" ";
	}
	cout<<"\n";
	return 0;
}}
