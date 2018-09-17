#include <iostream>
#include <string>
#include <sstream>

using namespaces std;
bool isValidTime(int , int ,int);
bool getTimeFromUser(char[]);
void print24Hour(char[]);
const char delim =':' ;
int hr, min,sec;
int inn, in;

int main(int argc, char *argv[]){
	bool a;
	char Timestructure[] = {'HH', ':', 'MM',':','SS');
	while (true){
