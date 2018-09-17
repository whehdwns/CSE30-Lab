#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
	string line;
	cout<<"Enter the string to reverse" <<endl;
	if(getline(cin,line)){
	cout<<"The reverse string is  " <<endl;
	for(int i=line.length()-1; i>=0; i--){
		cout<< line[i];
	}
	}
	return 0;
	}

