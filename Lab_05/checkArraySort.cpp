#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int checkArraySort(int array_max, string arr[]);
int main () {
	const int array_max= 20;
	string arr[ array_max];
	int d;
	ifstream myfile_in;
	myfile_in.open ("words_in");
	string line;
	for(int i=0; i<array_max; i++){
		getline(myfile_in, line);
	}
	int array_max1=4;
	string arr1[]={"a","b","c","d"};
	d=checkArraySort(array_max1, arr1);
	if(d== -1){
	cout<<"The array is sorted in descending order" ;
	}
	if(d==0) {
	cout<< "The array is not sorted" ;
	}
	if(d ==1){
	cout<<"The array is sorted in ascending order" ;
	}
	myfile_in.close();
	return 0;
}

	int checkArraySort(int array_max, string arr[]){
	bool y= false;
	int j=0;
	for( int i=1; i<array_max; i++)
	{
		if(arr[i] <arr[i-1]) 
		{
			j++;
		}
		if( j== (array_max-1) )
		{
			return -1;
		}
	}

	for( int i=1; i<array_max; i++)
	{
		if(arr[i] > arr[i-1])
		{
			j++;
		}
		if( j==(array_max-1))
		{
			return 1;
		}
	}
	if(y== false) 
	{
		return 0;
	}

}


