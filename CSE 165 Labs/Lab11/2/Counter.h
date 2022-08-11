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

    void* operator new(size_t size)
    {
        cout << "new" << endl;
        void* p = malloc(size);
     
        return p;
    }

    void operator delete(void* p) {
        cout << "delete" << endl;
        free(p);
    }
};

#endif