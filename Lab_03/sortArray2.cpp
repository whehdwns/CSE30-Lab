#include <iostream>
using namespace std;
int main(){
	int arraysize=0;
	cout<<"Enter the size of the array:";
	cin>>arraysize;
	if(arraysize>0){
	int* thearray=new int[arraysize];
	cout<<"Enter the numbers in te array, separaed by a space, and press enter:";
	for(int i=0; i<arraysize; i++){
	cin>>thearray[i];
	}
	int num;
	int swaps=0;
	int j;
	for(int i=1; i<arraysize; i++){
	num=thearray[i];
	for(j=i;j>0 && thearray[j-1]>num; j--){
	swaps++;
	thearray[j]=thearray[j-1];
	}
	thearray[j]=num;
	}
	cout<<"The sorted array is in an ascending order: ";
	for(int i=0; i<arraysize;i++){
	cout<<thearray[i];
	if( i+1==arraysize)
	cout<<endl;
	else
	cout  <<" ";
	}
	cout<<"The algorithm selected the minimum for the traverse of array."<<endl;
	cout<<"It took "<< swaps-2<< "swaps to sort the array..."<<endl;
	}else{
	cout<<"ERROR:you entered an incorrect value for the array size!"<<endl;
	}
	return 1;
}
