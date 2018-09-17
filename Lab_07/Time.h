#ifndef TIME_H
#define TIME_H

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        Time();
        Time(int newHours, int newMinutes, int newSeconds);
        ~Time();

        // Accessors
        int getHours();
        int getMinutes();
        int getSeconds();

        // Mutators
        void setHours(int newHours);
        void setMinutes(int newMinutes);
        void setSeconds(int newSeconds);

        void getTimeFromUser();
       bool validTime();
        void strTime24Hour();       

};

#endif
