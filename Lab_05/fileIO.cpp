#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string *words;
	int count=0;
	string tempStr;
	ifstream fin;
	fin.open("words_in");
	if( !fin){
	cout<<"File does not exit. " <<endl;
	//exit(1);
	return 0;
	}
	while( !fin.eof()){
	fin>>tempStr;
	count ++;
	}
	fin.close();

	words =new string [count];
	//string outputFile= "words_out.txt" ;
	ofstream fout;
	fout.open("words_out");
	int index=0;
	fin.open("words_in");
	if(!fin){
	cout<<"File does not exit" <<endl;
	//system("pause");
	return 0;
	}
	while(!fin.eof() && index <count) {
	fin>> tempStr;
	words[index] =tempStr;
	fout<<words[index] <<endl;
	index++;
	}
	fout.close();
	fin.close();

	//system("pause") ;
	return 0;
}
