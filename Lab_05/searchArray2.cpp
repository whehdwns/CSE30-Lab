#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int checkArraySort(int array_max, string arr[]);
int binarySearch(int arr[], int low, int high, int key);
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
	int key;
	cout<<"Enter a number to search for in the array:";
	cin>>key;
	int foundIndex= binarySearch(arr,0, d-1, key);
	if(foundIndex !=-1){
		cout<<"Found value"<<key<<"at index" <<foundIndex<<"."<<endl;
	}
	else
	{
	cout<<"The Value" <<key<<"was not found in the array." <<endl;
	}
	}
	else {
	cout<<"ERROR: you entered an incorrect value for the arraySize" <<endl;
	}
	myfile_in.close();
	return 0;
}
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

	int binarySearch(int arr[], int low, int high, int ley){
	if(low>high)
		return -1;
	int middle =(int) ceil ((double)(low+high)/2);
	if(arr[middle]=key)
		return middle;
	else if(arr[middle] >key)
		return binarySearch(arr, low, middle-1, key)
	else
		return binarySearch(arr, middle+1, high, ley)
}
