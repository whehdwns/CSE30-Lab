#include <iostream>

#include <fstream>
#include <stdlib.h>
#include<iomanip>
#include <algorithm>
using namespace std;
struct Time

{

                string hh;

                string min;

                string sec;

};

struct Course

{

                string name;

                int credits;

                bool majorRequirement;

                double avgGrade;

                string days;

                Time startTime;

                Time endTime;

};

int main() {

                Course* C=new Course[30];

                ifstream fin;

    fin.open ("In.txt");

    if (!fin.fail())

    {

        for (int i = 0; i < 30; i++)

        {

            string credit,grade,majorReq;



            getline(fin,C[i].name);

            getline(fin,credit);

            getline(fin,majorReq);

            getline(fin,grade);

            getline(fin,C[i].startTime.hh);

            getline(fin,C[i].startTime.min);

            getline(fin,C[i].startTime.sec);

            getline(fin,C[i].endTime.hh);

            getline(fin,C[i].endTime.min);

            getline(fin,C[i].endTime.sec);





            C[i].credits = atoi(credit.c_str());

            C[i].majorRequirement=atoi(majorReq.c_str());
		

            C[i].avgGrade = atof(grade.c_str());







            }

        }

cout<<"---------------------Schedule of student---------------------------------"<<endl;

        for (int i = 0; i < 30; i++)

        {

            cout<<"Course"<<i+1<<endl;
            cout <<"this course is a major requirement"<<C[i].majorRequirement<<endl;
            cout <<"Number of credits:"<<C[i].credits<<endl;
            cout<<"Days of Lectures:"<<C[i].days <<endl;
            cout<<"Lecture Time"<<C[i].startTime.hh<<":"<<C[i].startTime.min<<":"<<C[i].startTime.sec<<endl;
            cout<<"Stat: on average students get "<<C[i].avgGrade<<"%"<<" in this course."<<endl;



        fin.close();// your code goes here

                return 0;

}
}
