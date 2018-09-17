#include <iostream>
#include <string>
using namespace std;
int main(){
	int num;
	cout <<"Enter the number of lines for the punishment: ";
	cin>>num;
	if (num<0){
	cout << "You entered an incorrect value for the number of lines!"<<endl;
	
	}
	int line=0;
	cout <<"Enter the line for which we want to make a typo :";
	cin>>line;
	if (line<=0 || line>num){
	cout <<"You entered an incorrect value for the number of lines!"<<endl;
	
	}
	for(int i=0; i<num; i++){
	if (i+1==line)
	cout <<"I will always use object oriented programing"<< endl;
	else
	cout <<"I will always use object oriented programming"<<endl;
	}
	return 1;
}
