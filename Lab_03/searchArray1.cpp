#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array: " ;
	cin>>size;
	if(size<=0){
	cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
	return (0);
	}
	int array[size];
	int index;
	cout<<"Enter the numbers in the array, separated by a space, and press enter";
	for(int i=0; i<arraysize; i++){
	cin>>array[i];
	}
	cout<<"Enter the number to search for the array:" ;
	cin>> index;

	for(i=0; i<size; i++){
	if(index==array[i]){
	if(i==0){
	cout<<"We ran into the best case scenario!";
	}}
	if(i!=size){
	cout<<"Found value" <<index<<"at index"<< "which too"<< i++<<"checks."<<endl;
	}else{
	cout<<"The value" <<index<< "was not found in array!"<<endl;
	cout<<"We ran into the worst case scenario!";
	}
	return 0;
}
