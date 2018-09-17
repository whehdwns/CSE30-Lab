#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int binarySearch(string* A, int array_size, string k)
{
	int first=0;
	int last=array_size-1;


		while(first<=last){ //suppose to loop until the last elememt of array
			int mid = (first+last)/2;
			if(A[mid]==k){
				return mid;//suppose to return the index it was found
			}
			else if (A[mid]>k){
				last = mid-1;
			} else if(A[mid]<k) {
				first = mid+1;
			}
		}
	return -1; //key is not found

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

	string k;
	cout<<"Input a value for k: "; //this should only appear if the array is sorted
	cin>>k;


	int key=binarySearch(A, size_of_line, k); //call binarySearch

	if(key==-1) //Since an integer can't be equal to a string it makes sense to check the if the key is not found
	{
		cout<<"The key k was not found in the array!";
	}else {
		cout<<"The key k  was found at element i";
	}

	file_in.close();  //close input
	file_out.close();  //close output

	return 0;
}
