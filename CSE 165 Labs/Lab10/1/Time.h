#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        Time(int hours, int minutes, int seconds) {
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        void print() {
            cout << this->hours << " hours, " << this->minutes << " minutes, " << this->seconds << " seconds" << endl;
        }

        Time operator +(const Time& t) {
            int seconds = this->seconds + t.seconds;
            int minutes = this->minutes + t.minutes + (seconds / 60);
            int hours = this->hours + t.hours + (minutes / 60);

            seconds %= 60;
            minutes %= 60;

            Time output = Time(hours, minutes, seconds);
            return output;
        }

};

#endif