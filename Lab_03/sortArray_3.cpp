#include <iostream>
#include <cstdlib>
using namespace std;
int compare (int , int);
void sort(int[], const int);
void swap(int * , int *);
int compare(int x, int y){
return (x<y);
}
void swap(int *x, int *y){
int num;
num=*x;
*x=*y;
*y=num;
}
void sort(int table[], const int x){
	for(int i=0; i<x; i++){
	for(int j=0; j<x-1; j++){
		if(compare(table[j], table[j+1]))
			swap(&table[j], &table[j+1]);
		}
	}
}

int size;
int* array;
	int maiin(int argc, char *argv[]){
	cin>>size;
	array=new int[size];
	cout<<"Enter the size of the array: ";
	for(int i=0; i<size; i++){
	cin>>array[i];
	}
	cout<<"Enter the numbers in the array, seperated by a space, and press enter ";
	for(int i=0; i<size; i++){
		cout<<array[i];
	}
	cout<<"This is the sorted array in descending order :" ;
	sort(array,size);
	for(int i=0; i<size; i++){
	cout<<array[i];
	}
	cout<<"The algorithm selected the maximum for  the traverse of the array" <<endl;
	return 1;
}

