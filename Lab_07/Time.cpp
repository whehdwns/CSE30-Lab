#include <iostream>
#include <iomanip>
#include "Time.h"
#include <cstdlib>
#include <stdlib.h>
using namespace std;

// Constructor
Time::Time()
{
    hours=0;
    minutes=0;
    seconds=0;
}

Time::Time(int newHours, int newMinutes, int newSeconds)
{
    hours=newHours;
    minutes=newMinutes;
    seconds=newSeconds;
}


// Destructor
Time::~Time()
{
}

// Accessors
int Time::getHours()
{
    return hours;
}

int Time::getMinutes()
{
    return minutes;
}

int Time::getSeconds()
{
    return seconds;
}

// Mutators
void Time::setHours(int newHours)
{
    hours = newHours;
}

void Time::setMinutes(int newMinutes)
{
    minutes = newMinutes;
}

void Time::setSeconds(int newSeconds)
{
    seconds = newSeconds;
}

void Time::getTimeFromUser()
{
    string timeStr;
    string tmpStr;
    Time gottenTime;
    getline(cin, timeStr);

  tmpStr = timeStr.substr(0, 2);
    hours = atoi(tmpStr.c_str());

    tmpStr = timeStr.substr(timeStr.find_first_of(':')+1, 2);
    minutes = atoi(tmpStr.c_str());

    tmpStr = timeStr.substr(timeStr.find_last_of(':')+1, 2);
    seconds = atoi(tmpStr.c_str());

   return;
}


bool Time::validTime()
{
    if(hours < 0 || hours > 23)
        return false;
    if(minutes < 0 || minutes > 59)
        return false;
    if(seconds < 0 || seconds > 59)
        return false;

    return true;
}

void Time::strTime24Hour()
{
    cout << setw(2) << setfill('0') << hours << ":";
    cout << setw(2) << setfill('0') << minutes << ":";
    cout << setw(2) << setfill('0') << seconds;
    return;
}
 
