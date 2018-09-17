#include <iostream>
using namespace std;
int main(){
	cout<<"ENter the size of the array" ;
	int size;
	bool isBestCase=false;
	bool isWorstCase= false;
	cin>>size;
	if(size<=0){
	cout<<"Error: you entered an incorrect value of the array size "<<endl;
	return (0);
	}
	int array[size];
	int key;
	int i;
	cout<<"Enter the numbers in the array, separated by a space, and press enter" ;
	for(int j=0; j<size; j++){
	cin>>array[j];
	}

	cout<<"Enter a number to search for in the array: ";
	cin>>key;
	for( i=0; i<size; i++){
	if(key==array[i]){
	if(i==0){
	isBestCase=true;
	}
	if( i==i){
	isWorstCase=true;
	}
	break;
	}
	}
	if(i !=size){
	cout<<"Found Value" << key<< "at index" <<i-1<< " which took" << i++<<"checks" <<endl;
	}else{
	cout<<"The value" <<key<<"was not founce in array!" <<endl;
	cout<<"we ran into the worst case scenario!" ;
	}
	if(isBestCase){
	cout<<"We ran into the best case scenario!" ;
	}
	if(isWorstCase){
	cout<<"We ran into the worst case scenario! ";
	}
	return 0;
}
