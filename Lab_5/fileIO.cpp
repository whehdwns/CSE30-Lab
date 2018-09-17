#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){

	string line;
	int size_of_line = 0;


	ifstream file_in;
	file_in.open("words_in");

	ofstream file_out;
	file_out.open("words_out");

	while (!file_in.eof()) //counting the unknown amount of words in the file line by line
	{
		getline(file_in,line);
		size_of_line++;
	}
	string* array = new string[size_of_line];
	file_in.close();			  //Close the file to start over
	file_in.open("words_in"); //Restart from the beginning of the file

	for( int i = 0; i < size_of_line-1 ; i++) //after knowing the amount of lines/words in the file it reads in.txt
		{
      		getline(file_in,line);
      		array[i]=line;
		}

	for( int j = 0; j < size_of_line-1 ; j++) //this write on out.txt according to the input
		{
         	file_out << array[j]<<endl;
		}

	file_in.close();  //close input
	file_out.close();  //close output

	return 0;
}
