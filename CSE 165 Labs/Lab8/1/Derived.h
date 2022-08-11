#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "ADT.h"

using namespace std;

class Derived : public ADT {
public:
    Derived() {
    }

    void doSomething() {
        cout << "I DID SOMETHING" << endl; 
    }

    void doSomethingElse() {
        cout << "I DID SOMETHING ELSE" << endl; 
    }

    void dontDoThis() {
    }
};

#endif