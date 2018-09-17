#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//int binarySearch(string* A, int array_size, string k);
int binarySearch(string*A, int array_size, string k)
{
	int first=0;
	int last=array_size-1;

		while(first<=last){
			int mid = (first+last)/2;
			if(A[mid]==k){
				return mid;
			}
			else if (A[mid]>k){
				last = mid-1;
			} else if(A[mid]<k) {
				first = mid+1;
			}
		}
	return -1;
}

int main(){

	string line;
	string* A;
	int size_of_line = 0;

	ifstream file_in;
	file_in.open("words_in");

	ofstream file_out;
	file_out.open("words_out");

	while (!file_in.eof())
	{
		getline(file_in,line);
		size_of_line++;
	}

	A = new string[size_of_line];
	file_in.close();
	file_in.open("words_in");

	for( int i = 0; i < size_of_line-1; i++)
		{
      		getline(file_in,line);
      		A[i]=line;
		}

	for( int j = 0; j < size_of_line-1; j++)
		{
         	file_out << A[j]<<endl;
		}

	string k;
	cout<<"Input a value for k: ";
	cin>>k;


	int key=binarySearch(A, size_of_line, k);

	if(key==-1)
	{
		cout<<"The key" <<  k<<" was not found in the array!";
	}else {
		cout<<"The key" <<k<< "  was found at element" <<A<<"!";
	}

	file_in.close();
	file_out.close();

	return 0;
}
