# include <iostream>
using namespace std;
	bool isIncreasing(int arr[], int arraysize){
	for(int i=0; i<arraysize-1; i++){
	if(arr[i]>arr[i+1]){
	return false;
		}
	}
	return true;
}
	int main(){

	int  arraysize =0;
	int num=0;
		cout << "Enter the size of the array: " << endl;
		cin >> arraysize;
	if (arraysize <1){
	cout << "ERROR: you entered an incorrect value for the array size!" <<endl;
	}
	int* arr = new int [arraysize];
	cout<< "Enter the numbers in the array, seperated by a space, and press enter: " <<endl;

	int i =0;
	while (i< arraysize){
	cin>> num;
	arr[i]=num;
	i++;
	};

	if( isIncreasing(arr, arraysize)){
	cout <<"This IS an increasing array! "<< endl;
	}else {
	cout<<"This is NOT an increasing array!"<<endl;
	}
	for(int i=0; i<arraysize; i++){
	cout <<arr[i];
	if((i+1)==arraysize){
	cout <<" ";
	}else cout <<" ";
}
	return 0;
}



