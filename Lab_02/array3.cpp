#include <iostream>
#include <string>
#include <cstdlib>
#include <malloc.h>
using namespace std;
int main(){
	int array[10][10], i,j,n,negative_num=0;
	cout<<"\nEnter the size of the 2D array:";
	cin>>n;
	int ** ptr;
	if(n<=10){
	ptr=(int **)malloc(n*sizeof(int *));
	for(i =0; i<n; i++){
	ptr[i]=(int *) malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
	cout<<"\nEnter the values for row" <<(i+1)<< "," <<"seperated by a space" <<"and press enter";
	for(j=0;j<n;j++){
	cin>>prt[i][j];}
	}
	for(i=0; i<n;i++){
	for(j=; j<n; j++){
	if((*(*(ptr+i)+j))<0){
	negative_num++;
	}
	}
	}
	cout<< "\nThere are" <<negative_num<< "nagative values";
	if(negative_num==0){
	cout<< "\nAll values are Non-negative";
	]
	}else{
	cout<<"\narray size should be less than or equal to 10 only";
	}
	return 0;
	}

