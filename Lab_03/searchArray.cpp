#include <iostream>
using namespace std;
 int main(){
	int arraysize=0;
	cout<<"Enter the size of the array: ";
	cin>> arraysize;
	if(arraysize>0){
	double*thearray=new double [arraysize];
	cout<<"Enter the numbers in the array, seperated by a space, and press enter:";
	for(int i=0; i<arraysize;i++){
	cin>>thearray[i];
	}
	double num;
	cout<< "Enter a number to search for in the array:";
	cin>> num;

	int i=0;
	for(i=0; i<arraysize;i++){
	if(thearray[i]==num){
	cout<<"Found value " << num<< " at index " <<i<< " which took "<<i+1<<" checks." <<endl;
	//return 0;
	
	if(i+1==0){
	cout<<"We ran into the best case scenario!";
	}
	else (i+1==arraysize){
	cout<<"We ran into the worst case scenario!"<<endl;
	}

	}
	}else{
	cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
	}}
	return 1;
	}

