#include <iostream>
using namespace std;
int main(){
	int a[5];
	int n,i,j,num;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the numbers in the array, seperated by a space, and press enter:  \n";
	for(int i=1; i<=n; i++){
	cin>>a[i];
	for(i=1;i<=(n-1);i++){
	for(j=1;j<n-i; j++){
	if(a[j]>a[j+1]){
	num=a[j];
	a[j]=a[j+1];
	a[j+1]=num;
	}
	}
	}
	cout<<"This is sorted array in descending order: \n" ;
	for(i=1; i<=n; i++){
	cout<<a[i]<<endl;

}
}
}
