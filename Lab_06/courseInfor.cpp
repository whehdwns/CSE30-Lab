#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <string>
#include <sstream>

using namespace std;

struct Time{
string hour_s, minute_s, second_s;
int hours, minutes, seconds;
string my_line;
} start, end;

struct Course{
int number;
string name;
int credits;
bool majorRequirement;
double avgGrade;
string days;
Time startTime;
Time endTime;
};


int main()
{
	cout << "-------------------";
	cout << "SCHEDULE OF STUDENT";
	cout << "-------------------";

	int count = 0;
	string line;
	ifstream myfile("in.txt");
	if (myfile.is_open()){
		while(getline(myfile, line)){
			count += 1;
			if(count == 1){
				cout << "COURSE " << line;
				}
			if(count == 2){
				cout << " " << line << endl;
				}
			if(cout == 3){
				cout
			}
		myfile.close();
		}
	else cout << "Unable to open file";
	return 0;
	}
