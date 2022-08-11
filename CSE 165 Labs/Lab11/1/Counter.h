#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

using namespace std;

class Counter {
    public:
        int ID;
        static int count;

    Counter() : ID(count++) {
        cout << this->ID << " created" << endl;
    }

    ~Counter() {
        cout << this->ID << " destroyed" << endl;
    }
};

#endif