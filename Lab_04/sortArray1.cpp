#include <iostream>
using namespace std;
void getSorted( int * arr, int size, int ord)
{
  for(int i=0; i<size-1 ; i++)
    {
      int mine=i;
      for(int j=i+1; j<size; j++)
	{
	if(arr[mine]>arr[j] && ord ==0)
	  {
	    mine=j;
	  }
	else if(arr[mine] < arr[j] && ord==1)
	  {
	    mine=j;
	  }
	}
      if(mine !=1)
	{
	  int temp= arr[mine];
	  arr[mine] =arr[i];
	  arr[i]=temp;
	}
    }
}
	int main(){
	int size;
	int order;
	cout<<"Enter the size of the array" ;
	cin>>size;
	if(size < 0){
	  cout<<"ERROR : you entered an incorrect value for the array size!" ;
	}
	int * arr= new int [size];
	cout<< "ENter the numbers in the array, separated by a space, and press enter: ";
	for(int i=0; i<size; i++){
	cin>>arr[i];
	}
	cout<< "Sort in ascending (0) or descending (1) order? " ;
	cin>>order;
	if(order!=0 && order !=1){
	cout<<"Error" <<endl;
	}
	else{
	getSorted(arr, size, order);
	if(order==0){
	cout<<"This is the sorted array in ascedning order: ";
	}
	else{
	cout<<"This is the sorted array in descending order: ";
	}
	for(int i=0; i<size; i++){
	cout<<arr[i];
	}
	cout<<endl;
	}
	return 0;
}
