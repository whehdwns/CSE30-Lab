#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int checkArraySort(string* A ,int array_size){
	int descend = 0;
	int ascend = 0;

	for(int i = 0; i < array_size; i++){
		{
			if( A [i] < A [i+1]) {
				ascend = 1;
				// ascending order
		}
			else if(A [i] > A [i+1]){
				descend = 1;
				//descending order
			}

		}
		if(ascend==1 && descend==0) //an array in ascending order to return 1
		{
			return 1;
		}
		else if(descend==1 && ascend==0)
		//an array in descending order to return -1
		{
			return -1;
		}
		else{
			return 0;
		} //unsorted return 0
	}
}


int main(){

	string line;
	string* A;
	int size_of_line = 0;


	ifstream file_in;
	file_in.open("words_in");

	ofstream file_out;
	file_out.open("words_out");

	while (!file_in.eof()) //counting the unknown amount of words in the file
	{
		getline(file_in,line);
		size_of_line++;
	}

	A = new string[size_of_line];
	file_in.close();
	file_in.open("words_in"); //To restart from the beginning of the array

	for( int i = 0; i < size_of_line-1; i++) //after knowing the amount of lines/words in the array it reads in.txt
		{
      		getline(file_in,line);
      		A[i]=line;
		}

	for( int j = 0; j < size_of_line-1; j++) //this write on out.txt according to the input
		{
         	file_out << A[j]<<endl;
		}

	int value = checkArraySort(A,size_of_line); //call function checkArraySort

	if(value==1) //if checkArraySort return 1 this print statment appear
	{
		cout<<"The array is sorted in ascending order";
	}
	else if(value==-1)  //if checkArraySort return -1 this print statment appear
	{
		cout<<"The array is sorted in descending order";
	}
	else if(value==0)  //if checkArraySort return 0 this print statment appear
	{
		cout<<"The array is not sorted";
	}

	file_in.close();  //close input
	file_out.close();  //close output

	return 0;
}
