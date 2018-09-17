#include <iostream>
using namespace std;
	int main(){
	int a[10];
	int x;
	int i, j, num;
	cout<<"Enter the number of array";
	cin>>x;
	cout<<"Enter the numbers in the array, seperated by a space, and press enter";
	for(j=0; j<x; j++){
	cout<<a[j];
	}
	for(i=0; i<=x; i++){
	for(j=0; j<=x; j++){
	if(a[j]>a[j+1]){
	num=a[j];
	a[j]=a[j+1];
	a[j+1]=num;
	}
	}
	}
	cout<<"This is the sorted array in descending order: " ;
	for(j=x-1; j>=0; j--){
	cout<<a[j];
	}
	}
