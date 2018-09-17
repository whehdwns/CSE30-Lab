#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
	struct Time{
		int hours;
		int minutes;
		int seconds;
	};
	Time getTimeFromUser();
	bool validTime(Time timeToCheck);
	void strTime24Hour( Time timeToPrint);

int main(){
	cout<<"Enter the start time for the lecture (format is HH:MM:SS) :";
	Time startTime =getTimeFromUser();

	if(!validTime (startTime)){
		cout<<"The Start time entered is invalid" <<endl;
		return 0;
	}
	cout<<"Enter the end time for the lecture (format is HH:MM:SS) :";
	Time endTime= getTimeFromUser();

	if(!validTime (endTime)){
		cout<<"The end time entered is invalid" <<endl;
		return 0;
	}
	cout<<"The lecture starts at" ;
	strTime24Hour(startTime);
	cout<<"and ends at" ;
	strTime24Hour(endTime) ;
	cout<<endl;

	return 1;
}

Time getTimeFromUser (){
	string timeStr;
	string tmpStr;
	Time gottenTime;
	getline( cin , timeStr);

	tmpStr= timeStr.substr(0, 2);
	gottenTime.hours = atoi( tmpStr.c_str());

	tmpStr= timeStr.substr(timeStr.find_first_of(':')+1, 2);
	gottenTime.minutes = atoi(tmpStr.c_str());

	tmpStr= timeStr.substr(timeStr.find_last_of(':')+1, 2);
	gottenTime.seconds = atoi(tmpStr.c_str());

	return gottenTime;
}
bool validTime( Time  timeToCheck){
	if(timeToCheck.hours <0 || timeToCheck.hours >23)
		return false;
	if(timeToCheck.minutes <0 || timeToCheck.minutes >59)
		return false;
	if(timeToCheck.seconds <0 || timeToCheck.seconds >59)
		return false;
		return true;
}
void strTime24Hour(Time timeToPrint){
	cout<<setw(2) <<setfill('0') <<timeToPrint.hours <<":";
	cout<<setw(2) <<setfill('0') << timeToPrint.minutes<<";";
	cout<<setw(2) <<setfill('0') <<timeToPrint.seconds;
	return ;
}


