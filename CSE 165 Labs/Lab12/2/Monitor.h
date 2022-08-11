#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>

using namespace std;

class Monitor {
    public:
        static int count;

        void incident() {
            count++;
        }

        void print() {
            cout << this->count << endl;
        }
};

#endif