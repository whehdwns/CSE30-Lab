#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

struct Time
{
    int hr, min, sec;
};

struct Course
{
    string name;
    int credits;
    bool majorReq;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;
};


////
int main()
{

    cout << "-------------------" << endl;
    cout << "SCHEDULE OF STUDENT" << endl;
    cout << "-------------------" << endl;

    Course cls;

    ifstream myfile;
    myfile.open("in.txt");
	string line;
    getline(myfile, line);
    int count = atoi(line.c_str());
    int i=1;

    while (!myfile.eof())
	{
       while (i <= count)
	{
           getline(myfile, line);
            cls.name = line;

            getline(myfile, line);
            cls.credits = atoi(line.c_str());

            getline(myfile, line);
            cls.majorReq = (bool)atoi(line.c_str());

            getline(myfile, line);
            cls.avgGrade = atof(line.c_str());

            getline(myfile, line);
            cls.days = line;

            getline(myfile, line);
            int hour = atoi(line.substr(0,2).c_str());
            int minute = atoi(line.substr(3,5).c_str());
            int seconds = atoi(line.substr(6,8).c_str());
            cls.startTime.hr = hour;
            cls.startTime.min = minute;
            cls.startTime.sec = seconds;

            getline(myfile, line);
            hour = atoi(line.substr(0,2).c_str());
            minute = atoi(line.substr(3,5).c_str());
            seconds = atoi(line.substr(6,8).c_str());
            cls.endTime.hr = hour;
            cls.endTime.min = minute;
            cls.endTime.sec = seconds;

            cout << "COURSE " << i << ": " << cls.name << endl;

            if(cls.majorReq)
		{
                cout << "Note: this class is a major requirement!" << endl;
            }
            else
		{
                cout << "Note: this class is not a major requirement..." << endl;
            }

            cout << "Number of credits: " << cls.credits << endl;

            cout << "Days of lecture: " << cls.days << endl;

            if (cls.startTime.hr > 12)
		{
                cout << "Lecture time: " << (cls.startTime.hr - 12) << ":" << cls.startTime.min << ":" << cls.startTime.sec << "pm - ";
            }
            else
		{
                cout << "Lecture time: " << cls.startTime.hr << ":" << cls.startTime.min << ":" << cls.startTime.sec << "am - ";
            }

            if (cls.endTime.hr > 12)
		{
                cout << (cls.endTime.hr - 12) << ":" << cls.endTime.min << ":" << cls.endTime.sec << "pm" << endl;
            }
            else
		{
                cout << cls.endTime.hr << ":" << cls.endTime.min << ":" << cls.endTime.sec << "am" << endl;
            }

            cout << "Stat: on average students get " << cls.avgGrade << "% in this course." << endl;

           i++;
      	 	 }

	}
    return 0;

}
