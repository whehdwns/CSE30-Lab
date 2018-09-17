#include <iostream>
using namespace std;
int compare (int , int);
void sort(int [], const int);
void swap (int *, int *);
int compare (int x, int y){
return (x<y);
}
void swap( int *x, int *y)
{
int num;
num=*x;
*x=*y;
*y=num;
}
void sort(int table[], const int n){
	for(int i=0; i<n; i++){
	{ for (int j=0; j<n-1; j++){
	{int (compare (table[j], table[j+1]))
		swap(&table[j], &table[j+1]);
		}
	}
}
int size;
int* array;
int main(int arg, char* argv[]){
	cin>>size;
	array=new int [size];
	cout<<"ENter the size of the array";
	for(int i=0; i<size;i++){
		cin>>array[i];
	}
	cout<<"Enter the numbers int the array, separated by a space, and press enter" ;
	for(int i=0; i<size; i++){
	cout<<array[i] <<" ";
	}
	cout<<"This is the sorted array in ascending order:";
	sort(array,size);
	for(int i=0; i<size; i++){
	cout<<array[i]<< " " ;
	}
	cout<<"The algorithm selected the maximum for the traverse of the array" <<endl;
	return 	0;
}

