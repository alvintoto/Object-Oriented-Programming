#ifndef DOG_h
#define DOG_h

#include <string>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
    public:
        Dog(string name, int age) : Animal() {
            cout << "Creating Dog" << endl;
            setName(name);
            setAge(age);
        }

        void feed(){
            cout << "A small bone, please!!" << endl;
        }

        ~Dog() {
            cout << "Deleting Dog" << endl;
        }
};

#endif