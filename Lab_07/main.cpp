#include <iostream>
#include <iomanip>
#include "Time.h"
#include <stdlib.h>
#include <cstdlib>

using namespace std;
//void main:: getTimeFromUser();
//bool main:: validTime();
int main()
{
    Time startTime;
    Time endTime;
    cout << "Enter the start time for the class (format is HH:MM:SS): ";
    startTime.getTimeFromUser();
    
    if(!startTime.validTime())
    {
        cout << "The start time entered is invalid!" << endl;
        return 0;
    }

    cout << "Enter the end time for the class (format is HH:MM:SS): ";
    endTime.getTimeFromUser();

    if(!endTime.validTime())
    {
        cout << "The end time entered is invalid!" << endl;    
        return 0;
    }

    cout << "The lecture starts at "; 
    startTime.strTime24Hour();
    cout << " and ends at "; 
    endTime.strTime24Hour(); 
    cout << endl;
 
    return 1;
}

//void   getTimeFromUser()
//{
	//hours=0;
	//minutes=0;
	//seconds=0;
  //  string timeStr;
   // string tmpStr;
   // Time gottenTime;
   // getline(cin, timeStr);

    //tmpStr = timeStr.substr(0, 2);
    //hours = atoi(tmpStr.c_str());

//    tmpStr = timeStr.substr(timeStr.find_first_of(':')+1, 2);
  //  minutes = atoi(tmpStr.c_str());

    //tmpStr = timeStr.substr(timeStr.find_last_of(':')+1, 2);
   // seconds = atoi(tmpStr.c_str());

    //return;
//}

//bool  validTime()
//{
	//hours=0;
	//minutes=0;
	//seconds=0;
  //  if(hours < 0 || hours > 23)
      //  return false;
    //if(minutes < 0 || minutes > 59)
       // return false;
    //if(seconds < 0 || seconds > 59)
      //  return false;

//    return true;
//}


