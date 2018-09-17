#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of a 2D array:";
	cin>>n;
	if(n<1 || n>10){
	cout<<"ERROR: your array is too large! Enter 1 to 10" <<endl;
	return 0;
	}
	int arr[n][n];
	int count=0;
	for(int i=0; i<n; i++){
	cout<< "Enter the values in the array for row" <<i+1<<",seoerated by a space and press enter;";
	for(int j=0; j<n; j++){
	cin>>arr[i][j];
	if(arr[i][j]<0){
	count++;
	}
	}
	}
	if(count==0){
	cout<<"All values are non-negative"<<endl;
	}else{
	cout<<"There are" << count<< " negative values!"<<endl;
	}
	return 0;
	}
