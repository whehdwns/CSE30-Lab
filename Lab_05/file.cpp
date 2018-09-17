#include <iostream>
#include <fstream>
#include <assert>

int main (void){
	int data;
	ifstream fin;
	fin.open("words_in.txt");
	assert(!fin.fail());
	fin>>data;
	while(!fin.eof()){
	cout<<data<<endl;
	fin>>data;
	}
	fin.close();
	asser(!fin.fail());
	return 0;
}
