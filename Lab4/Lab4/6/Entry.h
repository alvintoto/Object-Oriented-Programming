#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

using namespace std;

struct Entry {
    string name;
    string lastname;
    string email;

    void setName(string first) {
        name = first;
    }

    void setLastname(string last) {
        lastname = last;
    }

    void setEmail(string mail) {
        email = mail;
    }

    string getName() {
        return name;
    }

    string getLastname() {
        return lastname;
    }

    string getEmail() {
        return email;
    }

    void e_print() {
        cout << getName() << endl;
        cout << getLastname() << endl;
        cout << getEmail() << endl;
    }
};

#endif