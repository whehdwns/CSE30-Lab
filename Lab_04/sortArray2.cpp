#include <iostream>
using namespace std;
void InsertionSort( int array[], int size)
{
  for( int i=0; i<size-1; i++)
    {
      int j=i+1;
      int temp=array[j];
      while(j>0 && temp> array[j-1] )
	{	
	  array[j]=array[j-1];
	  j--;
	}
      array[j]= temp;
    }
}
void Sort( int array[], int size)
{
  for(int i=0; i<size-1; i++)
    {
	int j= i+1;
	int temp=array[j];
	while (j>0 && temp< array[j-1] )
       {
	 array[j]= array[j-1];
	 j--;
	}
	array[j] =temp;
    }
}

int main(){
	int size;
	int order;
	cout<<"Enter the size of the Array" ;
	cin>>size;
	int *array= new int [size];
	cout<<"Enter the numbers in the array, separted by a space, and press enter: ";
	for(int i=0; i<size; i++){
	cin>>array[i];
	}
	cout<<"Sort in ascending (0) or descending (1) order? " ;
	cin>>order;
	if( order !=0 && order !=1){
	cout<<"ERROR" <<endl;
	}else{
	if(order ==1) {
	InsertionSort(array, size) ;
	cout<<"This is the sorted array in ascending order: ";
	}
	if( order == 0) {
	Sort(array, size);
	cout<<"This is the sorted array in descending order: ";
	}
	for(int i=0; i<size; i++){
	cout<< array[i];
	}
	cout<<endl;
	}
	return 0;
} 
