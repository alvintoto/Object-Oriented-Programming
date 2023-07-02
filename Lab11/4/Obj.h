#ifndef OBJ_H
#define OBJ_H

#include <iostream>
#include "shared.h"

using namespace std;

class Obj : public Shared {
    public:
        string n;

        Obj(string n) {
            this->n = n;
            cout << "New " << this->n << endl;
        }

        ~Obj() {
            cout << "Delete " << this->n << endl;
        }
};

#endif