#ifndef DOG_h
#define DOG_h

#include <string>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
    int age;
    string name;

    public:
        Dog(string name, int age) : Animal() {
            cout << "Creating Dog" << endl;
            this->name = name;
            this->age = age;
        }

        void feed(){
            cout << "A small bone, please!!" << endl;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        ~Dog() {
            cout << "Deleting Dog" << endl;
        }
};

#endif